
/*  
 Copyright (C) 2006, 2007, 2008, 2011, 2014 Ferdinando Ametrano
 Copyright (C) 2005 Aurelien Chanudet
 
 This file is part of QuantLib, a free-software/open-source library
 for financial quantitative analysts and developers - http://quantlib.org/

 QuantLib is free software: you can redistribute it and/or modify it
 under the terms of the QuantLib license.  You should have received a
 copy of the license along with this program; if not, please email
 <quantlib-dev@lists.sf.net>. The license is also available online at
 <http://quantlib.org/license.shtml>.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the license for more details.
*/

// This file was generated automatically by gensrc.py.  If you edit this file
// manually then your changes will be lost the next time gensrc runs.

// This source code file was generated from the following stub:
//      gensrc/gensrc/stubs/stub.cpp.header

#ifndef qlcpp_capfloor_hpp
#define qlcpp_capfloor_hpp

#include <oh/property.hpp>
#include <string>
#include <vector>

namespace QuantLibAddinCpp {

    std::string qlCapFloor(
            const std::string &ObjectId,
            const std::string &OptionType,
            const std::string &LegID,
            const std::vector<double>& Strikes,
            const ObjectHandler::property_t &Permanent,
            const ObjectHandler::property_t &Trigger,
            const bool &Overwrite);


    std::string qlMakeCapFloor(
            const std::string &ObjectId,
            const std::string &OptionType,
            const std::string &Length,
            const std::string &IborIndex,
            const ObjectHandler::property_t &Strike,
            const std::string &ForwardStart,
            const std::string &PricingEngineID,
            const ObjectHandler::property_t &Permanent,
            const ObjectHandler::property_t &Trigger,
            const bool &Overwrite);

}

#endif

