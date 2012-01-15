/*

   Copyright (c) 2011, The Chinese University of Hong Kong

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

*/

#pragma once
#ifndef IDOCK_RECEPTOR_PARSER_HPP
#define IDOCK_RECEPTOR_PARSER_HPP

#include "parsing_error.hpp"
#include "receptor.hpp"

namespace idock
{
	/// Represents a receptor parser.
	class receptor_parser : public parser
	{
	public:
		/// Parses a receptor file in PDBQT format.
		/// @exception parsing_error Thrown when an atom type is not recognized.
		receptor parse(const path& file) const;
	};
}

#endif
