
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

#include <qlo/serialization/create/create_exercise.hpp>
#include <qlo/qladdindefines.hpp>
#include <qlo/handle.hpp>

#include <qlo/exercise.hpp>
#include <qlo/valueobjects/vo_exercise.hpp>

#include <qlo/conversions/all.hpp>
#include <oh/property.hpp>

namespace QuantLibAddin {

    boost::shared_ptr<ObjectHandler::Object> create_qlAmericanExercise(
        const boost::shared_ptr<ObjectHandler::ValueObject> &valueObject) {

        // convert input datatypes to C++ datatypes

        ObjectHandler::property_t EarliestDate =
            valueObject->getProperty("EarliestDate");

        ObjectHandler::property_t LatestDate =
            valueObject->getProperty("LatestDate");

        bool PayoffAtExpiry =
            ObjectHandler::convert2<bool>(valueObject->getProperty("PayoffAtExpiry"));

        bool Permanent =
            ObjectHandler::convert2<bool>(valueObject->getProperty("Permanent"));

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date EarliestDateLib = ObjectHandler::convert2<QuantLib::Date>(
            valueObject->getProperty("EarliestDate"), "EarliestDate");

        QuantLib::Date LatestDateLib = ObjectHandler::convert2<QuantLib::Date>(
            valueObject->getProperty("LatestDate"), "LatestDate");

        // update value object precedent IDs (if any)



        // construct and return the object

        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::AmericanExercise(
                valueObject,
                EarliestDateLib,
                LatestDateLib,
                PayoffAtExpiry,
                Permanent));
        return object;
    }

    boost::shared_ptr<ObjectHandler::Object> create_qlBermudanExercise(
        const boost::shared_ptr<ObjectHandler::ValueObject> &valueObject) {

        // convert input datatypes to C++ datatypes

        std::vector<ObjectHandler::property_t> Dates =
            ObjectHandler::vector::convert2<ObjectHandler::property_t>(valueObject->getProperty("Dates"), "Dates");

        bool PayoffAtExpiry =
            ObjectHandler::convert2<bool>(valueObject->getProperty("PayoffAtExpiry"));

        bool Permanent =
            ObjectHandler::convert2<bool>(valueObject->getProperty("Permanent"));

        // convert input datatypes to QuantLib datatypes

        std::vector<QuantLib::Date> DatesLib =
            ObjectHandler::vector::convert2<QuantLib::Date>(Dates, "Dates");

        // update value object precedent IDs (if any)



        // construct and return the object

        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::BermudanExercise(
                valueObject,
                DatesLib,
                PayoffAtExpiry,
                Permanent));
        return object;
    }

    boost::shared_ptr<ObjectHandler::Object> create_qlEuropeanExercise(
        const boost::shared_ptr<ObjectHandler::ValueObject> &valueObject) {

        // convert input datatypes to C++ datatypes

        ObjectHandler::property_t ExpiryDate =
            valueObject->getProperty("ExpiryDate");

        bool Permanent =
            ObjectHandler::convert2<bool>(valueObject->getProperty("Permanent"));

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date ExpiryDateLib = ObjectHandler::convert2<QuantLib::Date>(
            valueObject->getProperty("ExpiryDate"), "ExpiryDate");

        // update value object precedent IDs (if any)



        // construct and return the object

        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::EuropeanExercise(
                valueObject,
                ExpiryDateLib,
                Permanent));
        return object;
    }

}
