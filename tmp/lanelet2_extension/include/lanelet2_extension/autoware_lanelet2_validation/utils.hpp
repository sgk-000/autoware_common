// Copyright 2023 Autoware Foundation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef LANELET2_EXTENSION__AUTOWARE_LANELET2_VALIDATION__UTILS_HPP_
#define LANELET2_EXTENSION__AUTOWARE_LANELET2_VALIDATION__UTILS_HPP_

#include <lanelet2_validation/Validation.h>
#include <lanelet2_validation/ValidatorFactory.h>

#include <string>
#include <vector>

namespace lanelet
{
namespace autoware
{
namespace validation
{
template <typename T>
void appendIssues(std::vector<T> & to, std::vector<T> && from)
{
  to.insert(to.end(), std::make_move_iterator(from.begin()), std::make_move_iterator(from.end()));
}

}  // namespace validation
}  // namespace autoware
}  // namespace lanelet

#endif  // LANELET2_EXTENSION__AUTOWARE_LANELET2_VALIDATION__UTILS_HPP_
