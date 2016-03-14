
/*  
 Copyright (C) 2006 Ferdinando Ametrano
 Copyright (C) 2005 Aurelien Chanudet
 Copyright (C) 2005 Eric Ehlers
 Copyright (C) 2006 Chiara Fornarola
 Copyright (C) 2015 Paolo Mazzocchi
 
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
//      QuantLibAddin/gensrc/stubs/stub.cpp.body

#include <qlo/qladdindefines.hpp>
#include <qlo/handle.hpp>
#include <qlo/shortratemodels.hpp>
#include <ql/models/shortrate/onefactormodels/vasicek.hpp>
#include <ql/models/shortrate/onefactormodels/hullwhite.hpp>
#include <ql/models/shortrate/twofactormodels/g2.hpp>
#include <ql/termstructures/yieldtermstructure.hpp>
#include <qlo/valueobjects/vo_shortratemodels.hpp>

#include <qlo/conversions/all.hpp>
#include <oh/property.hpp>

namespace QuantLibAddinCpp {

    std::string qlHullWhite(
            const std::string &ObjectId,
            const std::string &YieldCurve,
            const double &A,
            const double &Sigma,
            const ObjectHandler::property_t &Permanent,
            const ObjectHandler::property_t &Trigger,
            const bool &Overwrite) {

        try {

        // convert input datatypes to C++ datatypes

        bool PermanentCpp = ObjectHandler::convert2<bool>(
            Permanent, "Permanent", false);

        // convert object IDs into library objects

        OH_GET_OBJECT(YieldCurveCoerce, YieldCurve, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::YieldTermStructure> YieldCurveLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::YieldTermStructure,
                QuantLib::YieldTermStructure>()(
                    YieldCurveCoerce);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlHullWhite(
                ObjectId,
                YieldCurve,
                A,
                Sigma,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::HullWhite(
                valueObject,
                YieldCurveLibObj,
                A,
                Sigma,
                PermanentCpp));

        // Store the Object in the Repository

        std::string returnValue =
            ObjectHandler::Repository::instance().storeObject(ObjectId, object, Overwrite, valueObject);

        // Convert and return the return value

        return returnValue;

        } catch (const std::exception &e) {
            OH_FAIL("Error in function qlHullWhite : " << e.what());
        }
    }


    std::string qlModelG2(
            const std::string &ObjectId,
            const std::string &YieldCurve,
            const ObjectHandler::property_t &A,
            const ObjectHandler::property_t &Sigma,
            const ObjectHandler::property_t &B,
            const ObjectHandler::property_t &Eta,
            const ObjectHandler::property_t &Correlation,
            const ObjectHandler::property_t &Permanent,
            const ObjectHandler::property_t &Trigger,
            const bool &Overwrite) {

        try {

        // convert input datatypes to C++ datatypes

        double ACpp = ObjectHandler::convert2<double>(
            A, "A", 0.1);

        double SigmaCpp = ObjectHandler::convert2<double>(
            Sigma, "Sigma", 0.01);

        double BCpp = ObjectHandler::convert2<double>(
            B, "B", 0.1);

        double EtaCpp = ObjectHandler::convert2<double>(
            Eta, "Eta", 0.01);

        double CorrelationCpp = ObjectHandler::convert2<double>(
            Correlation, "Correlation", -0.75);

        bool PermanentCpp = ObjectHandler::convert2<bool>(
            Permanent, "Permanent", false);

        // convert object IDs into library objects

        OH_GET_OBJECT(YieldCurveCoerce, YieldCurve, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::YieldTermStructure> YieldCurveLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::YieldTermStructure,
                QuantLib::YieldTermStructure>()(
                    YieldCurveCoerce);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlModelG2(
                ObjectId,
                YieldCurve,
                ACpp,
                SigmaCpp,
                BCpp,
                EtaCpp,
                CorrelationCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::G2(
                valueObject,
                YieldCurveLibObj,
                ACpp,
                SigmaCpp,
                BCpp,
                EtaCpp,
                CorrelationCpp,
                PermanentCpp));

        // Store the Object in the Repository

        std::string returnValue =
            ObjectHandler::Repository::instance().storeObject(ObjectId, object, Overwrite, valueObject);

        // Convert and return the return value

        return returnValue;

        } catch (const std::exception &e) {
            OH_FAIL("Error in function qlModelG2 : " << e.what());
        }
    }


    std::string qlVasicek(
            const std::string &ObjectId,
            const ObjectHandler::property_t &R0,
            const ObjectHandler::property_t &A,
            const ObjectHandler::property_t &B,
            const ObjectHandler::property_t &Sigma,
            const ObjectHandler::property_t &Lambda,
            const ObjectHandler::property_t &Permanent,
            const ObjectHandler::property_t &Trigger,
            const bool &Overwrite) {

        try {

        // convert input datatypes to C++ datatypes

        double R0Cpp = ObjectHandler::convert2<double>(
            R0, "R0", 0.05);

        double ACpp = ObjectHandler::convert2<double>(
            A, "A", 0.1);

        double BCpp = ObjectHandler::convert2<double>(
            B, "B", 0.05);

        double SigmaCpp = ObjectHandler::convert2<double>(
            Sigma, "Sigma", 0.01);

        double LambdaCpp = ObjectHandler::convert2<double>(
            Lambda, "Lambda", 0.0);

        bool PermanentCpp = ObjectHandler::convert2<bool>(
            Permanent, "Permanent", false);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlVasicek(
                ObjectId,
                R0Cpp,
                ACpp,
                BCpp,
                SigmaCpp,
                LambdaCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::Vasicek(
                valueObject,
                R0Cpp,
                ACpp,
                BCpp,
                SigmaCpp,
                LambdaCpp,
                PermanentCpp));

        // Store the Object in the Repository

        std::string returnValue =
            ObjectHandler::Repository::instance().storeObject(ObjectId, object, Overwrite, valueObject);

        // Convert and return the return value

        return returnValue;

        } catch (const std::exception &e) {
            OH_FAIL("Error in function qlVasicek : " << e.what());
        }
    }

}

