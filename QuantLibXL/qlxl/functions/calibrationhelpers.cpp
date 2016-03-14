
/*  
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
//      c:/Users/erik/Documents/repos/reposit_old/quantlib-old/QuantLibAddin/gensrc/stubs/stub.excel.includes

#include <qlo/qladdindefines.hpp>
#include <oh/enumerations/typefactory.hpp>
#include <qlo/calibrationhelpers.hpp>
#include <qlo/shortratemodels.hpp>
#include <qlo/pricingengines.hpp>
#include <qlo/indexes/ibor/euribor.hpp>
#include <qlo/optimization.hpp>
#include <ql/models/shortrate/calibrationhelpers/swaptionhelper.hpp>
#include <ql/indexes/ibor/euribor.hpp>
#include <ql/models/shortrate/onefactormodel.hpp>
#include <ql/models/shortrate/twofactormodels/g2.hpp>
#include <qlo/valueobjects/vo_calibrationhelpers.hpp>

#include <ohxl/objecthandlerxl.hpp>
#include <ohxl/callingrange.hpp>
#include <qlxl/session.hpp>
#include <qlxl/conversions/all.hpp>

#define XLL_DEC DLLEXPORT

XLL_DEC double *qlCalibrationHelperImpliedVolatility(
        char *ObjectId,
        double *TargetValue,
        double *Accuracy,
        long *MaxEvaluations,
        double *MinVol,
        double *MaxVol,
        OPER *Trigger) {

    // declare a shared pointer to the Function Call object

    boost::shared_ptr<ObjectHandler::FunctionCall> functionCall;

    try {

        // instantiate the Function Call object

        functionCall = boost::shared_ptr<ObjectHandler::FunctionCall>(
            new ObjectHandler::FunctionCall("qlCalibrationHelperImpliedVolatility"));

        ObjectHandler::validateRange(Trigger, "Trigger");

        // initialize the session ID (if enabled)

        SET_SESSION_ID

        // convert input datatypes to QuantLib datatypes

        QuantLib::Size MaxEvaluationsLib;
        QuantLibAddin::cppToLibrary(*MaxEvaluations, MaxEvaluationsLib);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectId,
            QuantLibAddin::CalibrationHelper, QuantLib::CalibrationHelper)

        // invoke the member function

        static double returnValue;
        returnValue = ObjectIdLibObjPtr->impliedVolatility(
                *TargetValue,
                *Accuracy,
                MaxEvaluationsLib,
                *MinVol,
                *MaxVol);

        // convert and return the return value

        return &returnValue;

    } catch (const std::exception &e) {
        ObjectHandler::RepositoryXL::instance().logError(e.what(), functionCall);
        return 0;
    } catch (...) {
        ObjectHandler::RepositoryXL::instance().logError("unkown error type", functionCall);
        return 0;
    }

}
XLL_DEC bool *qlCalibrationHelperSetPricingEngine(
        char *ObjectId,
        char *PricingEngine,
        OPER *Trigger) {

    // declare a shared pointer to the Function Call object

    boost::shared_ptr<ObjectHandler::FunctionCall> functionCall;

    try {

        // instantiate the Function Call object

        functionCall = boost::shared_ptr<ObjectHandler::FunctionCall>(
            new ObjectHandler::FunctionCall("qlCalibrationHelperSetPricingEngine"));

        ObjectHandler::validateRange(Trigger, "Trigger");

        // initialize the session ID (if enabled)

        SET_SESSION_ID

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectId,
            QuantLibAddin::CalibrationHelper, QuantLib::CalibrationHelper)

        OH_GET_REFERENCE(PricingEngineLibObjPtr, PricingEngine,
            QuantLibAddin::PricingEngine, QuantLib::PricingEngine)

        // invoke the member function

        static bool returnValue = true;
        ObjectIdLibObjPtr->setPricingEngine(
                PricingEngineLibObjPtr);

        // convert and return the return value

        return &returnValue;

    } catch (const std::exception &e) {
        ObjectHandler::RepositoryXL::instance().logError(e.what(), functionCall);
        return 0;
    } catch (...) {
        ObjectHandler::RepositoryXL::instance().logError("unkown error type", functionCall);
        return 0;
    }

}
XLL_DEC bool *qlModelG2Calibrate(
        char *ObjectId,
        OPER *CalibrationHelpers,
        char *Method,
        char *EndCriteria,
        char *Constraint,
        OPER *Weights,
        OPER *FixedCoeff,
        OPER *Trigger) {

    // declare a shared pointer to the Function Call object

    boost::shared_ptr<ObjectHandler::FunctionCall> functionCall;

    try {

        // instantiate the Function Call object

        functionCall = boost::shared_ptr<ObjectHandler::FunctionCall>(
            new ObjectHandler::FunctionCall("qlModelG2Calibrate"));

        ObjectHandler::validateRange(Trigger, "Trigger");

        // initialize the session ID (if enabled)

        SET_SESSION_ID

        // convert input datatypes to C++ datatypes

        std::vector<std::string> CalibrationHelpersCpp =
            ObjectHandler::operToVector<std::string>(*CalibrationHelpers, "CalibrationHelpers");

        std::vector<double> WeightsCpp =
            ObjectHandler::operToVector<double>(*Weights, "Weights");

        std::vector<bool> FixedCoeffCpp =
            ObjectHandler::operToVector<bool>(*FixedCoeff, "FixedCoeff");

        // convert input datatypes to QuantLib datatypes

        std::vector<QuantLib::Real> WeightsLib =
            ObjectHandler::operToVector<QuantLib::Real>(*Weights, "Weights");

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectId,
            QuantLibAddin::G2, QuantLib::G2)

        std::vector<boost::shared_ptr<QuantLib::CalibrationHelper> > CalibrationHelpersLibObjPtr =
            ObjectHandler::getLibraryObjectVector<QuantLibAddin::CalibrationHelper, QuantLib::CalibrationHelper>(CalibrationHelpersCpp);

        OH_GET_UNDERLYING_NONCONST(MethodLibObj, Method,
            QuantLibAddin::OptimizationMethod, QuantLib::OptimizationMethod)

        OH_GET_UNDERLYING(EndCriteriaLibObj, EndCriteria,
            QuantLibAddin::EndCriteria, QuantLib::EndCriteria)

        OH_GET_UNDERLYING(ConstraintLibObj, Constraint,
            QuantLibAddin::Constraint, QuantLib::Constraint)

        // invoke the member function

        static bool returnValue = true;
        ObjectIdLibObjPtr->calibrate(
                CalibrationHelpersLibObjPtr,
                MethodLibObj,
                EndCriteriaLibObj,
                ConstraintLibObj,
                WeightsLib,
                FixedCoeffCpp);

        // convert and return the return value

        return &returnValue;

    } catch (const std::exception &e) {
        ObjectHandler::RepositoryXL::instance().logError(e.what(), functionCall);
        return 0;
    } catch (...) {
        ObjectHandler::RepositoryXL::instance().logError("unkown error type", functionCall);
        return 0;
    }

}
XLL_DEC bool *qlOneFactorAffineModelCalibrate(
        char *ObjectId,
        OPER *CalibrationHelpers,
        char *Method,
        char *EndCriteria,
        char *Constraint,
        OPER *Weights,
        OPER *FixedCoeff,
        OPER *Trigger) {

    // declare a shared pointer to the Function Call object

    boost::shared_ptr<ObjectHandler::FunctionCall> functionCall;

    try {

        // instantiate the Function Call object

        functionCall = boost::shared_ptr<ObjectHandler::FunctionCall>(
            new ObjectHandler::FunctionCall("qlOneFactorAffineModelCalibrate"));

        ObjectHandler::validateRange(Trigger, "Trigger");

        // initialize the session ID (if enabled)

        SET_SESSION_ID

        // convert input datatypes to C++ datatypes

        std::vector<std::string> CalibrationHelpersCpp =
            ObjectHandler::operToVector<std::string>(*CalibrationHelpers, "CalibrationHelpers");

        std::vector<double> WeightsCpp =
            ObjectHandler::operToVector<double>(*Weights, "Weights");

        std::vector<bool> FixedCoeffCpp =
            ObjectHandler::operToVector<bool>(*FixedCoeff, "FixedCoeff");

        // convert input datatypes to QuantLib datatypes

        std::vector<QuantLib::Real> WeightsLib =
            ObjectHandler::operToVector<QuantLib::Real>(*Weights, "Weights");

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectId,
            QuantLibAddin::OneFactorAffineModel, QuantLib::OneFactorAffineModel)

        std::vector<boost::shared_ptr<QuantLib::CalibrationHelper> > CalibrationHelpersLibObjPtr =
            ObjectHandler::getLibraryObjectVector<QuantLibAddin::CalibrationHelper, QuantLib::CalibrationHelper>(CalibrationHelpersCpp);

        OH_GET_UNDERLYING_NONCONST(MethodLibObj, Method,
            QuantLibAddin::OptimizationMethod, QuantLib::OptimizationMethod)

        OH_GET_UNDERLYING(EndCriteriaLibObj, EndCriteria,
            QuantLibAddin::EndCriteria, QuantLib::EndCriteria)

        OH_GET_UNDERLYING(ConstraintLibObj, Constraint,
            QuantLibAddin::Constraint, QuantLib::Constraint)

        // invoke the member function

        static bool returnValue = true;
        ObjectIdLibObjPtr->calibrate(
                CalibrationHelpersLibObjPtr,
                MethodLibObj,
                EndCriteriaLibObj,
                ConstraintLibObj,
                WeightsLib,
                FixedCoeffCpp);

        // convert and return the return value

        return &returnValue;

    } catch (const std::exception &e) {
        ObjectHandler::RepositoryXL::instance().logError(e.what(), functionCall);
        return 0;
    } catch (...) {
        ObjectHandler::RepositoryXL::instance().logError("unkown error type", functionCall);
        return 0;
    }

}
XLL_DEC char *qlSwaptionHelper(
        char *ObjectId,
        char *OptionTenor,
        char *Length,
        OPER *Volatility,
        char *IborIndex,
        char *FixedLegTenor,
        char *FixedLegDayCounter,
        char *FloatingLegDayCounter,
        char *YieldCurve,
        OPER *Permanent,
        OPER *Trigger,
        bool *Overwrite) {

    // declare a shared pointer to the Function Call object

    boost::shared_ptr<ObjectHandler::FunctionCall> functionCall;

    try {

        // instantiate the Function Call object

        functionCall = boost::shared_ptr<ObjectHandler::FunctionCall>(
            new ObjectHandler::FunctionCall("qlSwaptionHelper"));

        ObjectHandler::validateRange(Trigger, "Trigger");

        // initialize the session ID (if enabled)

        SET_SESSION_ID

        // convert input datatypes to C++ datatypes

        ObjectHandler::property_t VolatilityCpp = ObjectHandler::convert2<ObjectHandler::property_t>(
            ObjectHandler::ConvertOper(*Volatility));

        bool PermanentCpp = ObjectHandler::convert2<bool>(
            ObjectHandler::ConvertOper(*Permanent), "Permanent", false);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Period OptionTenorLib;
        QuantLibAddin::cppToLibrary(OptionTenor, OptionTenorLib);

        QuantLib::Period LengthLib;
        QuantLibAddin::cppToLibrary(Length, LengthLib);

        QuantLib::Period FixedLegTenorLib;
        QuantLibAddin::cppToLibrary(FixedLegTenor, FixedLegTenorLib);

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::DayCounter FixedLegDayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(FixedLegDayCounter);

        QuantLib::DayCounter FloatingLegDayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(FloatingLegDayCounter);

        // convert object IDs into library objects

        QuantLib::Handle<QuantLib::Quote> VolatilityLibObj = 
            ObjectHandler::convert2<QuantLib::Handle<QuantLib::Quote> >(
                ObjectHandler::ConvertOper(*Volatility), "Volatility");

        OH_GET_REFERENCE(IborIndexLibObjPtr, IborIndex,
            QuantLibAddin::IborIndex, QuantLib::IborIndex)

        OH_GET_OBJECT(YieldCurveCoerce, YieldCurve, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::YieldTermStructure> YieldCurveLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::YieldTermStructure,
                QuantLib::YieldTermStructure>()(
                    YieldCurveCoerce);

        // Strip the Excel cell update counter suffix from Object IDs
        
        std::string ObjectIdStrip = ObjectHandler::CallingRange::getStub(ObjectId);
        std::string IborIndexStrip = ObjectHandler::CallingRange::getStub(IborIndex);
        std::string YieldCurveStrip = ObjectHandler::CallingRange::getStub(YieldCurve);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlSwaptionHelper(
                ObjectIdStrip,
                OptionTenor,
                Length,
                VolatilityCpp,
                IborIndexStrip,
                FixedLegTenor,
                FixedLegDayCounter,
                FloatingLegDayCounter,
                YieldCurveStrip,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::SwaptionHelper(
                valueObject,
                OptionTenorLib,
                LengthLib,
                VolatilityLibObj,
                IborIndexLibObjPtr,
                FixedLegTenorLib,
                FixedLegDayCounterEnum,
                FloatingLegDayCounterEnum,
                YieldCurveLibObj,
                PermanentCpp));

        // Store the Object in the Repository

        std::string returnValue =
            ObjectHandler::RepositoryXL::instance().storeObject(ObjectIdStrip, object, *Overwrite, valueObject);

        // Convert and return the return value

        static char ret[XL_MAX_STR_LEN];
        ObjectHandler::stringToChar(returnValue, ret);
        return ret;

    } catch (const std::exception &e) {
        ObjectHandler::RepositoryXL::instance().logError(e.what(), functionCall);
        return 0;
    } catch (...) {
        ObjectHandler::RepositoryXL::instance().logError("unkown error type", functionCall);
        return 0;
    }

}
XLL_DEC double *qlSwaptionHelperModelValue(
        char *ObjectId,
        OPER *Trigger) {

    // declare a shared pointer to the Function Call object

    boost::shared_ptr<ObjectHandler::FunctionCall> functionCall;

    try {

        // instantiate the Function Call object

        functionCall = boost::shared_ptr<ObjectHandler::FunctionCall>(
            new ObjectHandler::FunctionCall("qlSwaptionHelperModelValue"));

        ObjectHandler::validateRange(Trigger, "Trigger");

        // initialize the session ID (if enabled)

        SET_SESSION_ID

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectId,
            QuantLibAddin::SwaptionHelper, QuantLib::SwaptionHelper)

        // invoke the member function

        static double returnValue;
        returnValue = ObjectIdLibObjPtr->modelValue();

        // convert and return the return value

        return &returnValue;

    } catch (const std::exception &e) {
        ObjectHandler::RepositoryXL::instance().logError(e.what(), functionCall);
        return 0;
    } catch (...) {
        ObjectHandler::RepositoryXL::instance().logError("unkown error type", functionCall);
        return 0;
    }

}
