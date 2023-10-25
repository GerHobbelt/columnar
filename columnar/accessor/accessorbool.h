// Copyright (c) 2020-2023, Manticore Software LTD (https://manticoresearch.com)
// All rights reserved
//
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

#pragma once

#include "builder.h"
#include "accessor.h"

namespace util
{
	class FileReader_c;
}

namespace columnar
{

class Iterator_i;
class Analyzer_i;
class AttributeHeader_i;

Iterator_i *	CreateIteratorBool ( const AttributeHeader_i & tHeader, util::FileReader_c * pReader );
Analyzer_i *	CreateAnalyzerBool ( const AttributeHeader_i & tHeader, util::FileReader_c * pReader, const common::Filter_t & tSettings, bool bHaveMatchingBlocks );
Checker_i *		CreateCheckerBool ( const AttributeHeader_i & tHeader, util::FileReader_c * pReader, Reporter_fn & fnProgress, Reporter_fn & fnError );

} // namespace columnar
