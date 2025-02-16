#ifndef NEAREST_NEIGHBOR_CLASSIFIER_HPP_
#define NEAREST_NEIGHBOR_CLASSIFIER_HPP_

#include <vector>
#include <cmath>

#include "IEEE_data_parser.hpp"

class Classifier
{
  public:
    Classifier(const std::vector<RowData>& training_data_set) : training_data_set_(training_data_set) { }

    std::vector<RowData>& GetTrainingDataSet();
    void SetTrainingDataSet(const std::vector<RowData>& training_data_set);

    double GetEuclideanDistance(const RowData& r1, const RowData& r2, const std::vector<std::size_t>& feature_indices);



    void NearestNeighborClassifier();


  private:
    std::vector<RowData> training_data_set_;

};

#endif  // NEAREST_NEIGHBOR_CLASSIFIER_HPP_