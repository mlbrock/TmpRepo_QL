
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
//      QuantLibAddin/gensrc/stubs/stub.serialization.includes

#include <qlo/serialization/create/create_volatility.hpp>
#include <qlo/qladdindefines.hpp>
#include <qlo/handle.hpp>

#include <qlo/volatility.hpp>
#include <qlo/valueobjects/vo_volatility.hpp>

#include <qlo/conversions/all.hpp>
#include <oh/property.hpp>

namespace QuantLibAddin {

    boost::shared_ptr<ObjectHandler::Object> create_qlMarketModelLmExtLinearExponentialVolModel(
        const boost::shared_ptr<ObjectHandler::ValueObject> &valueObject) {

        // convert input datatypes to C++ datatypes

        std::vector<double> FixingTimes =
            ObjectHandler::vector::convert2<double>(valueObject->getProperty("FixingTimes"), "FixingTimes");

        double A =
            ObjectHandler::convert2<double>(valueObject->getProperty("A"));

        double B =
            ObjectHandler::convert2<double>(valueObject->getProperty("B"));

        double C =
            ObjectHandler::convert2<double>(valueObject->getProperty("C"));

        double D =
            ObjectHandler::convert2<double>(valueObject->getProperty("D"));

        bool Permanent =
            ObjectHandler::convert2<bool>(valueObject->getProperty("Permanent"));

        // update value object precedent IDs (if any)



        // construct and return the object

        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::LmExtLinearExponentialVolModel(
                valueObject,
                FixingTimes,
                A,
                B,
                C,
                D,
                Permanent));
        return object;
    }

    boost::shared_ptr<ObjectHandler::Object> create_qlPiecewiseConstantAbcdVariance(
        const boost::shared_ptr<ObjectHandler::ValueObject> &valueObject) {

        // convert input datatypes to C++ datatypes

        double A =
            ObjectHandler::convert2<double>(valueObject->getProperty("A"));

        double B =
            ObjectHandler::convert2<double>(valueObject->getProperty("B"));

        double C =
            ObjectHandler::convert2<double>(valueObject->getProperty("C"));

        double D =
            ObjectHandler::convert2<double>(valueObject->getProperty("D"));

        long ResetIndex =
            ObjectHandler::convert2<long>(valueObject->getProperty("ResetIndex"));

        std::vector<double> RateTimes =
            ObjectHandler::vector::convert2<double>(valueObject->getProperty("RateTimes"), "RateTimes");

        bool Permanent =
            ObjectHandler::convert2<bool>(valueObject->getProperty("Permanent"));

        // update value object precedent IDs (if any)



        // construct and return the object

        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::PiecewiseConstantAbcdVariance(
                valueObject,
                A,
                B,
                C,
                D,
                ResetIndex,
                RateTimes,
                Permanent));
        return object;
    }

}
