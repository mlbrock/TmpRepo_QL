
/*  
 Copyright (C) 2006, 2007, 2009 Ferdinando Ametrano
 Copyright (C) 2006, 2007 Cristina Duminuco
 Copyright (C) 2006, 2007 Giorgio Facchinetti
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
//      gensrc/gensrc/stubs/stub.calc.includes

#include <oh/utilities.hpp>
#include <oh/ohdefines.hpp>
#include <qlo/qladdindefines.hpp>
#include <qlo/enumerations/factories/all.hpp>
#include <qlo/conversions/all.hpp>
#include <oh/enumerations/typefactory.hpp>
#include <qlo/couponvectors.hpp>
#include <qlo/schedule.hpp>
#include <qlo/conundrumpricer.hpp>
#include <qlo/termstructures.hpp>
#include <qlo/indexes/iborindex.hpp>
#include <qlo/indexes/swapindex.hpp>
#include <ql/indexes/iborindex.hpp>
#include <ql/indexes/swapindex.hpp>
#include <qlo/valueobjects/vo_couponvectors.hpp>

#include <qladdin.hpp>
#include <conversions.hpp>

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlCmsCouponPricer(
        const ANY &ObjectId,
        const ANY &Volatility,
        const ANY &CmsCouponPricerType,
        const ANY &YieldCurveModel,
        const ANY &MeanReversion,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string VolatilityCpp;
        calcToScalar(VolatilityCpp, Volatility);

        std::string CmsCouponPricerTypeCpp;
        calcToScalar(CmsCouponPricerTypeCpp, CmsCouponPricerType);

        std::string YieldCurveModelCpp;
        calcToScalar(YieldCurveModelCpp, YieldCurveModel);

        std::string MeanReversionCpp;
        calcToScalar(MeanReversionCpp, MeanReversion);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert object IDs into library objects

        OH_GET_OBJECT_DEFAULT(VolatilityCoerce, VolatilityCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::SwaptionVolatilityStructure> VolatilityLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::SwaptionVolatilityStructure,
                QuantLib::SwaptionVolatilityStructure>()(
                    VolatilityCoerce, QuantLib::Handle<QuantLib::SwaptionVolatilityStructure>());

        OH_GET_OBJECT_DEFAULT(MeanReversionCoerce, MeanReversionCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::Quote> MeanReversionLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::Quote,
                QuantLib::Quote>()(
                    MeanReversionCoerce, QuantLib::Handle<QuantLib::Quote>());

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::GFunctionFactory::YieldCurveModel YieldCurveModelEnum =
            ObjectHandler::Create<QuantLib::GFunctionFactory::YieldCurveModel>()(YieldCurveModelCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlCmsCouponPricer(
                ObjectIdCpp,
                VolatilityCpp,
                CmsCouponPricerTypeCpp,
                YieldCurveModelCpp,
                MeanReversionCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::CmsCouponPricer(
                valueObject,
                VolatilityLibObj,
                CmsCouponPricerTypeCpp,
                YieldCurveModelEnum,
                MeanReversionLibObj,
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
            errorMsg << "ERROR: qlCmsCouponPricer: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlCmsLeg(
        const ANY &ObjectId,
        const ANY &PaymentBDC,
        const SEQSEQ(ANY) &Nominals,
        const ANY &ScheduleID,
        const SEQSEQ(ANY) &FixingDays,
        const sal_Int32 IsInArrears,
        const ANY &DayCounter,
        const SEQSEQ(ANY) &Floors,
        const SEQSEQ(ANY) &Gearings,
        const ANY &SwapIndex,
        const SEQSEQ(ANY) &Spreads,
        const SEQSEQ(ANY) &Caps,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string PaymentBDCCpp;
        if(PaymentBDC.hasValue()) 
            calcToScalar(PaymentBDCCpp, PaymentBDC);
        else
            PaymentBDCCpp = "Following";

        std::vector<double> NominalsCpp;
        calcToVector(NominalsCpp, Nominals);

        std::string ScheduleIDCpp;
        calcToScalar(ScheduleIDCpp, ScheduleID);

        std::vector<long> FixingDaysCpp;
        calcToVector(FixingDaysCpp, FixingDays);

        bool IsInArrearsCpp;
        calcToScalar(IsInArrearsCpp, IsInArrears);

        std::string DayCounterCpp;
        calcToScalar(DayCounterCpp, DayCounter);

        std::vector<double> FloorsCpp;
        calcToVector(FloorsCpp, Floors);

        std::vector<double> GearingsCpp;
        calcToVector(GearingsCpp, Gearings);

        std::string SwapIndexCpp;
        calcToScalar(SwapIndexCpp, SwapIndex);

        std::vector<double> SpreadsCpp;
        calcToVector(SpreadsCpp, Spreads);

        std::vector<double> CapsCpp;
        calcToVector(CapsCpp, Caps);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        std::vector<QuantLib::Natural> FixingDaysLib;
        calcToVector(FixingDaysLib, FixingDays);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ScheduleIDLibObjPtr, ScheduleIDCpp,
            QuantLibAddin::Schedule, QuantLib::Schedule)

        OH_GET_REFERENCE(SwapIndexLibObjPtr, SwapIndexCpp,
            QuantLibAddin::SwapIndex, QuantLib::SwapIndex)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::BusinessDayConvention PaymentBDCEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(PaymentBDCCpp);

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlCmsLeg(
                ObjectIdCpp,
                PaymentBDCCpp,
                NominalsCpp,
                ScheduleIDCpp,
                FixingDaysCpp,
                IsInArrearsCpp,
                DayCounterCpp,
                FloorsCpp,
                GearingsCpp,
                SwapIndexCpp,
                SpreadsCpp,
                CapsCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::CmsLeg(
                valueObject,
                PaymentBDCEnum,
                NominalsCpp,
                ScheduleIDLibObjPtr,
                FixingDaysLib,
                IsInArrearsCpp,
                DayCounterEnum,
                FloorsCpp,
                GearingsCpp,
                SwapIndexLibObjPtr,
                SpreadsCpp,
                CapsCpp,
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
            errorMsg << "ERROR: qlCmsLeg: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlCmsZeroLeg(
        const ANY &ObjectId,
        const ANY &PaymentBDC,
        const SEQSEQ(ANY) &Nominals,
        const ANY &ScheduleID,
        const SEQSEQ(ANY) &FixingDays,
        const sal_Int32 IsInArrears,
        const ANY &DayCounter,
        const SEQSEQ(ANY) &Floors,
        const SEQSEQ(ANY) &Gearings,
        const ANY &SwapIndex,
        const SEQSEQ(ANY) &Spreads,
        const SEQSEQ(ANY) &Caps,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string PaymentBDCCpp;
        if(PaymentBDC.hasValue()) 
            calcToScalar(PaymentBDCCpp, PaymentBDC);
        else
            PaymentBDCCpp = "Following";

        std::vector<double> NominalsCpp;
        calcToVector(NominalsCpp, Nominals);

        std::string ScheduleIDCpp;
        calcToScalar(ScheduleIDCpp, ScheduleID);

        std::vector<long> FixingDaysCpp;
        calcToVector(FixingDaysCpp, FixingDays);

        bool IsInArrearsCpp;
        calcToScalar(IsInArrearsCpp, IsInArrears);

        std::string DayCounterCpp;
        calcToScalar(DayCounterCpp, DayCounter);

        std::vector<double> FloorsCpp;
        calcToVector(FloorsCpp, Floors);

        std::vector<double> GearingsCpp;
        calcToVector(GearingsCpp, Gearings);

        std::string SwapIndexCpp;
        calcToScalar(SwapIndexCpp, SwapIndex);

        std::vector<double> SpreadsCpp;
        calcToVector(SpreadsCpp, Spreads);

        std::vector<double> CapsCpp;
        calcToVector(CapsCpp, Caps);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        std::vector<QuantLib::Natural> FixingDaysLib;
        calcToVector(FixingDaysLib, FixingDays);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ScheduleIDLibObjPtr, ScheduleIDCpp,
            QuantLibAddin::Schedule, QuantLib::Schedule)

        OH_GET_REFERENCE(SwapIndexLibObjPtr, SwapIndexCpp,
            QuantLibAddin::SwapIndex, QuantLib::SwapIndex)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::BusinessDayConvention PaymentBDCEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(PaymentBDCCpp);

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlCmsZeroLeg(
                ObjectIdCpp,
                PaymentBDCCpp,
                NominalsCpp,
                ScheduleIDCpp,
                FixingDaysCpp,
                IsInArrearsCpp,
                DayCounterCpp,
                FloorsCpp,
                GearingsCpp,
                SwapIndexCpp,
                SpreadsCpp,
                CapsCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::CmsZeroLeg(
                valueObject,
                PaymentBDCEnum,
                NominalsCpp,
                ScheduleIDLibObjPtr,
                FixingDaysLib,
                IsInArrearsCpp,
                DayCounterEnum,
                FloorsCpp,
                GearingsCpp,
                SwapIndexLibObjPtr,
                SpreadsCpp,
                CapsCpp,
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
            errorMsg << "ERROR: qlCmsZeroLeg: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlConundrumPricerByNumericalIntegration(
        const ANY &ObjectId,
        const ANY &SwaptionVol,
        const ANY &YieldCurveModel,
        const ANY &MeanReversion,
        const ANY &LowerLimit,
        const ANY &UpperLimit,
        const ANY &Precision,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string SwaptionVolCpp;
        calcToScalar(SwaptionVolCpp, SwaptionVol);

        std::string YieldCurveModelCpp;
        calcToScalar(YieldCurveModelCpp, YieldCurveModel);

        std::string MeanReversionCpp;
        calcToScalar(MeanReversionCpp, MeanReversion);

        double LowerLimitCpp;
        if(LowerLimit.hasValue()) 
            calcToScalar(LowerLimitCpp, LowerLimit);
        else
            LowerLimitCpp = 0.0;

        double UpperLimitCpp;
        if(UpperLimit.hasValue()) 
            calcToScalar(UpperLimitCpp, UpperLimit);
        else
            UpperLimitCpp = 1.0;

        double PrecisionCpp;
        if(Precision.hasValue()) 
            calcToScalar(PrecisionCpp, Precision);
        else
            PrecisionCpp = 1.0e-6;

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Real LowerLimitLib;
        calcToScalar(LowerLimitLib, LowerLimit);

        QuantLib::Real UpperLimitLib;
        calcToScalar(UpperLimitLib, UpperLimit);

        QuantLib::Real PrecisionLib;
        calcToScalar(PrecisionLib, Precision);

        // convert object IDs into library objects

        OH_GET_OBJECT_DEFAULT(SwaptionVolCoerce, SwaptionVolCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::SwaptionVolatilityStructure> SwaptionVolLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::SwaptionVolatilityStructure,
                QuantLib::SwaptionVolatilityStructure>()(
                    SwaptionVolCoerce, QuantLib::Handle<QuantLib::SwaptionVolatilityStructure>());

        OH_GET_OBJECT_DEFAULT(MeanReversionCoerce, MeanReversionCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::Quote> MeanReversionLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::Quote,
                QuantLib::Quote>()(
                    MeanReversionCoerce, QuantLib::Handle<QuantLib::Quote>());

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::GFunctionFactory::YieldCurveModel YieldCurveModelEnum =
            ObjectHandler::Create<QuantLib::GFunctionFactory::YieldCurveModel>()(YieldCurveModelCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlConundrumPricerByNumericalIntegration(
                ObjectIdCpp,
                SwaptionVolCpp,
                YieldCurveModelCpp,
                MeanReversionCpp,
                LowerLimitCpp,
                UpperLimitCpp,
                PrecisionCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::NumericHaganPricer(
                valueObject,
                SwaptionVolLibObj,
                YieldCurveModelEnum,
                MeanReversionLibObj,
                LowerLimitLib,
                UpperLimitLib,
                PrecisionLib,
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
            errorMsg << "ERROR: qlConundrumPricerByNumericalIntegration: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlDigitalCmsLeg(
        const ANY &ObjectId,
        const ANY &PaymentBDC,
        const SEQSEQ(ANY) &Nominals,
        const ANY &ScheduleID,
        const SEQSEQ(ANY) &FixingDays,
        const sal_Int32 IsInArrears,
        const ANY &DayCounter,
        const SEQSEQ(ANY) &Gearings,
        const ANY &SwapIndex,
        const SEQSEQ(ANY) &Spreads,
        const SEQSEQ(ANY) &CallStrikes,
        const ANY &CallSpecs,
        const SEQSEQ(ANY) &CallPayoff,
        const SEQSEQ(ANY) &PutStrikes,
        const ANY &PutSpecs,
        const SEQSEQ(ANY) &PutPayoff,
        const ANY &Replication,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string PaymentBDCCpp;
        if(PaymentBDC.hasValue()) 
            calcToScalar(PaymentBDCCpp, PaymentBDC);
        else
            PaymentBDCCpp = "Following";

        std::vector<double> NominalsCpp;
        calcToVector(NominalsCpp, Nominals);

        std::string ScheduleIDCpp;
        calcToScalar(ScheduleIDCpp, ScheduleID);

        std::vector<long> FixingDaysCpp;
        calcToVector(FixingDaysCpp, FixingDays);

        bool IsInArrearsCpp;
        calcToScalar(IsInArrearsCpp, IsInArrears);

        std::string DayCounterCpp;
        calcToScalar(DayCounterCpp, DayCounter);

        std::vector<double> GearingsCpp;
        calcToVector(GearingsCpp, Gearings);

        std::string SwapIndexCpp;
        calcToScalar(SwapIndexCpp, SwapIndex);

        std::vector<double> SpreadsCpp;
        calcToVector(SpreadsCpp, Spreads);

        std::vector<double> CallStrikesCpp;
        calcToVector(CallStrikesCpp, CallStrikes);

        std::string CallSpecsCpp;
        calcToScalar(CallSpecsCpp, CallSpecs);

        std::vector<double> CallPayoffCpp;
        calcToVector(CallPayoffCpp, CallPayoff);

        std::vector<double> PutStrikesCpp;
        calcToVector(PutStrikesCpp, PutStrikes);

        std::string PutSpecsCpp;
        calcToScalar(PutSpecsCpp, PutSpecs);

        std::vector<double> PutPayoffCpp;
        calcToVector(PutPayoffCpp, PutPayoff);

        std::string ReplicationCpp;
        calcToScalar(ReplicationCpp, Replication);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        std::vector<QuantLib::Natural> FixingDaysLib;
        calcToVector(FixingDaysLib, FixingDays);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ScheduleIDLibObjPtr, ScheduleIDCpp,
            QuantLibAddin::Schedule, QuantLib::Schedule)

        OH_GET_REFERENCE(SwapIndexLibObjPtr, SwapIndexCpp,
            QuantLibAddin::SwapIndex, QuantLib::SwapIndex)

        OH_GET_REFERENCE(ReplicationLibObjPtr, ReplicationCpp,
            QuantLibAddin::DigitalReplication, QuantLib::DigitalReplication)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::BusinessDayConvention PaymentBDCEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(PaymentBDCCpp);

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlDigitalCmsLeg(
                ObjectIdCpp,
                PaymentBDCCpp,
                NominalsCpp,
                ScheduleIDCpp,
                FixingDaysCpp,
                IsInArrearsCpp,
                DayCounterCpp,
                GearingsCpp,
                SwapIndexCpp,
                SpreadsCpp,
                CallStrikesCpp,
                CallSpecsCpp,
                CallPayoffCpp,
                PutStrikesCpp,
                PutSpecsCpp,
                PutPayoffCpp,
                ReplicationCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::DigitalCmsLeg(
                valueObject,
                PaymentBDCEnum,
                NominalsCpp,
                ScheduleIDLibObjPtr,
                FixingDaysLib,
                IsInArrearsCpp,
                DayCounterEnum,
                GearingsCpp,
                SwapIndexLibObjPtr,
                SpreadsCpp,
                CallStrikesCpp,
                CallSpecsCpp,
                CallPayoffCpp,
                PutStrikesCpp,
                PutSpecsCpp,
                PutPayoffCpp,
                ReplicationLibObjPtr,
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
            errorMsg << "ERROR: qlDigitalCmsLeg: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlDigitalIborLeg(
        const ANY &ObjectId,
        const ANY &PaymentBDC,
        const SEQSEQ(ANY) &Nominals,
        const ANY &ScheduleID,
        const SEQSEQ(ANY) &FixingDays,
        const sal_Int32 IsInArrears,
        const ANY &DayCounter,
        const SEQSEQ(ANY) &Gearings,
        const ANY &IborIndex,
        const SEQSEQ(ANY) &Spreads,
        const SEQSEQ(ANY) &CallStrikes,
        const ANY &CallSpecs,
        const SEQSEQ(ANY) &CallPayoff,
        const SEQSEQ(ANY) &PutStrikes,
        const ANY &PutSpecs,
        const SEQSEQ(ANY) &PutPayoff,
        const ANY &Replication,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string PaymentBDCCpp;
        if(PaymentBDC.hasValue()) 
            calcToScalar(PaymentBDCCpp, PaymentBDC);
        else
            PaymentBDCCpp = "Following";

        std::vector<double> NominalsCpp;
        calcToVector(NominalsCpp, Nominals);

        std::string ScheduleIDCpp;
        calcToScalar(ScheduleIDCpp, ScheduleID);

        std::vector<long> FixingDaysCpp;
        calcToVector(FixingDaysCpp, FixingDays);

        bool IsInArrearsCpp;
        calcToScalar(IsInArrearsCpp, IsInArrears);

        std::string DayCounterCpp;
        calcToScalar(DayCounterCpp, DayCounter);

        std::vector<double> GearingsCpp;
        calcToVector(GearingsCpp, Gearings);

        std::string IborIndexCpp;
        calcToScalar(IborIndexCpp, IborIndex);

        std::vector<double> SpreadsCpp;
        calcToVector(SpreadsCpp, Spreads);

        std::vector<double> CallStrikesCpp;
        calcToVector(CallStrikesCpp, CallStrikes);

        std::string CallSpecsCpp;
        calcToScalar(CallSpecsCpp, CallSpecs);

        std::vector<double> CallPayoffCpp;
        calcToVector(CallPayoffCpp, CallPayoff);

        std::vector<double> PutStrikesCpp;
        calcToVector(PutStrikesCpp, PutStrikes);

        std::string PutSpecsCpp;
        calcToScalar(PutSpecsCpp, PutSpecs);

        std::vector<double> PutPayoffCpp;
        calcToVector(PutPayoffCpp, PutPayoff);

        std::string ReplicationCpp;
        calcToScalar(ReplicationCpp, Replication);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        std::vector<QuantLib::Natural> FixingDaysLib;
        calcToVector(FixingDaysLib, FixingDays);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ScheduleIDLibObjPtr, ScheduleIDCpp,
            QuantLibAddin::Schedule, QuantLib::Schedule)

        OH_GET_REFERENCE(IborIndexLibObjPtr, IborIndexCpp,
            QuantLibAddin::IborIndex, QuantLib::IborIndex)

        OH_GET_REFERENCE(ReplicationLibObjPtr, ReplicationCpp,
            QuantLibAddin::DigitalReplication, QuantLib::DigitalReplication)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::BusinessDayConvention PaymentBDCEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(PaymentBDCCpp);

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlDigitalIborLeg(
                ObjectIdCpp,
                PaymentBDCCpp,
                NominalsCpp,
                ScheduleIDCpp,
                FixingDaysCpp,
                IsInArrearsCpp,
                DayCounterCpp,
                GearingsCpp,
                IborIndexCpp,
                SpreadsCpp,
                CallStrikesCpp,
                CallSpecsCpp,
                CallPayoffCpp,
                PutStrikesCpp,
                PutSpecsCpp,
                PutPayoffCpp,
                ReplicationCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::DigitalIborLeg(
                valueObject,
                PaymentBDCEnum,
                NominalsCpp,
                ScheduleIDLibObjPtr,
                FixingDaysLib,
                IsInArrearsCpp,
                DayCounterEnum,
                GearingsCpp,
                IborIndexLibObjPtr,
                SpreadsCpp,
                CallStrikesCpp,
                CallSpecsCpp,
                CallPayoffCpp,
                PutStrikesCpp,
                PutSpecsCpp,
                PutPayoffCpp,
                ReplicationLibObjPtr,
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
            errorMsg << "ERROR: qlDigitalIborLeg: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlFixedRateLeg(
        const ANY &ObjectId,
        const ANY &PaymentBDC,
        const SEQSEQ(ANY) &Nominals,
        const ANY &ScheduleID,
        const SEQSEQ(ANY) &Coupons,
        const ANY &DayCounter,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string PaymentBDCCpp;
        if(PaymentBDC.hasValue()) 
            calcToScalar(PaymentBDCCpp, PaymentBDC);
        else
            PaymentBDCCpp = "Following";

        std::vector<double> NominalsCpp;
        calcToVector(NominalsCpp, Nominals);

        std::string ScheduleIDCpp;
        calcToScalar(ScheduleIDCpp, ScheduleID);

        std::vector<double> CouponsCpp;
        calcToVector(CouponsCpp, Coupons);

        std::string DayCounterCpp;
        calcToScalar(DayCounterCpp, DayCounter);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ScheduleIDLibObjPtr, ScheduleIDCpp,
            QuantLibAddin::Schedule, QuantLib::Schedule)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::BusinessDayConvention PaymentBDCEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(PaymentBDCCpp);

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlFixedRateLeg(
                ObjectIdCpp,
                PaymentBDCCpp,
                NominalsCpp,
                ScheduleIDCpp,
                CouponsCpp,
                DayCounterCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::FixedRateLeg(
                valueObject,
                PaymentBDCEnum,
                NominalsCpp,
                ScheduleIDLibObjPtr,
                CouponsCpp,
                DayCounterEnum,
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
            errorMsg << "ERROR: qlFixedRateLeg: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlFixedRateLeg2(
        const ANY &ObjectId,
        const ANY &PaymentBDC,
        const SEQSEQ(ANY) &Nominals,
        const ANY &ScheduleID,
        const SEQSEQ(ANY) &Coupons,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string PaymentBDCCpp;
        if(PaymentBDC.hasValue()) 
            calcToScalar(PaymentBDCCpp, PaymentBDC);
        else
            PaymentBDCCpp = "Following";

        std::vector<double> NominalsCpp;
        calcToVector(NominalsCpp, Nominals);

        std::string ScheduleIDCpp;
        calcToScalar(ScheduleIDCpp, ScheduleID);

        std::vector<std::string> CouponsCpp;
        calcToVector(CouponsCpp, Coupons);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        std::vector<boost::shared_ptr<QuantLib::InterestRate> > CouponsLibObjPtr =
            ObjectHandler::getLibraryObjectVector<QuantLibAddin::InterestRate, QuantLib::InterestRate>(CouponsCpp);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ScheduleIDLibObjPtr, ScheduleIDCpp,
            QuantLibAddin::Schedule, QuantLib::Schedule)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::BusinessDayConvention PaymentBDCEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(PaymentBDCCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlFixedRateLeg2(
                ObjectIdCpp,
                PaymentBDCCpp,
                NominalsCpp,
                ScheduleIDCpp,
                CouponsCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::FixedRateLeg(
                valueObject,
                PaymentBDCEnum,
                NominalsCpp,
                ScheduleIDLibObjPtr,
                CouponsLibObjPtr,
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
            errorMsg << "ERROR: qlFixedRateLeg2: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlIborCouponPricer(
        const ANY &ObjectId,
        const ANY &Volatility,
        const ANY &IborCouponPricerType,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string VolatilityCpp;
        calcToScalar(VolatilityCpp, Volatility);

        std::string IborCouponPricerTypeCpp;
        calcToScalar(IborCouponPricerTypeCpp, IborCouponPricerType);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert object IDs into library objects

        OH_GET_OBJECT_DEFAULT(VolatilityCoerce, VolatilityCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::OptionletVolatilityStructure> VolatilityLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::OptionletVolatilityStructure,
                QuantLib::OptionletVolatilityStructure>()(
                    VolatilityCoerce, QuantLib::Handle<QuantLib::OptionletVolatilityStructure>());

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlIborCouponPricer(
                ObjectIdCpp,
                VolatilityCpp,
                IborCouponPricerTypeCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::IborCouponPricer(
                valueObject,
                VolatilityLibObj,
                IborCouponPricerTypeCpp,
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
            errorMsg << "ERROR: qlIborCouponPricer: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlIborLeg(
        const ANY &ObjectId,
        const ANY &PaymentBDC,
        const SEQSEQ(ANY) &Nominals,
        const ANY &ScheduleID,
        const SEQSEQ(ANY) &FixingDays,
        const sal_Int32 IsInArrears,
        const ANY &DayCounter,
        const SEQSEQ(ANY) &Floors,
        const SEQSEQ(ANY) &Gearings,
        const ANY &IborIndex,
        const SEQSEQ(ANY) &Spreads,
        const SEQSEQ(ANY) &Caps,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string PaymentBDCCpp;
        if(PaymentBDC.hasValue()) 
            calcToScalar(PaymentBDCCpp, PaymentBDC);
        else
            PaymentBDCCpp = "Following";

        std::vector<double> NominalsCpp;
        calcToVector(NominalsCpp, Nominals);

        std::string ScheduleIDCpp;
        calcToScalar(ScheduleIDCpp, ScheduleID);

        std::vector<long> FixingDaysCpp;
        calcToVector(FixingDaysCpp, FixingDays);

        bool IsInArrearsCpp;
        calcToScalar(IsInArrearsCpp, IsInArrears);

        std::string DayCounterCpp;
        calcToScalar(DayCounterCpp, DayCounter);

        std::vector<double> FloorsCpp;
        calcToVector(FloorsCpp, Floors);

        std::vector<double> GearingsCpp;
        calcToVector(GearingsCpp, Gearings);

        std::string IborIndexCpp;
        calcToScalar(IborIndexCpp, IborIndex);

        std::vector<double> SpreadsCpp;
        calcToVector(SpreadsCpp, Spreads);

        std::vector<double> CapsCpp;
        calcToVector(CapsCpp, Caps);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        std::vector<QuantLib::Natural> FixingDaysLib;
        calcToVector(FixingDaysLib, FixingDays);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ScheduleIDLibObjPtr, ScheduleIDCpp,
            QuantLibAddin::Schedule, QuantLib::Schedule)

        OH_GET_REFERENCE(IborIndexLibObjPtr, IborIndexCpp,
            QuantLibAddin::IborIndex, QuantLib::IborIndex)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::BusinessDayConvention PaymentBDCEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(PaymentBDCCpp);

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlIborLeg(
                ObjectIdCpp,
                PaymentBDCCpp,
                NominalsCpp,
                ScheduleIDCpp,
                FixingDaysCpp,
                IsInArrearsCpp,
                DayCounterCpp,
                FloorsCpp,
                GearingsCpp,
                IborIndexCpp,
                SpreadsCpp,
                CapsCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::IborLeg(
                valueObject,
                PaymentBDCEnum,
                NominalsCpp,
                ScheduleIDLibObjPtr,
                FixingDaysLib,
                IsInArrearsCpp,
                DayCounterEnum,
                FloorsCpp,
                GearingsCpp,
                IborIndexLibObjPtr,
                SpreadsCpp,
                CapsCpp,
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
            errorMsg << "ERROR: qlIborLeg: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlRangeAccrualLeg(
        const ANY &ObjectId,
        const ANY &PaymentBDC,
        const SEQSEQ(ANY) &Nominals,
        const ANY &ScheduleID,
        const SEQSEQ(ANY) &FixingDays,
        const ANY &DayCounter,
        const SEQSEQ(ANY) &LowerStrikes,
        const SEQSEQ(ANY) &Gearings,
        const ANY &IborIndex,
        const SEQSEQ(ANY) &Spreads,
        const SEQSEQ(ANY) &UpperStrikes,
        const ANY &ObservationsTenor,
        const ANY &ObservationsBDC,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string PaymentBDCCpp;
        if(PaymentBDC.hasValue()) 
            calcToScalar(PaymentBDCCpp, PaymentBDC);
        else
            PaymentBDCCpp = "Following";

        std::vector<double> NominalsCpp;
        calcToVector(NominalsCpp, Nominals);

        std::string ScheduleIDCpp;
        calcToScalar(ScheduleIDCpp, ScheduleID);

        std::vector<long> FixingDaysCpp;
        calcToVector(FixingDaysCpp, FixingDays);

        std::string DayCounterCpp;
        calcToScalar(DayCounterCpp, DayCounter);

        std::vector<double> LowerStrikesCpp;
        calcToVector(LowerStrikesCpp, LowerStrikes);

        std::vector<double> GearingsCpp;
        calcToVector(GearingsCpp, Gearings);

        std::string IborIndexCpp;
        calcToScalar(IborIndexCpp, IborIndex);

        std::vector<double> SpreadsCpp;
        calcToVector(SpreadsCpp, Spreads);

        std::vector<double> UpperStrikesCpp;
        calcToVector(UpperStrikesCpp, UpperStrikes);

        std::string ObservationsTenorCpp;
        calcToScalar(ObservationsTenorCpp, ObservationsTenor);

        std::string ObservationsBDCCpp;
        if(ObservationsBDC.hasValue()) 
            calcToScalar(ObservationsBDCCpp, ObservationsBDC);
        else
            ObservationsBDCCpp = "Modified Following";

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        std::vector<QuantLib::Natural> FixingDaysLib;
        calcToVector(FixingDaysLib, FixingDays);

        QuantLib::Period ObservationsTenorLib;
        calcToScalar(ObservationsTenorLib, ObservationsTenor);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ScheduleIDLibObjPtr, ScheduleIDCpp,
            QuantLibAddin::Schedule, QuantLib::Schedule)

        OH_GET_REFERENCE(IborIndexLibObjPtr, IborIndexCpp,
            QuantLibAddin::IborIndex, QuantLib::IborIndex)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::BusinessDayConvention PaymentBDCEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(PaymentBDCCpp);

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        QuantLib::BusinessDayConvention ObservationsBDCEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(ObservationsBDCCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlRangeAccrualLeg(
                ObjectIdCpp,
                PaymentBDCCpp,
                NominalsCpp,
                ScheduleIDCpp,
                FixingDaysCpp,
                DayCounterCpp,
                LowerStrikesCpp,
                GearingsCpp,
                IborIndexCpp,
                SpreadsCpp,
                UpperStrikesCpp,
                ObservationsTenorCpp,
                ObservationsBDCCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::RangeAccrualLeg(
                valueObject,
                PaymentBDCEnum,
                NominalsCpp,
                ScheduleIDLibObjPtr,
                FixingDaysLib,
                DayCounterEnum,
                LowerStrikesCpp,
                GearingsCpp,
                IborIndexLibObjPtr,
                SpreadsCpp,
                UpperStrikesCpp,
                ObservationsTenorLib,
                ObservationsBDCEnum,
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
            errorMsg << "ERROR: qlRangeAccrualLeg: " << e.what(); 
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


