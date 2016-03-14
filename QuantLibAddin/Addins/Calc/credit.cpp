
/*  
 Copyright (C) 2010 Roland Lichters
 
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
#include <qlo/enumerations/factories/calendarfactory.hpp>
#include <qlo/credit.hpp>
#include <qlo/creditdefaultswap.hpp>
#include <qlo/cdsoption.hpp>
#include <qlo/pricingengines.hpp>
#include <qlo/termstructures.hpp>
#include <qlo/handleimpl.hpp>
#include <qlo/conversions/coercetermstructure.hpp>
#include <qlo/ratehelpers.hpp>
#include <qlo/defaultbasket.hpp>
#include <qlo/exercise.hpp>
#include <ql/termstructures/credit/defaultprobabilityhelpers.hpp>
#include <ql/pricingengines/credit/midpointcdsengine.hpp>
#include <ql/experimental/credit/basket.hpp>
#include <ql/experimental/credit/cdsoption.hpp>
#include <qlo/valueobjects/vo_credit.hpp>

#include <qladdin.hpp>
#include <conversions.hpp>

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBlackCdsOptionEngine(
        const ANY &ObjectId,
        const ANY &DefaultCurve,
        const ANY &RecoveryRate,
        const ANY &YieldCurve,
        const ANY &BlackVol,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string DefaultCurveCpp;
        calcToScalar(DefaultCurveCpp, DefaultCurve);

        double RecoveryRateCpp;
        calcToScalar(RecoveryRateCpp, RecoveryRate);

        std::string YieldCurveCpp;
        calcToScalar(YieldCurveCpp, YieldCurve);

        std::string BlackVolCpp;
        calcToScalar(BlackVolCpp, BlackVol);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Real RecoveryRateLib;
        calcToScalar(RecoveryRateLib, RecoveryRate);

        // convert object IDs into library objects

        OH_GET_OBJECT_DEFAULT(DefaultCurveCoerce, DefaultCurveCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::DefaultProbabilityTermStructure> DefaultCurveLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::DefaultProbabilityTermStructure,
                QuantLib::DefaultProbabilityTermStructure>()(
                    DefaultCurveCoerce, QuantLib::Handle<QuantLib::DefaultProbabilityTermStructure>());

        OH_GET_OBJECT_DEFAULT(YieldCurveCoerce, YieldCurveCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::YieldTermStructure> YieldCurveLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::YieldTermStructure,
                QuantLib::YieldTermStructure>()(
                    YieldCurveCoerce, QuantLib::Handle<QuantLib::YieldTermStructure>());

        OH_GET_OBJECT_DEFAULT(BlackVolCoerce, BlackVolCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::Quote> BlackVolLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::Quote,
                QuantLib::Quote>()(
                    BlackVolCoerce, QuantLib::Handle<QuantLib::Quote>());

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlBlackCdsOptionEngine(
                ObjectIdCpp,
                DefaultCurveCpp,
                RecoveryRateCpp,
                YieldCurveCpp,
                BlackVolCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::BlackCdsOptionEngine(
                valueObject,
                DefaultCurveLibObj,
                RecoveryRateLib,
                YieldCurveLibObj,
                BlackVolLibObj,
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
            errorMsg << "ERROR: qlBlackCdsOptionEngine: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlCDSOption(
        const ANY &ObjectId,
        const ANY &UnderlyingCDS,
        const ANY &Exercise,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string UnderlyingCDSCpp;
        calcToScalar(UnderlyingCDSCpp, UnderlyingCDS);

        std::string ExerciseCpp;
        calcToScalar(ExerciseCpp, Exercise);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert object IDs into library objects

        OH_GET_REFERENCE(UnderlyingCDSLibObjPtr, UnderlyingCDSCpp,
            QuantLibAddin::CreditDefaultSwap, QuantLib::CreditDefaultSwap)

        OH_GET_REFERENCE(ExerciseLibObjPtr, ExerciseCpp,
            QuantLibAddin::Exercise, QuantLib::Exercise)

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlCDSOption(
                ObjectIdCpp,
                UnderlyingCDSCpp,
                ExerciseCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::CdsOption(
                valueObject,
                UnderlyingCDSLibObjPtr,
                ExerciseLibObjPtr,
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
            errorMsg << "ERROR: qlCDSOption: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlCreditDefaultSwap(
        const ANY &ObjectId,
        const ANY &BuyerSeller,
        const ANY &Notional,
        const ANY &Upfront,
        const ANY &Spread,
        const ANY &PremiumSchedule,
        const ANY &PaymentConvention,
        const ANY &DayCounter,
        const sal_Int32 SettlesAccrual,
        const sal_Int32 PayAtDefault,
        const ANY &ProtectionStart,
        const ANY &UpfrontDate,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string BuyerSellerCpp;
        if(BuyerSeller.hasValue()) 
            calcToScalar(BuyerSellerCpp, BuyerSeller);
        else
            BuyerSellerCpp = "Buyer";

        double NotionalCpp;
        calcToScalar(NotionalCpp, Notional);

        double UpfrontCpp;
        calcToScalar(UpfrontCpp, Upfront);

        double SpreadCpp;
        calcToScalar(SpreadCpp, Spread);

        std::string PremiumScheduleCpp;
        calcToScalar(PremiumScheduleCpp, PremiumSchedule);

        std::string PaymentConventionCpp;
        if(PaymentConvention.hasValue()) 
            calcToScalar(PaymentConventionCpp, PaymentConvention);
        else
            PaymentConventionCpp = "Following";

        std::string DayCounterCpp;
        calcToScalar(DayCounterCpp, DayCounter);

        bool SettlesAccrualCpp;
        calcToScalar(SettlesAccrualCpp, SettlesAccrual);

        bool PayAtDefaultCpp;
        calcToScalar(PayAtDefaultCpp, PayAtDefault);

        ObjectHandler::property_t ProtectionStartCpp;
        calcToScalar(ProtectionStartCpp, ProtectionStart);

        ObjectHandler::property_t UpfrontDateCpp;
        calcToScalar(UpfrontDateCpp, UpfrontDate);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Real NotionalLib;
        calcToScalar(NotionalLib, Notional);

        QuantLib::Date ProtectionStartLib;
        if(!ProtectionStart.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            ProtectionStartLib = QuantLib::Date();
        else
            calcToScalar(ProtectionStartLib, ProtectionStart);

        QuantLib::Date UpfrontDateLib;
        if(!UpfrontDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            UpfrontDateLib = QuantLib::Date();
        else
            calcToScalar(UpfrontDateLib, UpfrontDate);

        // convert object IDs into library objects

        OH_GET_REFERENCE(PremiumScheduleLibObjPtr, PremiumScheduleCpp,
            QuantLibAddin::Schedule, QuantLib::Schedule)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::Protection::Side BuyerSellerEnum =
            ObjectHandler::Create<QuantLib::Protection::Side>()(BuyerSellerCpp);

        QuantLib::BusinessDayConvention PaymentConventionEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(PaymentConventionCpp);

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlCreditDefaultSwap(
                ObjectIdCpp,
                BuyerSellerCpp,
                NotionalCpp,
                UpfrontCpp,
                SpreadCpp,
                PremiumScheduleCpp,
                PaymentConventionCpp,
                DayCounterCpp,
                SettlesAccrualCpp,
                PayAtDefaultCpp,
                ProtectionStartCpp,
                UpfrontDateCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::CreditDefaultSwap(
                valueObject,
                BuyerSellerEnum,
                NotionalLib,
                UpfrontCpp,
                SpreadCpp,
                PremiumScheduleLibObjPtr,
                PaymentConventionEnum,
                DayCounterEnum,
                SettlesAccrualCpp,
                PayAtDefaultCpp,
                ProtectionStartLib,
                UpfrontDateLib,
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
            errorMsg << "ERROR: qlCreditDefaultSwap: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlHazardRateCurve(
        const ANY &ObjectId,
        const SEQSEQ(ANY) &CurveDates,
        const SEQSEQ(ANY) &CurveRates,
        const ANY &DayCounter,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::vector<ObjectHandler::property_t> CurveDatesCpp;
        calcToVector(CurveDatesCpp, CurveDates);

        std::vector<double> CurveRatesCpp;
        calcToVector(CurveRatesCpp, CurveRates);

        std::string DayCounterCpp;
        if(DayCounter.hasValue()) 
            calcToScalar(DayCounterCpp, DayCounter);
        else
            DayCounterCpp = "Actual/365 (Fixed)";

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        std::vector<QuantLib::Date> CurveDatesLib;
        calcToVector(CurveDatesLib, CurveDates);

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlHazardRateCurve(
                ObjectIdCpp,
                CurveDatesCpp,
                CurveRatesCpp,
                DayCounterCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::HazardRateCurve(
                valueObject,
                CurveDatesLib,
                CurveRatesCpp,
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
            errorMsg << "ERROR: qlHazardRateCurve: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlMidPointCdsEngine(
        const ANY &ObjectId,
        const ANY &DefaultCurve,
        const ANY &RecoveryRate,
        const ANY &YieldCurve,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string DefaultCurveCpp;
        calcToScalar(DefaultCurveCpp, DefaultCurve);

        double RecoveryRateCpp;
        calcToScalar(RecoveryRateCpp, RecoveryRate);

        std::string YieldCurveCpp;
        calcToScalar(YieldCurveCpp, YieldCurve);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Real RecoveryRateLib;
        calcToScalar(RecoveryRateLib, RecoveryRate);

        // convert object IDs into library objects

        OH_GET_OBJECT_DEFAULT(DefaultCurveCoerce, DefaultCurveCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::DefaultProbabilityTermStructure> DefaultCurveLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::DefaultProbabilityTermStructure,
                QuantLib::DefaultProbabilityTermStructure>()(
                    DefaultCurveCoerce, QuantLib::Handle<QuantLib::DefaultProbabilityTermStructure>());

        OH_GET_OBJECT_DEFAULT(YieldCurveCoerce, YieldCurveCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::YieldTermStructure> YieldCurveLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::YieldTermStructure,
                QuantLib::YieldTermStructure>()(
                    YieldCurveCoerce, QuantLib::Handle<QuantLib::YieldTermStructure>());

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlMidPointCdsEngine(
                ObjectIdCpp,
                DefaultCurveCpp,
                RecoveryRateCpp,
                YieldCurveCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::MidPointCdsEngine(
                valueObject,
                DefaultCurveLibObj,
                RecoveryRateLib,
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
            errorMsg << "ERROR: qlMidPointCdsEngine: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlPiecewiseFlatForwardCurve(
        const ANY &ObjectId,
        const ANY &ReferenceDate,
        const SEQSEQ(ANY) &RateHelpers,
        const ANY &DayCounter,
        const ANY &Accuracy,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        ObjectHandler::property_t ReferenceDateCpp;
        calcToScalar(ReferenceDateCpp, ReferenceDate);

        std::vector<std::string> RateHelpersCpp;
        calcToVector(RateHelpersCpp, RateHelpers);

        std::string DayCounterCpp;
        if(DayCounter.hasValue()) 
            calcToScalar(DayCounterCpp, DayCounter);
        else
            DayCounterCpp = "Actual/365 (Fixed)";

        double AccuracyCpp;
        if(Accuracy.hasValue()) 
            calcToScalar(AccuracyCpp, Accuracy);
        else
            AccuracyCpp = 1.0e-12;

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date ReferenceDateLib;
        if(!ReferenceDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            ReferenceDateLib = QuantLib::Date();
        else
            calcToScalar(ReferenceDateLib, ReferenceDate);

        std::vector<boost::shared_ptr<QuantLib::RateHelper> > RateHelpersLibObjPtr =
            ObjectHandler::getLibraryObjectVector<QuantLibAddin::RateHelper, QuantLib::RateHelper>(RateHelpersCpp);

        QuantLib::Real AccuracyLib;
        calcToScalar(AccuracyLib, Accuracy);

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlPiecewiseFlatForwardCurve(
                ObjectIdCpp,
                ReferenceDateCpp,
                RateHelpersCpp,
                DayCounterCpp,
                AccuracyCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::PiecewiseFlatForwardCurve(
                valueObject,
                ReferenceDateLib,
                RateHelpersLibObjPtr,
                DayCounterEnum,
                AccuracyLib,
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
            errorMsg << "ERROR: qlPiecewiseFlatForwardCurve: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlPiecewiseHazardRateCurve(
        const ANY &ObjectId,
        const SEQSEQ(ANY) &Helpers,
        const ANY &DayCounter,
        const ANY &Calendar,
        const ANY &Interpolation,
        const ANY &Accuracy,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::vector<std::string> HelpersCpp;
        calcToVector(HelpersCpp, Helpers);

        std::string DayCounterCpp;
        if(DayCounter.hasValue()) 
            calcToScalar(DayCounterCpp, DayCounter);
        else
            DayCounterCpp = "Actual/365 (Fixed)";

        std::string CalendarCpp;
        calcToScalar(CalendarCpp, Calendar);

        std::string InterpolationCpp;
        calcToScalar(InterpolationCpp, Interpolation);

        double AccuracyCpp;
        if(Accuracy.hasValue()) 
            calcToScalar(AccuracyCpp, Accuracy);
        else
            AccuracyCpp = 1.0e-12;

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        std::vector<boost::shared_ptr<QuantLib::DefaultProbabilityHelper> > HelpersLibObjPtr =
            ObjectHandler::getLibraryObjectVector<QuantLibAddin::DefaultProbabilityHelper, QuantLib::DefaultProbabilityHelper>(HelpersCpp);

        QuantLib::Real AccuracyLib;
        calcToScalar(AccuracyLib, Accuracy);

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        QuantLib::Calendar CalendarEnum =
            ObjectHandler::Create<QuantLib::Calendar>()(CalendarCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlPiecewiseHazardRateCurve(
                ObjectIdCpp,
                HelpersCpp,
                DayCounterCpp,
                CalendarCpp,
                InterpolationCpp,
                AccuracyCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::PiecewiseHazardRateCurve(
                valueObject,
                HelpersLibObjPtr,
                DayCounterEnum,
                CalendarEnum,
                InterpolationCpp,
                AccuracyLib,
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
            errorMsg << "ERROR: qlPiecewiseHazardRateCurve: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlRiskyFixedBond(
        const ANY &ObjectId,
        const ANY &Bondname,
        const ANY &Currency,
        const ANY &Recovery,
        const ANY &DefaultCurve,
        const ANY &Schedule,
        const ANY &Rate,
        const ANY &DayCounter,
        const ANY &PaymentConvention,
        const ANY &Notional,
        const ANY &DiscountingCurve,
        const ANY &PricingDate,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string BondnameCpp;
        calcToScalar(BondnameCpp, Bondname);

        std::string CurrencyCpp;
        calcToScalar(CurrencyCpp, Currency);

        double RecoveryCpp;
        calcToScalar(RecoveryCpp, Recovery);

        std::string DefaultCurveCpp;
        calcToScalar(DefaultCurveCpp, DefaultCurve);

        std::string ScheduleCpp;
        calcToScalar(ScheduleCpp, Schedule);

        double RateCpp;
        calcToScalar(RateCpp, Rate);

        std::string DayCounterCpp;
        calcToScalar(DayCounterCpp, DayCounter);

        std::string PaymentConventionCpp;
        if(PaymentConvention.hasValue()) 
            calcToScalar(PaymentConventionCpp, PaymentConvention);
        else
            PaymentConventionCpp = "Following";

        double NotionalCpp;
        calcToScalar(NotionalCpp, Notional);

        std::string DiscountingCurveCpp;
        calcToScalar(DiscountingCurveCpp, DiscountingCurve);

        ObjectHandler::property_t PricingDateCpp;
        calcToScalar(PricingDateCpp, PricingDate);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date PricingDateLib;
        calcToScalar(PricingDateLib, PricingDate);

        // convert object IDs into library objects

        OH_GET_OBJECT_DEFAULT(DefaultCurveCoerce, DefaultCurveCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::DefaultProbabilityTermStructure> DefaultCurveLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::DefaultProbabilityTermStructure,
                QuantLib::DefaultProbabilityTermStructure>()(
                    DefaultCurveCoerce, QuantLib::Handle<QuantLib::DefaultProbabilityTermStructure>());

        OH_GET_REFERENCE(ScheduleLibObjPtr, ScheduleCpp,
            QuantLibAddin::Schedule, QuantLib::Schedule)

        OH_GET_OBJECT_DEFAULT(DiscountingCurveCoerce, DiscountingCurveCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::YieldTermStructure> DiscountingCurveLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::YieldTermStructure,
                QuantLib::YieldTermStructure>()(
                    DiscountingCurveCoerce, QuantLib::Handle<QuantLib::YieldTermStructure>());

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::Currency CurrencyEnum =
            ObjectHandler::Create<QuantLib::Currency>()(CurrencyCpp);

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        QuantLib::BusinessDayConvention PaymentConventionEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(PaymentConventionCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlRiskyFixedBond(
                ObjectIdCpp,
                BondnameCpp,
                CurrencyCpp,
                RecoveryCpp,
                DefaultCurveCpp,
                ScheduleCpp,
                RateCpp,
                DayCounterCpp,
                PaymentConventionCpp,
                NotionalCpp,
                DiscountingCurveCpp,
                PricingDateCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::RiskyFixedBond(
                valueObject,
                BondnameCpp,
                CurrencyEnum,
                RecoveryCpp,
                DefaultCurveLibObj,
                ScheduleLibObjPtr,
                RateCpp,
                DayCounterEnum,
                PaymentConventionEnum,
                NotionalCpp,
                DiscountingCurveLibObj,
                PricingDateLib,
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
            errorMsg << "ERROR: qlRiskyFixedBond: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlSpreadCdsHelper(
        const ANY &ObjectId,
        const ANY &RunningSpread,
        const ANY &Tenor,
        const ANY &SettlementDays,
        const ANY &Calendar,
        const ANY &Frequency,
        const ANY &PaymentConvention,
        const ANY &GenRule,
        const ANY &DayCounter,
        const ANY &RecoveryRate,
        const ANY &DiscountingCurve,
        const sal_Int32 SettleAccrual,
        const sal_Int32 PayAtDefault,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string RunningSpreadCpp;
        calcToScalar(RunningSpreadCpp, RunningSpread);

        std::string TenorCpp;
        calcToScalar(TenorCpp, Tenor);

        long SettlementDaysCpp;
        calcToScalar(SettlementDaysCpp, SettlementDays);

        std::string CalendarCpp;
        calcToScalar(CalendarCpp, Calendar);

        std::string FrequencyCpp;
        calcToScalar(FrequencyCpp, Frequency);

        std::string PaymentConventionCpp;
        calcToScalar(PaymentConventionCpp, PaymentConvention);

        std::string GenRuleCpp;
        calcToScalar(GenRuleCpp, GenRule);

        std::string DayCounterCpp;
        calcToScalar(DayCounterCpp, DayCounter);

        double RecoveryRateCpp;
        calcToScalar(RecoveryRateCpp, RecoveryRate);

        std::string DiscountingCurveCpp;
        calcToScalar(DiscountingCurveCpp, DiscountingCurve);

        bool SettleAccrualCpp;
        calcToScalar(SettleAccrualCpp, SettleAccrual);

        bool PayAtDefaultCpp;
        calcToScalar(PayAtDefaultCpp, PayAtDefault);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Period TenorLib;
        calcToScalar(TenorLib, Tenor);

        QuantLib::Natural SettlementDaysLib;
        calcToScalar(SettlementDaysLib, SettlementDays);

        QuantLib::Real RecoveryRateLib;
        calcToScalar(RecoveryRateLib, RecoveryRate);

        // convert object IDs into library objects

        OH_GET_OBJECT_DEFAULT(RunningSpreadCoerce, RunningSpreadCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::Quote> RunningSpreadLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::Quote,
                QuantLib::Quote>()(
                    RunningSpreadCoerce, QuantLib::Handle<QuantLib::Quote>());

        OH_GET_OBJECT_DEFAULT(DiscountingCurveCoerce, DiscountingCurveCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::YieldTermStructure> DiscountingCurveLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::YieldTermStructure,
                QuantLib::YieldTermStructure>()(
                    DiscountingCurveCoerce, QuantLib::Handle<QuantLib::YieldTermStructure>());

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::Calendar CalendarEnum =
            ObjectHandler::Create<QuantLib::Calendar>()(CalendarCpp);

        QuantLib::Frequency FrequencyEnum =
            ObjectHandler::Create<QuantLib::Frequency>()(FrequencyCpp);

        QuantLib::BusinessDayConvention PaymentConventionEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(PaymentConventionCpp);

        QuantLib::DateGeneration::Rule GenRuleEnum =
            ObjectHandler::Create<QuantLib::DateGeneration::Rule>()(GenRuleCpp);

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlSpreadCdsHelper(
                ObjectIdCpp,
                RunningSpreadCpp,
                TenorCpp,
                SettlementDaysCpp,
                CalendarCpp,
                FrequencyCpp,
                PaymentConventionCpp,
                GenRuleCpp,
                DayCounterCpp,
                RecoveryRateCpp,
                DiscountingCurveCpp,
                SettleAccrualCpp,
                PayAtDefaultCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::SpreadCdsHelper(
                valueObject,
                RunningSpreadLibObj,
                TenorLib,
                SettlementDaysLib,
                CalendarEnum,
                FrequencyEnum,
                PaymentConventionEnum,
                GenRuleEnum,
                DayCounterEnum,
                RecoveryRateLib,
                DiscountingCurveLibObj,
                SettleAccrualCpp,
                PayAtDefaultCpp,
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
            errorMsg << "ERROR: qlSpreadCdsHelper: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlUpfrontCdsHelper(
        const ANY &ObjectId,
        const ANY &UpfrontSpread,
        const ANY &RunningSpread,
        const ANY &Tenor,
        const ANY &SettlementDays,
        const ANY &Calendar,
        const ANY &Frequency,
        const ANY &PaymentConvention,
        const ANY &GenRule,
        const ANY &DayCounter,
        const ANY &RecRate,
        const ANY &DiscCurve,
        const ANY &UpfSettlDays,
        const sal_Int32 SettlAccr,
        const sal_Int32 PayAtDefault,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string UpfrontSpreadCpp;
        calcToScalar(UpfrontSpreadCpp, UpfrontSpread);

        double RunningSpreadCpp;
        calcToScalar(RunningSpreadCpp, RunningSpread);

        std::string TenorCpp;
        calcToScalar(TenorCpp, Tenor);

        long SettlementDaysCpp;
        calcToScalar(SettlementDaysCpp, SettlementDays);

        std::string CalendarCpp;
        calcToScalar(CalendarCpp, Calendar);

        std::string FrequencyCpp;
        calcToScalar(FrequencyCpp, Frequency);

        std::string PaymentConventionCpp;
        calcToScalar(PaymentConventionCpp, PaymentConvention);

        std::string GenRuleCpp;
        calcToScalar(GenRuleCpp, GenRule);

        std::string DayCounterCpp;
        calcToScalar(DayCounterCpp, DayCounter);

        double RecRateCpp;
        calcToScalar(RecRateCpp, RecRate);

        std::string DiscCurveCpp;
        calcToScalar(DiscCurveCpp, DiscCurve);

        long UpfSettlDaysCpp;
        calcToScalar(UpfSettlDaysCpp, UpfSettlDays);

        bool SettlAccrCpp;
        calcToScalar(SettlAccrCpp, SettlAccr);

        bool PayAtDefaultCpp;
        calcToScalar(PayAtDefaultCpp, PayAtDefault);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Period TenorLib;
        calcToScalar(TenorLib, Tenor);

        QuantLib::Natural SettlementDaysLib;
        calcToScalar(SettlementDaysLib, SettlementDays);

        QuantLib::Real RecRateLib;
        calcToScalar(RecRateLib, RecRate);

        QuantLib::Natural UpfSettlDaysLib;
        calcToScalar(UpfSettlDaysLib, UpfSettlDays);

        // convert object IDs into library objects

        OH_GET_OBJECT_DEFAULT(UpfrontSpreadCoerce, UpfrontSpreadCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::Quote> UpfrontSpreadLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::Quote,
                QuantLib::Quote>()(
                    UpfrontSpreadCoerce, QuantLib::Handle<QuantLib::Quote>());

        OH_GET_OBJECT_DEFAULT(DiscCurveCoerce, DiscCurveCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::YieldTermStructure> DiscCurveLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::YieldTermStructure,
                QuantLib::YieldTermStructure>()(
                    DiscCurveCoerce, QuantLib::Handle<QuantLib::YieldTermStructure>());

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::Calendar CalendarEnum =
            ObjectHandler::Create<QuantLib::Calendar>()(CalendarCpp);

        QuantLib::Frequency FrequencyEnum =
            ObjectHandler::Create<QuantLib::Frequency>()(FrequencyCpp);

        QuantLib::BusinessDayConvention PaymentConventionEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(PaymentConventionCpp);

        QuantLib::DateGeneration::Rule GenRuleEnum =
            ObjectHandler::Create<QuantLib::DateGeneration::Rule>()(GenRuleCpp);

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlUpfrontCdsHelper(
                ObjectIdCpp,
                UpfrontSpreadCpp,
                RunningSpreadCpp,
                TenorCpp,
                SettlementDaysCpp,
                CalendarCpp,
                FrequencyCpp,
                PaymentConventionCpp,
                GenRuleCpp,
                DayCounterCpp,
                RecRateCpp,
                DiscCurveCpp,
                UpfSettlDaysCpp,
                SettlAccrCpp,
                PayAtDefaultCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::UpfrontCdsHelper(
                valueObject,
                UpfrontSpreadLibObj,
                RunningSpreadCpp,
                TenorLib,
                SettlementDaysLib,
                CalendarEnum,
                FrequencyEnum,
                PaymentConventionEnum,
                GenRuleEnum,
                DayCounterEnum,
                RecRateLib,
                DiscCurveLibObj,
                UpfSettlDaysLib,
                SettlAccrCpp,
                PayAtDefaultCpp,
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
            errorMsg << "ERROR: qlUpfrontCdsHelper: " << e.what(); 
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


