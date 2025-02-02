//
// Copyright (C) 2015 Yahoo Japan Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#pragma once

#define NGT_CREATION_EDGE_SIZE 10
#define NGT_EXPLORATION_COEFFICIENT 1.1
#define NGT_INSERTION_EXPLORATION_COEFFICIENT 1.1
#define NGT_SHARED_MEMORY_MAX_SIZE 1024 // MB
#define NGT_FORCED_REMOVE               // When errors occur due to the index inconsistency, ignore them.

#define NGT_COMPACT_VECTOR
#define NGT_GRAPH_READ_ONLY_GRAPH
#define NGT_HALF_FLOAT

#ifdef NGT_LARGE_DATASET
#define NGT_GRAPH_CHECK_HASH_BASED_BOOLEAN_SET
#else
#define NGT_GRAPH_CHECK_VECTOR
#endif

#if defined(NGT_AVX_DISABLED)
#define NGT_NO_AVX
#else
#if defined(__AVX512F__) && defined(__AVX512DQ__)
#define NGT_AVX512
#elif defined(__AVX2__)
#define NGT_AVX2
#else
#define NGT_NO_AVX
#endif
#endif
