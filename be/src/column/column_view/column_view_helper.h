// Copyright 2021-present StarRocks, Inc. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once
#include <optional>

#include "column/column.h"
#include "runtime/types.h"
namespace starrocks {
struct ColumnViewHelper {
    static std::optional<MutableColumnPtr> create_column_view(const TypeDescriptor& type_desc, bool nullable,
                                                              long concat_rows_limit, long concat_bytes_limit);
};
} // namespace starrocks
