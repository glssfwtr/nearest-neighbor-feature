#include "print_handler.hpp"

void PrintHandler::PrintDataSet(const std::vector<RowData>& data_set)
{
  // set precision for std::cout to make sure input is accepting 8 precision
  std::cout << std::fixed << std::setprecision(8);

  for ( const auto& row_data : data_set )
  {
    std::cout << row_data.class_label << " ";

    for ( const auto& feature : row_data.feature_values )
    {
      std::cout << feature << " ";
    }

    std::cout << "\n";
  }

  std::cout << "features per label: " << RowData::GetNumberOfFeatures(data_set) << "\n";
  std::cout << "number of labels: " << RowData::GetNumberOfLabels(data_set) << "\n";

  return;
}

void PrintHandler::PrintFeaturesTable(const std::vector<std::size_t>& feature_columns)
{
  for ( const auto& feature : feature_columns )
  {
    std::cout << feature << " ";
  }

  std::cout << "\n";

  return;
}

void PrintHandler::PrintFeatureSetAccuracy(const FeatureSetAccuracy &feature_set_accuracy)
{
  std::cout << "set: { ";

  for ( const auto& feature_index : feature_set_accuracy.feature_indices )
  {
    std::cout << feature_index << " ";
  }

  std::cout << "} ";

  std::cout << std::fixed << std::setprecision(1);
  std::cout << "     ACC: " << feature_set_accuracy.accuracy << "\n";

  return;
}
