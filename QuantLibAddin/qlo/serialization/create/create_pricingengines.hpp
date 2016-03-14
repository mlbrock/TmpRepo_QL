
/*  
 Copyright (C) 2007, 2008 Eric Ehlers
 Copyright (C) 2006 Plamen Neykov
 
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
//      gensrc/gensrc/stubs/stub.serialization.header

#ifndef qlo_create_pricingengines_hpp
#define qlo_create_pricingengines_hpp

#include <oh/ohdefines.hpp>
#include <oh/object.hpp>
#include <oh/valueobject.hpp>

namespace QuantLibAddin {

    boost::shared_ptr<ObjectHandler::Object> create_qlAnalyticCapFloorEngine(
        const boost::shared_ptr<ObjectHandler::ValueObject>&);

    boost::shared_ptr<ObjectHandler::Object> create_qlBinomialPricingEngine(
        const boost::shared_ptr<ObjectHandler::ValueObject>&);

    boost::shared_ptr<ObjectHandler::Object> create_qlBlackCalculator(
        const boost::shared_ptr<ObjectHandler::ValueObject>&);

    boost::shared_ptr<ObjectHandler::Object> create_qlBlackCalculator2(
        const boost::shared_ptr<ObjectHandler::ValueObject>&);

    boost::shared_ptr<ObjectHandler::Object> create_qlBlackCapFloorEngine(
        const boost::shared_ptr<ObjectHandler::ValueObject>&);

    boost::shared_ptr<ObjectHandler::Object> create_qlBlackCapFloorEngine2(
        const boost::shared_ptr<ObjectHandler::ValueObject>&);

    boost::shared_ptr<ObjectHandler::Object> create_qlBlackScholesCalculator(
        const boost::shared_ptr<ObjectHandler::ValueObject>&);

    boost::shared_ptr<ObjectHandler::Object> create_qlBlackScholesCalculator2(
        const boost::shared_ptr<ObjectHandler::ValueObject>&);

    boost::shared_ptr<ObjectHandler::Object> create_qlBlackSwaptionEngine(
        const boost::shared_ptr<ObjectHandler::ValueObject>&);

    boost::shared_ptr<ObjectHandler::Object> create_qlBlackSwaptionEngine2(
        const boost::shared_ptr<ObjectHandler::ValueObject>&);

    boost::shared_ptr<ObjectHandler::Object> create_qlBondEngine(
        const boost::shared_ptr<ObjectHandler::ValueObject>&);

    boost::shared_ptr<ObjectHandler::Object> create_qlDiscountingSwapEngine(
        const boost::shared_ptr<ObjectHandler::ValueObject>&);

    boost::shared_ptr<ObjectHandler::Object> create_qlJamshidianSwaptionEngine(
        const boost::shared_ptr<ObjectHandler::ValueObject>&);

    boost::shared_ptr<ObjectHandler::Object> create_qlModelG2SwaptionEngine(
        const boost::shared_ptr<ObjectHandler::ValueObject>&);

    boost::shared_ptr<ObjectHandler::Object> create_qlPricingEngine(
        const boost::shared_ptr<ObjectHandler::ValueObject>&);

    boost::shared_ptr<ObjectHandler::Object> create_qlTreeSwaptionEngine(
        const boost::shared_ptr<ObjectHandler::ValueObject>&);

}

#endif

