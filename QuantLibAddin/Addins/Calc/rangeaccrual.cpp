
/*  
 Copyright (C) 2006, 2007 Giorgio Facchinetti
 
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
#include <qlo/rangeaccrual.hpp>
#include <qlo/indexes/iborindex.hpp>
#include <qlo/schedule.hpp>
#include <qlo/smilesection.hpp>
#include <qlo/termstructures.hpp>
#include <ql/termstructures/yieldtermstructure.hpp>
#include <ql/cashflows/rangeaccrual.hpp>
#include <ql/indexes/iborindex.hpp>
#include <qlo/valueobjects/vo_rangeaccrual.hpp>

#include <qladdin.hpp>
#include <conversions.hpp>

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlRangeAccrualFloatersCoupon(
        const ANY &ObjectId,
        const ANY &Nominal,
        const ANY &PaymentDate,
        const ANY &IborIndex,
        const ANY &StartDate,
        const ANY &EndDate,
        const ANY &FixingDays,
        const ANY &DayCountID,
        const ANY &Gearings,
        const ANY &Spreads,
        const ANY &RefPeriodStart,
        const ANY &RefPeriodEnd,
        const ANY &ObserSchedID,
        const ANY &LowerTrigger,
        const ANY &UpperTrigger,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        double NominalCpp;
        calcToScalar(NominalCpp, Nominal);

        ObjectHandler::property_t PaymentDateCpp;
        calcToScalar(PaymentDateCpp, PaymentDate);

        std::string IborIndexCpp;
        calcToScalar(IborIndexCpp, IborIndex);

        ObjectHandler::property_t StartDateCpp;
        calcToScalar(StartDateCpp, StartDate);

        ObjectHandler::property_t EndDateCpp;
        calcToScalar(EndDateCpp, EndDate);

        long FixingDaysCpp;
        calcToScalar(FixingDaysCpp, FixingDays);

        std::string DayCountIDCpp;
        calcToScalar(DayCountIDCpp, DayCountID);

        double GearingsCpp;
        calcToScalar(GearingsCpp, Gearings);

        double SpreadsCpp;
        calcToScalar(SpreadsCpp, Spreads);

        ObjectHandler::property_t RefPeriodStartCpp;
        calcToScalar(RefPeriodStartCpp, RefPeriodStart);

        ObjectHandler::property_t RefPeriodEndCpp;
        calcToScalar(RefPeriodEndCpp, RefPeriodEnd);

        std::string ObserSchedIDCpp;
        calcToScalar(ObserSchedIDCpp, ObserSchedID);

        double LowerTriggerCpp;
        calcToScalar(LowerTriggerCpp, LowerTrigger);

        double UpperTriggerCpp;
        calcToScalar(UpperTriggerCpp, UpperTrigger);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date PaymentDateLib;
        calcToScalar(PaymentDateLib, PaymentDate);

        QuantLib::Date StartDateLib;
        calcToScalar(StartDateLib, StartDate);

        QuantLib::Date EndDateLib;
        calcToScalar(EndDateLib, EndDate);

        QuantLib::Date RefPeriodStartLib;
        calcToScalar(RefPeriodStartLib, RefPeriodStart);

        QuantLib::Date RefPeriodEndLib;
        calcToScalar(RefPeriodEndLib, RefPeriodEnd);

        // convert object IDs into library objects

        OH_GET_REFERENCE(IborIndexLibObjPtr, IborIndexCpp,
            QuantLibAddin::IborIndex, QuantLib::IborIndex)

        OH_GET_REFERENCE(ObserSchedIDLibObjPtr, ObserSchedIDCpp,
            QuantLibAddin::Schedule, QuantLib::Schedule)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::DayCounter DayCountIDEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCountIDCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlRangeAccrualFloatersCoupon(
                ObjectIdCpp,
                NominalCpp,
                PaymentDateCpp,
                IborIndexCpp,
                StartDateCpp,
                EndDateCpp,
                FixingDaysCpp,
                DayCountIDCpp,
                GearingsCpp,
                SpreadsCpp,
                RefPeriodStartCpp,
                RefPeriodEndCpp,
                ObserSchedIDCpp,
                LowerTriggerCpp,
                UpperTriggerCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::RangeAccrualFloatersCoupon(
                valueObject,
                NominalCpp,
                PaymentDateLib,
                IborIndexLibObjPtr,
                StartDateLib,
                EndDateLib,
                FixingDaysCpp,
                DayCountIDEnum,
                GearingsCpp,
                SpreadsCpp,
                RefPeriodStartLib,
                RefPeriodEndLib,
                ObserSchedIDLibObjPtr,
                LowerTriggerCpp,
                UpperTriggerCpp,
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
            errorMsg << "ERROR: qlRangeAccrualFloatersCoupon: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlRangeAccrualFloatersCouponEndDate(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::RangeAccrualFloatersCoupon, QuantLib::RangeAccrualFloatersCoupon)

        // invoke the member function

        QuantLib::Date returnValue = ObjectIdLibObjPtr->accrualEndDate();

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
            errorMsg << "ERROR: qlRangeAccrualFloatersCouponEndDate: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlRangeAccrualFloatersCouponFromLeg(
        const ANY &ObjectId,
        const ANY &RangeAccrualLeg,
        const ANY &Position,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string RangeAccrualLegCpp;
        calcToScalar(RangeAccrualLegCpp, RangeAccrualLeg);

        long PositionCpp;
        calcToScalar(PositionCpp, Position);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Size PositionLib;
        calcToScalar(PositionLib, Position);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(RangeAccrualLegLibObj, RangeAccrualLegCpp,
            QuantLibAddin::Leg, QuantLib::Leg)

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlRangeAccrualFloatersCouponFromLeg(
                ObjectIdCpp,
                RangeAccrualLegCpp,
                PositionCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::RangeAccrualFloatersCoupon(
                valueObject,
                RangeAccrualLegLibObj,
                PositionLib,
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
            errorMsg << "ERROR: qlRangeAccrualFloatersCouponFromLeg: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlRangeAccrualFloatersCouponObservationDates(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::RangeAccrualFloatersCoupon, QuantLib::RangeAccrualFloatersCoupon)

        // invoke the member function

        std::vector<QuantLib::Date> returnValue = ObjectIdLibObjPtr->observationDates();

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        vectorToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlRangeAccrualFloatersCouponObservationDates: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlRangeAccrualFloatersCouponObservationsNo(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::RangeAccrualFloatersCoupon, QuantLib::RangeAccrualFloatersCoupon)

        // invoke the member function

        QuantLib::Size returnValue = ObjectIdLibObjPtr->observationsNo();

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
            errorMsg << "ERROR: qlRangeAccrualFloatersCouponObservationsNo: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlRangeAccrualFloatersCouponSetPricer(
        const ANY &ObjectId,
        const ANY &RangeAccrualPricer,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string RangeAccrualPricerCpp;
        calcToScalar(RangeAccrualPricerCpp, RangeAccrualPricer);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::RangeAccrualFloatersCoupon, QuantLib::RangeAccrualFloatersCoupon)

        OH_GET_REFERENCE(RangeAccrualPricerLibObjPtr, RangeAccrualPricerCpp,
            QuantLibAddin::RangeAccrualPricer, QuantLib::RangeAccrualPricer)

        // invoke the member function

        static bool returnValue = true;
        ObjectIdLibObjPtr->setPricer(
                RangeAccrualPricerLibObjPtr);

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
            errorMsg << "ERROR: qlRangeAccrualFloatersCouponSetPricer: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlRangeAccrualFloatersCouponStarDate(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::RangeAccrualFloatersCoupon, QuantLib::RangeAccrualFloatersCoupon)

        // invoke the member function

        QuantLib::Date returnValue = ObjectIdLibObjPtr->accrualStartDate();

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
            errorMsg << "ERROR: qlRangeAccrualFloatersCouponStarDate: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlRangeAccrualFloatersPrice(
        const ANY &ObjectId,
        const ANY &YieldCurve,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string YieldCurveCpp;
        calcToScalar(YieldCurveCpp, YieldCurve);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::RangeAccrualFloatersCoupon, QuantLib::RangeAccrualFloatersCoupon)

        OH_GET_OBJECT_DEFAULT(YieldCurveCoerce, YieldCurveCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::YieldTermStructure> YieldCurveLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::YieldTermStructure,
                QuantLib::YieldTermStructure>()(
                    YieldCurveCoerce, QuantLib::Handle<QuantLib::YieldTermStructure>());

        // invoke the member function

        static double returnValue;
        returnValue = ObjectIdLibObjPtr->price(
                YieldCurveLibObj);

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
            errorMsg << "ERROR: qlRangeAccrualFloatersPrice: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlRangeAccrualPricerByBgm(
        const ANY &ObjectId,
        const ANY &Correlation,
        const ANY &SmileOnStartDateID,
        const ANY &SmileOnEndDateID,
        const sal_Int32 WithSmile,
        const sal_Int32 ByCallSpread,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        double CorrelationCpp;
        calcToScalar(CorrelationCpp, Correlation);

        std::string SmileOnStartDateIDCpp;
        calcToScalar(SmileOnStartDateIDCpp, SmileOnStartDateID);

        std::string SmileOnEndDateIDCpp;
        calcToScalar(SmileOnEndDateIDCpp, SmileOnEndDateID);

        bool WithSmileCpp;
        calcToScalar(WithSmileCpp, WithSmile);

        bool ByCallSpreadCpp;
        calcToScalar(ByCallSpreadCpp, ByCallSpread);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert object IDs into library objects

        OH_GET_REFERENCE(SmileOnStartDateIDLibObjPtr, SmileOnStartDateIDCpp,
            QuantLibAddin::SmileSection, QuantLib::SmileSection)

        OH_GET_REFERENCE(SmileOnEndDateIDLibObjPtr, SmileOnEndDateIDCpp,
            QuantLibAddin::SmileSection, QuantLib::SmileSection)

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlRangeAccrualPricerByBgm(
                ObjectIdCpp,
                CorrelationCpp,
                SmileOnStartDateIDCpp,
                SmileOnEndDateIDCpp,
                WithSmileCpp,
                ByCallSpreadCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::RangeAccrualPricerByBgm(
                valueObject,
                CorrelationCpp,
                SmileOnStartDateIDLibObjPtr,
                SmileOnEndDateIDLibObjPtr,
                WithSmileCpp,
                ByCallSpreadCpp,
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
            errorMsg << "ERROR: qlRangeAccrualPricerByBgm: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlSimpleFloaterPrice(
        const ANY &ObjectId,
        const ANY &YieldCurve,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string YieldCurveCpp;
        calcToScalar(YieldCurveCpp, YieldCurve);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::RangeAccrualFloatersCoupon, QuantLib::RangeAccrualFloatersCoupon)

        OH_GET_OBJECT_DEFAULT(YieldCurveCoerce, YieldCurveCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::YieldTermStructure> YieldCurveLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::YieldTermStructure,
                QuantLib::YieldTermStructure>()(
                    YieldCurveCoerce, QuantLib::Handle<QuantLib::YieldTermStructure>());

        // invoke the member function

        static double returnValue;
        returnValue = ObjectIdLibObjPtr->priceWithoutOptionality(
                YieldCurveLibObj);

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
            errorMsg << "ERROR: qlSimpleFloaterPrice: " << e.what(); 
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


