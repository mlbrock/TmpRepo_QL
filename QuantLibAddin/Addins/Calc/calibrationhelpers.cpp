
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
//      gensrc/gensrc/stubs/stub.calc.includes

#include <oh/utilities.hpp>
#include <oh/ohdefines.hpp>
#include <qlo/qladdindefines.hpp>
#include <qlo/enumerations/factories/all.hpp>
#include <qlo/conversions/all.hpp>
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

#include <qladdin.hpp>
#include <conversions.hpp>

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlCalibrationHelperImpliedVolatility(
        const ANY &ObjectId,
        const ANY &TargetValue,
        const ANY &Accuracy,
        const ANY &MaxEvaluations,
        const ANY &MinVol,
        const ANY &MaxVol,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        double TargetValueCpp;
        calcToScalar(TargetValueCpp, TargetValue);

        double AccuracyCpp;
        calcToScalar(AccuracyCpp, Accuracy);

        long MaxEvaluationsCpp;
        calcToScalar(MaxEvaluationsCpp, MaxEvaluations);

        double MinVolCpp;
        calcToScalar(MinVolCpp, MinVol);

        double MaxVolCpp;
        calcToScalar(MaxVolCpp, MaxVol);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Real TargetValueLib;
        calcToScalar(TargetValueLib, TargetValue);

        QuantLib::Real AccuracyLib;
        calcToScalar(AccuracyLib, Accuracy);

        QuantLib::Size MaxEvaluationsLib;
        calcToScalar(MaxEvaluationsLib, MaxEvaluations);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::CalibrationHelper, QuantLib::CalibrationHelper)

        // invoke the member function

        static double returnValue;
        returnValue = ObjectIdLibObjPtr->impliedVolatility(
                TargetValueLib,
                AccuracyLib,
                MaxEvaluationsLib,
                MinVolCpp,
                MaxVolCpp);

        // convert and return the return value



        ANY returnValueCalc;
        scalarToCalc(returnValueCalc, returnValue);

        SEQSEQ(ANY) retAnyArray;
        retAnyArray.realloc(1);
        SEQ(ANY) retAnyVector(1);
        retAnyVector[0] = returnValueCalc;
        retAnyArray[0] = retAnyVector;        
        return retAnyArray;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlCalibrationHelperImpliedVolatility: " << e.what(); 
            OH_LOG_MESSAGE(errorMsg.str());
        
            SEQSEQ(ANY) retAnyArray;
            retAnyArray.realloc(1);
            SEQ(ANY) retAnyVector(1);
            STRING s = STRFROMASCII( errorMsg.str().c_str() );    
            retAnyVector[0] = CSS::uno::makeAny( s );
            retAnyArray[0] = retAnyVector;	    
            return retAnyArray;
        } while (false);
    }
}

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlCalibrationHelperSetPricingEngine(
        const ANY &ObjectId,
        const ANY &PricingEngine,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string PricingEngineCpp;
        calcToScalar(PricingEngineCpp, PricingEngine);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::CalibrationHelper, QuantLib::CalibrationHelper)

        OH_GET_REFERENCE(PricingEngineLibObjPtr, PricingEngineCpp,
            QuantLibAddin::PricingEngine, QuantLib::PricingEngine)

        // invoke the member function

        static bool returnValue = true;
        ObjectIdLibObjPtr->setPricingEngine(
                PricingEngineLibObjPtr);

        // convert and return the return value



        SEQSEQ(ANY) retAnyArray;
        retAnyArray.realloc(1);
        SEQ(ANY) retAnyVector(1);
        STRING s = STRFROMASCII( std::string("VOID").c_str() );    
        retAnyVector[0] = CSS::uno::makeAny( s );
        retAnyArray[0] = retAnyVector;        
        return retAnyArray;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlCalibrationHelperSetPricingEngine: " << e.what(); 
            OH_LOG_MESSAGE(errorMsg.str());
        
            SEQSEQ(ANY) retAnyArray;
            retAnyArray.realloc(1);
            SEQ(ANY) retAnyVector(1);
            STRING s = STRFROMASCII( errorMsg.str().c_str() );    
            retAnyVector[0] = CSS::uno::makeAny( s );
            retAnyArray[0] = retAnyVector;	    
            return retAnyArray;
        } while (false);
    }
}

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlModelG2Calibrate(
        const ANY &ObjectId,
        const SEQSEQ(ANY) &CalibrationHelpers,
        const ANY &Method,
        const ANY &EndCriteria,
        const ANY &Constraint,
        const SEQSEQ(ANY) &Weights,
        const SEQSEQ(ANY) &FixedCoeff,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::vector<std::string> CalibrationHelpersCpp;
        calcToVector(CalibrationHelpersCpp, CalibrationHelpers);

        std::string MethodCpp;
        calcToScalar(MethodCpp, Method);

        std::string EndCriteriaCpp;
        calcToScalar(EndCriteriaCpp, EndCriteria);

        std::string ConstraintCpp;
        calcToScalar(ConstraintCpp, Constraint);

        std::vector<double> WeightsCpp;
        calcToVector(WeightsCpp, Weights);

        std::vector<bool> FixedCoeffCpp;
        calcToVector(FixedCoeffCpp, FixedCoeff);

        // convert input datatypes to QuantLib datatypes

        std::vector<boost::shared_ptr<QuantLib::CalibrationHelper> > CalibrationHelpersLibObjPtr =
            ObjectHandler::getLibraryObjectVector<QuantLibAddin::CalibrationHelper, QuantLib::CalibrationHelper>(CalibrationHelpersCpp);

        std::vector<QuantLib::Real> WeightsLib;
        calcToVector(WeightsLib, Weights);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::G2SRM, QuantLib::G2)

        OH_GET_UNDERLYING(MethodLibObj, MethodCpp,
            QuantLibAddin::OptimizationMethod, QuantLib::OptimizationMethod)

        OH_GET_UNDERLYING(EndCriteriaLibObj, EndCriteriaCpp,
            QuantLibAddin::EndCriteria, QuantLib::EndCriteria)

        OH_GET_UNDERLYING(ConstraintLibObj, ConstraintCpp,
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



        SEQSEQ(ANY) retAnyArray;
        retAnyArray.realloc(1);
        SEQ(ANY) retAnyVector(1);
        STRING s = STRFROMASCII( std::string("VOID").c_str() );    
        retAnyVector[0] = CSS::uno::makeAny( s );
        retAnyArray[0] = retAnyVector;        
        return retAnyArray;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlModelG2Calibrate: " << e.what(); 
            OH_LOG_MESSAGE(errorMsg.str());
        
            SEQSEQ(ANY) retAnyArray;
            retAnyArray.realloc(1);
            SEQ(ANY) retAnyVector(1);
            STRING s = STRFROMASCII( errorMsg.str().c_str() );    
            retAnyVector[0] = CSS::uno::makeAny( s );
            retAnyArray[0] = retAnyVector;	    
            return retAnyArray;
        } while (false);
    }
}

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlOneFactorAffineModelCalibrate(
        const ANY &ObjectId,
        const SEQSEQ(ANY) &CalibrationHelpers,
        const ANY &Method,
        const ANY &EndCriteria,
        const ANY &Constraint,
        const SEQSEQ(ANY) &Weights,
        const SEQSEQ(ANY) &FixedCoeff,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::vector<std::string> CalibrationHelpersCpp;
        calcToVector(CalibrationHelpersCpp, CalibrationHelpers);

        std::string MethodCpp;
        calcToScalar(MethodCpp, Method);

        std::string EndCriteriaCpp;
        calcToScalar(EndCriteriaCpp, EndCriteria);

        std::string ConstraintCpp;
        calcToScalar(ConstraintCpp, Constraint);

        std::vector<double> WeightsCpp;
        calcToVector(WeightsCpp, Weights);

        std::vector<bool> FixedCoeffCpp;
        calcToVector(FixedCoeffCpp, FixedCoeff);

        // convert input datatypes to QuantLib datatypes

        std::vector<boost::shared_ptr<QuantLib::CalibrationHelper> > CalibrationHelpersLibObjPtr =
            ObjectHandler::getLibraryObjectVector<QuantLibAddin::CalibrationHelper, QuantLib::CalibrationHelper>(CalibrationHelpersCpp);

        std::vector<QuantLib::Real> WeightsLib;
        calcToVector(WeightsLib, Weights);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::OneFactorAffineModel, QuantLib::OneFactorAffineModel)

        OH_GET_UNDERLYING(MethodLibObj, MethodCpp,
            QuantLibAddin::OptimizationMethod, QuantLib::OptimizationMethod)

        OH_GET_UNDERLYING(EndCriteriaLibObj, EndCriteriaCpp,
            QuantLibAddin::EndCriteria, QuantLib::EndCriteria)

        OH_GET_UNDERLYING(ConstraintLibObj, ConstraintCpp,
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



        SEQSEQ(ANY) retAnyArray;
        retAnyArray.realloc(1);
        SEQ(ANY) retAnyVector(1);
        STRING s = STRFROMASCII( std::string("VOID").c_str() );    
        retAnyVector[0] = CSS::uno::makeAny( s );
        retAnyArray[0] = retAnyVector;        
        return retAnyArray;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlOneFactorAffineModelCalibrate: " << e.what(); 
            OH_LOG_MESSAGE(errorMsg.str());
        
            SEQSEQ(ANY) retAnyArray;
            retAnyArray.realloc(1);
            SEQ(ANY) retAnyVector(1);
            STRING s = STRFROMASCII( errorMsg.str().c_str() );    
            retAnyVector[0] = CSS::uno::makeAny( s );
            retAnyArray[0] = retAnyVector;	    
            return retAnyArray;
        } while (false);
    }
}

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlSwaptionHelper(
        const ANY &ObjectId,
        const ANY &OptionTenor,
        const ANY &Length,
        const ANY &Volatility,
        const ANY &IborIndex,
        const ANY &FixedLegTenor,
        const ANY &FixedLegDayCounter,
        const ANY &FloatingLegDayCounter,
        const ANY &YieldCurve,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string OptionTenorCpp;
        calcToScalar(OptionTenorCpp, OptionTenor);

        std::string LengthCpp;
        calcToScalar(LengthCpp, Length);

        std::string VolatilityCpp;
        calcToScalar(VolatilityCpp, Volatility);

        std::string IborIndexCpp;
        calcToScalar(IborIndexCpp, IborIndex);

        std::string FixedLegTenorCpp;
        calcToScalar(FixedLegTenorCpp, FixedLegTenor);

        std::string FixedLegDayCounterCpp;
        calcToScalar(FixedLegDayCounterCpp, FixedLegDayCounter);

        std::string FloatingLegDayCounterCpp;
        calcToScalar(FloatingLegDayCounterCpp, FloatingLegDayCounter);

        std::string YieldCurveCpp;
        calcToScalar(YieldCurveCpp, YieldCurve);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Period OptionTenorLib;
        calcToScalar(OptionTenorLib, OptionTenor);

        QuantLib::Period LengthLib;
        calcToScalar(LengthLib, Length);

        QuantLib::Period FixedLegTenorLib;
        calcToScalar(FixedLegTenorLib, FixedLegTenor);

        // convert object IDs into library objects

        OH_GET_OBJECT_DEFAULT(VolatilityCoerce, VolatilityCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::Quote> VolatilityLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::Quote,
                QuantLib::Quote>()(
                    VolatilityCoerce, QuantLib::Handle<QuantLib::Quote>());

        OH_GET_REFERENCE(IborIndexLibObjPtr, IborIndexCpp,
            QuantLibAddin::IborIndex, QuantLib::IborIndex)

        OH_GET_OBJECT_DEFAULT(YieldCurveCoerce, YieldCurveCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::YieldTermStructure> YieldCurveLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::YieldTermStructure,
                QuantLib::YieldTermStructure>()(
                    YieldCurveCoerce, QuantLib::Handle<QuantLib::YieldTermStructure>());

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::DayCounter FixedLegDayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(FixedLegDayCounterCpp);

        QuantLib::DayCounter FloatingLegDayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(FloatingLegDayCounterCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlSwaptionHelper(
                ObjectIdCpp,
                OptionTenorCpp,
                LengthCpp,
                VolatilityCpp,
                IborIndexCpp,
                FixedLegTenorCpp,
                FixedLegDayCounterCpp,
                FloatingLegDayCounterCpp,
                YieldCurveCpp,
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
            ObjectHandler::Repository::instance().storeObject(ObjectIdCpp, object, Overwrite, valueObject);

        // Convert and return the return value



        ANY returnValueCalc;
        scalarToCalc(returnValueCalc, returnValue);

        SEQSEQ(ANY) retAnyArray;
        retAnyArray.realloc(1);
        SEQ(ANY) retAnyVector(1);
        retAnyVector[0] = returnValueCalc;
        retAnyArray[0] = retAnyVector;        
        return retAnyArray;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlSwaptionHelper: " << e.what(); 
            OH_LOG_MESSAGE(errorMsg.str());
        
            SEQSEQ(ANY) retAnyArray;
            retAnyArray.realloc(1);
            SEQ(ANY) retAnyVector(1);
            STRING s = STRFROMASCII( errorMsg.str().c_str() );    
            retAnyVector[0] = CSS::uno::makeAny( s );
            retAnyArray[0] = retAnyVector;	    
            return retAnyArray;
        } while (false);
    }
}

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlSwaptionHelperModelValue(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::SwaptionHelper, QuantLib::SwaptionHelper)

        // invoke the member function

        static double returnValue;
        returnValue = ObjectIdLibObjPtr->modelValue();

        // convert and return the return value



        ANY returnValueCalc;
        scalarToCalc(returnValueCalc, returnValue);

        SEQSEQ(ANY) retAnyArray;
        retAnyArray.realloc(1);
        SEQ(ANY) retAnyVector(1);
        retAnyVector[0] = returnValueCalc;
        retAnyArray[0] = retAnyVector;        
        return retAnyArray;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlSwaptionHelperModelValue: " << e.what(); 
            OH_LOG_MESSAGE(errorMsg.str());
        
            SEQSEQ(ANY) retAnyArray;
            retAnyArray.realloc(1);
            SEQ(ANY) retAnyVector(1);
            STRING s = STRFROMASCII( errorMsg.str().c_str() );    
            retAnyVector[0] = CSS::uno::makeAny( s );
            retAnyArray[0] = retAnyVector;	    
            return retAnyArray;
        } while (false);
    }
}


