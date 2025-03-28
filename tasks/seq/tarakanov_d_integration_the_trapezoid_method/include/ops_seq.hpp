// Copyright 2025 Tarakanov Denis
#pragma once

#include <memory>
#include <utility>

#include "core/task/include/task.hpp"

namespace tarakanov_d_integration_the_trapezoid_method_seq {

class IntegrationTheTrapezoidMethodSequential : public ppc::core::Task {
 public:
  explicit IntegrationTheTrapezoidMethodSequential(std::shared_ptr<ppc::core::TaskData> task_data)
      : Task(std::move(task_data)) {}
  bool PreProcessingImpl() override;
  bool ValidationImpl() override;
  bool RunImpl() override;
  bool PostProcessingImpl() override;

 private:
  double a_{}, b_{}, h_{}, res_{};
  static double FuncToIntegrate(double x) { return x / 2; };
};

}  // namespace tarakanov_d_integration_the_trapezoid_method_seq