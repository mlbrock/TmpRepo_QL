
/*  
 Copyright (C) 2006, 2007 Chiara Fornarola
 Copyright (C) 2006, 2007, 2008, 2009, 2010, 2011 Ferdinando Ametrano
 Copyright (C) 2005, 2006 Eric Ehlers
 Copyright (C) 2005 Plamen Neykov
 Copyright (C) 2005 Walter Penschke
 Copyright (C) 2009 Piter Dias
 
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
#include <qlo/indexes/iborindex.hpp>
#include <qlo/indexes/swapindex.hpp>
#include <qlo/schedule.hpp>
#include <qlo/bonds.hpp>
#include <qlo/termstructures.hpp>
#include <qlo/couponvectors.hpp>
#include <ql/instruments/bond.hpp>
#include <ql/termstructures/yieldtermstructure.hpp>
#include <ql/pricingengines/bond/bondfunctions.hpp>
#include <ql/currency.hpp>
#include <ql/indexes/iborindex.hpp>
#include <ql/indexes/swapindex.hpp>
#include <qlo/valueobjects/vo_bonds.hpp>

#include <qladdin.hpp>
#include <conversions.hpp>

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBond(
        const ANY &ObjectId,
        const ANY &Description,
        const ANY &Currency,
        const ANY &SettlementDays,
        const ANY &Calendar,
        const ANY &FaceAmount,
        const ANY &MaturityDate,
        const ANY &IssueDate,
        const ANY &LegID,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string DescriptionCpp;
        if(Description.hasValue()) 
            calcToScalar(DescriptionCpp, Description);
        else
            DescriptionCpp = std::string();

        std::string CurrencyCpp;
        if(Currency.hasValue()) 
            calcToScalar(CurrencyCpp, Currency);
        else
            CurrencyCpp = "NullCurrency";

        long SettlementDaysCpp;
        calcToScalar(SettlementDaysCpp, SettlementDays);

        std::string CalendarCpp;
        if(Calendar.hasValue()) 
            calcToScalar(CalendarCpp, Calendar);
        else
            CalendarCpp = "NullCalendar";

        double FaceAmountCpp;
        if(FaceAmount.hasValue()) 
            calcToScalar(FaceAmountCpp, FaceAmount);
        else
            FaceAmountCpp = 100.0;

        ObjectHandler::property_t MaturityDateCpp;
        calcToScalar(MaturityDateCpp, MaturityDate);

        ObjectHandler::property_t IssueDateCpp;
        calcToScalar(IssueDateCpp, IssueDate);

        std::string LegIDCpp;
        calcToScalar(LegIDCpp, LegID);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Size SettlementDaysLib;
        calcToScalar(SettlementDaysLib, SettlementDays);

        QuantLib::Real FaceAmountLib;
        calcToScalar(FaceAmountLib, FaceAmount);

        QuantLib::Date MaturityDateLib;
        if(!MaturityDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            MaturityDateLib = QuantLib::Date();
        else
            calcToScalar(MaturityDateLib, MaturityDate);

        QuantLib::Date IssueDateLib;
        if(!IssueDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            IssueDateLib = QuantLib::Date();
        else
            calcToScalar(IssueDateLib, IssueDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(LegIDLibObj, LegIDCpp,
            QuantLibAddin::Leg, QuantLib::Leg)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::Currency CurrencyEnum =
            ObjectHandler::Create<QuantLib::Currency>()(CurrencyCpp);

        QuantLib::Calendar CalendarEnum =
            ObjectHandler::Create<QuantLib::Calendar>()(CalendarCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlBond(
                ObjectIdCpp,
                DescriptionCpp,
                CurrencyCpp,
                SettlementDaysCpp,
                CalendarCpp,
                FaceAmountCpp,
                MaturityDateCpp,
                IssueDateCpp,
                LegIDCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::Bond(
                valueObject,
                DescriptionCpp,
                CurrencyEnum,
                SettlementDaysLib,
                CalendarEnum,
                FaceAmountLib,
                MaturityDateLib,
                IssueDateLib,
                LegIDLibObj,
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
            errorMsg << "ERROR: qlBond: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondAccrualDays(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the utility function

        static long returnValue;
        returnValue = QuantLib::BondFunctions::accrualDays(
                ObjectIdLibObj,
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondAccrualDays: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondAccrualEndDate(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the utility function

        QuantLib::Date returnValue = QuantLib::BondFunctions::accrualEndDate(
                ObjectIdLibObj,
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondAccrualEndDate: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondAccrualPeriod(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the utility function

        static double returnValue;
        returnValue = QuantLib::BondFunctions::accrualPeriod(
                ObjectIdLibObj,
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondAccrualPeriod: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondAccrualStartDate(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the utility function

        QuantLib::Date returnValue = QuantLib::BondFunctions::accrualStartDate(
                ObjectIdLibObj,
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondAccrualStartDate: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondAccruedAmount(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the utility function

        static double returnValue;
        returnValue = QuantLib::BondFunctions::accruedAmount(
                ObjectIdLibObj,
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondAccruedAmount: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondAccruedDays(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the utility function

        static long returnValue;
        returnValue = QuantLib::BondFunctions::accruedDays(
                ObjectIdLibObj,
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondAccruedDays: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondAccruedPeriod(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the utility function

        static double returnValue;
        returnValue = QuantLib::BondFunctions::accruedPeriod(
                ObjectIdLibObj,
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondAccruedPeriod: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondAtmRateFromYieldTermStructure(
        const ANY &ObjectId,
        const ANY &YieldCurve,
        const ANY &SettlementDate,
        const ANY &CleanPrice,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string YieldCurveCpp;
        calcToScalar(YieldCurveCpp, YieldCurve);

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        double CleanPriceCpp;
        calcToScalar(CleanPriceCpp, CleanPrice);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        QuantLib::Real CleanPriceLib;
        calcToScalar(CleanPriceLib, CleanPrice);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        OH_GET_UNDERLYING(YieldCurveLibObj, YieldCurveCpp,
            QuantLibAddin::YieldTermStructure, QuantLib::YieldTermStructure)

        // invoke the utility function

        QuantLib::Real returnValue = QuantLib::BondFunctions::atmRate(
                ObjectIdLibObj,
                YieldCurveLibObj,
                SettlementDateLib,
                CleanPriceLib);

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
            errorMsg << "ERROR: qlBondAtmRateFromYieldTermStructure: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondBpsFromYield(
        const ANY &ObjectId,
        const ANY &Yield,
        const ANY &DayCounter,
        const ANY &Compounding,
        const ANY &Frequency,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        double YieldCpp;
        calcToScalar(YieldCpp, Yield);

        std::string DayCounterCpp;
        if(DayCounter.hasValue()) 
            calcToScalar(DayCounterCpp, DayCounter);
        else
            DayCounterCpp = "Actual/Actual (ISDA)";

        std::string CompoundingCpp;
        if(Compounding.hasValue()) 
            calcToScalar(CompoundingCpp, Compounding);
        else
            CompoundingCpp = "Compounded";

        std::string FrequencyCpp;
        if(Frequency.hasValue()) 
            calcToScalar(FrequencyCpp, Frequency);
        else
            FrequencyCpp = "Annual";

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        QuantLib::Compounding CompoundingEnum =
            ObjectHandler::Create<QuantLib::Compounding>()(CompoundingCpp);

        QuantLib::Frequency FrequencyEnum =
            ObjectHandler::Create<QuantLib::Frequency>()(FrequencyCpp);

        // invoke the utility function

        QuantLib::Real returnValue = QuantLib::BondFunctions::bps(
                ObjectIdLibObj,
                YieldCpp,
                DayCounterEnum,
                CompoundingEnum,
                FrequencyEnum,
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondBpsFromYield: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondBpsFromYieldTermStructure(
        const ANY &ObjectId,
        const ANY &YieldCurve,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string YieldCurveCpp;
        calcToScalar(YieldCurveCpp, YieldCurve);

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        OH_GET_UNDERLYING(YieldCurveLibObj, YieldCurveCpp,
            QuantLibAddin::YieldTermStructure, QuantLib::YieldTermStructure)

        // invoke the utility function

        QuantLib::Real returnValue = QuantLib::BondFunctions::bps(
                ObjectIdLibObj,
                YieldCurveLibObj,
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondBpsFromYieldTermStructure: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondCalendar(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the member function

        QuantLib::Calendar returnValue = ObjectIdLibObjPtr->calendar();

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
            errorMsg << "ERROR: qlBondCalendar: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondCleanPrice(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the member function

        static double returnValue;
        returnValue = ObjectIdLibObjPtr->cleanPrice();

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
            errorMsg << "ERROR: qlBondCleanPrice: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondCleanPriceFromYield(
        const ANY &ObjectId,
        const ANY &Yield,
        const ANY &DayCounter,
        const ANY &Compounding,
        const ANY &Frequency,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        double YieldCpp;
        calcToScalar(YieldCpp, Yield);

        std::string DayCounterCpp;
        if(DayCounter.hasValue()) 
            calcToScalar(DayCounterCpp, DayCounter);
        else
            DayCounterCpp = "Actual/Actual (ISDA)";

        std::string CompoundingCpp;
        if(Compounding.hasValue()) 
            calcToScalar(CompoundingCpp, Compounding);
        else
            CompoundingCpp = "Compounded";

        std::string FrequencyCpp;
        if(Frequency.hasValue()) 
            calcToScalar(FrequencyCpp, Frequency);
        else
            FrequencyCpp = "Annual";

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        QuantLib::Compounding CompoundingEnum =
            ObjectHandler::Create<QuantLib::Compounding>()(CompoundingCpp);

        QuantLib::Frequency FrequencyEnum =
            ObjectHandler::Create<QuantLib::Frequency>()(FrequencyCpp);

        // invoke the utility function

        QuantLib::Real returnValue = QuantLib::BondFunctions::cleanPrice(
                ObjectIdLibObj,
                YieldCpp,
                DayCounterEnum,
                CompoundingEnum,
                FrequencyEnum,
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondCleanPriceFromYield: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondCleanPriceFromYieldTermStructure(
        const ANY &ObjectId,
        const ANY &YieldCurve,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string YieldCurveCpp;
        calcToScalar(YieldCurveCpp, YieldCurve);

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        OH_GET_UNDERLYING(YieldCurveLibObj, YieldCurveCpp,
            QuantLibAddin::YieldTermStructure, QuantLib::YieldTermStructure)

        // invoke the utility function

        QuantLib::Real returnValue = QuantLib::BondFunctions::cleanPrice(
                ObjectIdLibObj,
                YieldCurveLibObj,
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondCleanPriceFromYieldTermStructure: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondCleanPriceFromZSpread(
        const ANY &ObjectId,
        const ANY &YieldCurve,
        const ANY &ZSpread,
        const ANY &DayCounter,
        const ANY &Compounding,
        const ANY &Frequency,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string YieldCurveCpp;
        calcToScalar(YieldCurveCpp, YieldCurve);

        double ZSpreadCpp;
        calcToScalar(ZSpreadCpp, ZSpread);

        std::string DayCounterCpp;
        if(DayCounter.hasValue()) 
            calcToScalar(DayCounterCpp, DayCounter);
        else
            DayCounterCpp = "Actual/Actual (ISDA)";

        std::string CompoundingCpp;
        if(Compounding.hasValue()) 
            calcToScalar(CompoundingCpp, Compounding);
        else
            CompoundingCpp = "Compounded";

        std::string FrequencyCpp;
        if(Frequency.hasValue()) 
            calcToScalar(FrequencyCpp, Frequency);
        else
            FrequencyCpp = "Annual";

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        OH_GET_REFERENCE(YieldCurveLibObjPtr, YieldCurveCpp,
            QuantLibAddin::YieldTermStructure, QuantLib::YieldTermStructure)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        QuantLib::Compounding CompoundingEnum =
            ObjectHandler::Create<QuantLib::Compounding>()(CompoundingCpp);

        QuantLib::Frequency FrequencyEnum =
            ObjectHandler::Create<QuantLib::Frequency>()(FrequencyCpp);

        // invoke the utility function

        QuantLib::Real returnValue = QuantLib::BondFunctions::cleanPrice(
                ObjectIdLibObj,
                YieldCurveLibObjPtr,
                ZSpreadCpp,
                DayCounterEnum,
                CompoundingEnum,
                FrequencyEnum,
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondCleanPriceFromZSpread: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondConvexityFromYield(
        const ANY &ObjectId,
        const ANY &Yield,
        const ANY &DayCounter,
        const ANY &Compounding,
        const ANY &Frequency,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        double YieldCpp;
        calcToScalar(YieldCpp, Yield);

        std::string DayCounterCpp;
        if(DayCounter.hasValue()) 
            calcToScalar(DayCounterCpp, DayCounter);
        else
            DayCounterCpp = "Actual/Actual (ISDA)";

        std::string CompoundingCpp;
        if(Compounding.hasValue()) 
            calcToScalar(CompoundingCpp, Compounding);
        else
            CompoundingCpp = "Compounded";

        std::string FrequencyCpp;
        if(Frequency.hasValue()) 
            calcToScalar(FrequencyCpp, Frequency);
        else
            FrequencyCpp = "Annual";

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        QuantLib::Compounding CompoundingEnum =
            ObjectHandler::Create<QuantLib::Compounding>()(CompoundingCpp);

        QuantLib::Frequency FrequencyEnum =
            ObjectHandler::Create<QuantLib::Frequency>()(FrequencyCpp);

        // invoke the utility function

        QuantLib::Real returnValue = QuantLib::BondFunctions::convexity(
                ObjectIdLibObj,
                YieldCpp,
                DayCounterEnum,
                CompoundingEnum,
                FrequencyEnum,
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondConvexityFromYield: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondCurrency(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_OBJECT(ObjectIdObjPtr, ObjectIdCpp, QuantLibAddin::Bond)

        // invoke the member function

        std::string returnValue = ObjectIdObjPtr->currency();

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
            errorMsg << "ERROR: qlBondCurrency: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondDescription(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_OBJECT(ObjectIdObjPtr, ObjectIdCpp, QuantLibAddin::Bond)

        // invoke the member function

        std::string returnValue = ObjectIdObjPtr->description();

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
            errorMsg << "ERROR: qlBondDescription: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondDirtyPriceFromYield(
        const ANY &ObjectId,
        const ANY &Yield,
        const ANY &DayCounter,
        const ANY &Compounding,
        const ANY &Frequency,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        double YieldCpp;
        calcToScalar(YieldCpp, Yield);

        std::string DayCounterCpp;
        if(DayCounter.hasValue()) 
            calcToScalar(DayCounterCpp, DayCounter);
        else
            DayCounterCpp = "Actual/Actual (ISDA)";

        std::string CompoundingCpp;
        if(Compounding.hasValue()) 
            calcToScalar(CompoundingCpp, Compounding);
        else
            CompoundingCpp = "Compounded";

        std::string FrequencyCpp;
        if(Frequency.hasValue()) 
            calcToScalar(FrequencyCpp, Frequency);
        else
            FrequencyCpp = "Annual";

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        QuantLib::Compounding CompoundingEnum =
            ObjectHandler::Create<QuantLib::Compounding>()(CompoundingCpp);

        QuantLib::Frequency FrequencyEnum =
            ObjectHandler::Create<QuantLib::Frequency>()(FrequencyCpp);

        // invoke the utility function

        QuantLib::Real returnValue = QuantLib::BondFunctions::dirtyPrice(
                ObjectIdLibObj,
                YieldCpp,
                DayCounterEnum,
                CompoundingEnum,
                FrequencyEnum,
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondDirtyPriceFromYield: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondDurationFromYield(
        const ANY &ObjectId,
        const ANY &Yield,
        const ANY &DayCounter,
        const ANY &Compounding,
        const ANY &Frequency,
        const ANY &DurationType,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        double YieldCpp;
        calcToScalar(YieldCpp, Yield);

        std::string DayCounterCpp;
        if(DayCounter.hasValue()) 
            calcToScalar(DayCounterCpp, DayCounter);
        else
            DayCounterCpp = "Actual/Actual (ISDA)";

        std::string CompoundingCpp;
        if(Compounding.hasValue()) 
            calcToScalar(CompoundingCpp, Compounding);
        else
            CompoundingCpp = "Compounded";

        std::string FrequencyCpp;
        if(Frequency.hasValue()) 
            calcToScalar(FrequencyCpp, Frequency);
        else
            FrequencyCpp = "Annual";

        std::string DurationTypeCpp;
        if(DurationType.hasValue()) 
            calcToScalar(DurationTypeCpp, DurationType);
        else
            DurationTypeCpp = "Modified";

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        QuantLib::Compounding CompoundingEnum =
            ObjectHandler::Create<QuantLib::Compounding>()(CompoundingCpp);

        QuantLib::Frequency FrequencyEnum =
            ObjectHandler::Create<QuantLib::Frequency>()(FrequencyCpp);

        QuantLib::Duration::Type DurationTypeEnum =
            ObjectHandler::Create<QuantLib::Duration::Type>()(DurationTypeCpp);

        // invoke the utility function

        QuantLib::Real returnValue = QuantLib::BondFunctions::duration(
                ObjectIdLibObj,
                YieldCpp,
                DayCounterEnum,
                CompoundingEnum,
                FrequencyEnum,
                DurationTypeEnum,
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondDurationFromYield: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondFlowAnalysis(
        const ANY &ObjectId,
        const ANY &AfterDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        ObjectHandler::property_t AfterDateCpp;
        calcToScalar(AfterDateCpp, AfterDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date AfterDateLib;
        if(!AfterDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            AfterDateLib = QuantLib::Date();
        else
            calcToScalar(AfterDateLib, AfterDate);

        // convert object IDs into library objects

        OH_GET_OBJECT(ObjectIdObjPtr, ObjectIdCpp, QuantLibAddin::Bond)

        // invoke the member function

        std::vector<std::vector<ObjectHandler::property_t> > returnValue = ObjectIdObjPtr->flowAnalysis(
                AfterDateLib);

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        matrixToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlBondFlowAnalysis: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondIsTradable(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the member function

        static short int returnValue;
        returnValue = ObjectIdLibObjPtr->isTradable(
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondIsTradable: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondIssueDate(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the member function

        QuantLib::Date returnValue = ObjectIdLibObjPtr->issueDate();

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
            errorMsg << "ERROR: qlBondIssueDate: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondMaturityDate(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the member function

        QuantLib::Date returnValue = ObjectIdLibObjPtr->maturityDate();

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
            errorMsg << "ERROR: qlBondMaturityDate: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondNextCashFlowAmount(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the utility function

        QuantLib::Real returnValue = QuantLib::BondFunctions::nextCashFlowAmount(
                ObjectIdLibObj,
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondNextCashFlowAmount: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondNextCashFlowDate(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the utility function

        QuantLib::Date returnValue = QuantLib::BondFunctions::nextCashFlowDate(
                ObjectIdLibObj,
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondNextCashFlowDate: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondNextCouponRate(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the utility function

        static double returnValue;
        returnValue = QuantLib::BondFunctions::nextCouponRate(
                ObjectIdLibObj,
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondNextCouponRate: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondNotional(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the member function

        QuantLib::Real returnValue = ObjectIdLibObjPtr->notional(
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondNotional: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondNotionals(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the member function

        std::vector<QuantLib::Real> returnValue = ObjectIdLibObjPtr->notionals();

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        vectorToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlBondNotionals: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondPreviousCashFlowAmount(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the utility function

        QuantLib::Real returnValue = QuantLib::BondFunctions::previousCashFlowAmount(
                ObjectIdLibObj,
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondPreviousCashFlowAmount: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondPreviousCashFlowDate(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the utility function

        QuantLib::Date returnValue = QuantLib::BondFunctions::previousCashFlowDate(
                ObjectIdLibObj,
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondPreviousCashFlowDate: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondPreviousCouponRate(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the utility function

        static double returnValue;
        returnValue = QuantLib::BondFunctions::previousCouponRate(
                ObjectIdLibObj,
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondPreviousCouponRate: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondReferencePeriodEnd(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the utility function

        QuantLib::Date returnValue = QuantLib::BondFunctions::referencePeriodEnd(
                ObjectIdLibObj,
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondReferencePeriodEnd: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondReferencePeriodStart(
        const ANY &ObjectId,
        const ANY &SettlementDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the utility function

        QuantLib::Date returnValue = QuantLib::BondFunctions::referencePeriodStart(
                ObjectIdLibObj,
                SettlementDateLib);

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
            errorMsg << "ERROR: qlBondReferencePeriodStart: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondSetCouponPricer(
        const ANY &ObjectId,
        const ANY &FloatingRateCouponPricer,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string FloatingRateCouponPricerCpp;
        calcToScalar(FloatingRateCouponPricerCpp, FloatingRateCouponPricer);

        // convert object IDs into library objects

        OH_GET_OBJECT(ObjectIdObjPtr, ObjectIdCpp, QuantLibAddin::Bond)

        OH_GET_REFERENCE(FloatingRateCouponPricerLibObjPtr, FloatingRateCouponPricerCpp,
            QuantLibAddin::FloatingRateCouponPricer, QuantLib::FloatingRateCouponPricer)

        // invoke the member function

        static bool returnValue = true;
        ObjectIdObjPtr->setCouponPricer(
                FloatingRateCouponPricerLibObjPtr);

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
            errorMsg << "ERROR: qlBondSetCouponPricer: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondSetCouponPricers(
        const ANY &ObjectId,
        const SEQSEQ(ANY) &FloatingRateCouponPricer,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::vector<std::string> FloatingRateCouponPricerCpp;
        calcToVector(FloatingRateCouponPricerCpp, FloatingRateCouponPricer);

        // convert input datatypes to QuantLib datatypes

        std::vector<boost::shared_ptr<QuantLib::FloatingRateCouponPricer> > FloatingRateCouponPricerLibObjPtr =
            ObjectHandler::getLibraryObjectVector<QuantLibAddin::FloatingRateCouponPricer, QuantLib::FloatingRateCouponPricer>(FloatingRateCouponPricerCpp);

        // convert object IDs into library objects

        OH_GET_OBJECT(ObjectIdObjPtr, ObjectIdCpp, QuantLibAddin::Bond)

        // invoke the member function

        static bool returnValue = true;
        ObjectIdObjPtr->setCouponPricers(
                FloatingRateCouponPricerLibObjPtr);

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
            errorMsg << "ERROR: qlBondSetCouponPricers: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondSettlementDate(
        const ANY &ObjectId,
        const ANY &EvaluationDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        ObjectHandler::property_t EvaluationDateCpp;
        calcToScalar(EvaluationDateCpp, EvaluationDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date EvaluationDateLib;
        if(!EvaluationDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            EvaluationDateLib = QuantLib::Date();
        else
            calcToScalar(EvaluationDateLib, EvaluationDate);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the member function

        QuantLib::Date returnValue = ObjectIdLibObjPtr->settlementDate(
                EvaluationDateLib);

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
            errorMsg << "ERROR: qlBondSettlementDate: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondSettlementDays(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the member function

        QuantLib::Natural returnValue = ObjectIdLibObjPtr->settlementDays();

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
            errorMsg << "ERROR: qlBondSettlementDays: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondStartDate(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // invoke the utility function

        QuantLib::Date returnValue = QuantLib::BondFunctions::startDate(
                ObjectIdLibObj);

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
            errorMsg << "ERROR: qlBondStartDate: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondYieldFromCleanPrice(
        const ANY &ObjectId,
        const ANY &CleanPrice,
        const ANY &DayCounter,
        const ANY &Compounding,
        const ANY &Frequency,
        const ANY &SettlementDate,
        const ANY &Accuracy,
        const ANY &MaxIterations,
        const ANY &Guess,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        double CleanPriceCpp;
        calcToScalar(CleanPriceCpp, CleanPrice);

        std::string DayCounterCpp;
        if(DayCounter.hasValue()) 
            calcToScalar(DayCounterCpp, DayCounter);
        else
            DayCounterCpp = "Actual/Actual (ISDA)";

        std::string CompoundingCpp;
        if(Compounding.hasValue()) 
            calcToScalar(CompoundingCpp, Compounding);
        else
            CompoundingCpp = "Compounded";

        std::string FrequencyCpp;
        if(Frequency.hasValue()) 
            calcToScalar(FrequencyCpp, Frequency);
        else
            FrequencyCpp = "Annual";

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        double AccuracyCpp;
        if(Accuracy.hasValue()) 
            calcToScalar(AccuracyCpp, Accuracy);
        else
            AccuracyCpp = 1.0e-10;

        long MaxIterationsCpp;
        calcToScalar(MaxIterationsCpp, MaxIterations);

        double GuessCpp;
        if(Guess.hasValue()) 
            calcToScalar(GuessCpp, Guess);
        else
            GuessCpp = 0.05;

        // convert input datatypes to QuantLib datatypes

        QuantLib::Real CleanPriceLib;
        calcToScalar(CleanPriceLib, CleanPrice);

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        QuantLib::Real AccuracyLib;
        calcToScalar(AccuracyLib, Accuracy);

        QuantLib::Size MaxIterationsLib;
        calcToScalar(MaxIterationsLib, MaxIterations);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        QuantLib::Compounding CompoundingEnum =
            ObjectHandler::Create<QuantLib::Compounding>()(CompoundingCpp);

        QuantLib::Frequency FrequencyEnum =
            ObjectHandler::Create<QuantLib::Frequency>()(FrequencyCpp);

        // invoke the utility function

        static double returnValue;
        returnValue = QuantLib::BondFunctions::yield(
                ObjectIdLibObj,
                CleanPriceLib,
                DayCounterEnum,
                CompoundingEnum,
                FrequencyEnum,
                SettlementDateLib,
                AccuracyLib,
                MaxIterationsLib,
                GuessCpp);

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
            errorMsg << "ERROR: qlBondYieldFromCleanPrice: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlBondZSpreadFromCleanPrice(
        const ANY &ObjectId,
        const ANY &CleanPrice,
        const ANY &YieldCurve,
        const ANY &DayCounter,
        const ANY &Compounding,
        const ANY &Frequency,
        const ANY &SettlementDate,
        const ANY &Accuracy,
        const ANY &MaxIterations,
        const ANY &Guess,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        double CleanPriceCpp;
        calcToScalar(CleanPriceCpp, CleanPrice);

        std::string YieldCurveCpp;
        calcToScalar(YieldCurveCpp, YieldCurve);

        std::string DayCounterCpp;
        if(DayCounter.hasValue()) 
            calcToScalar(DayCounterCpp, DayCounter);
        else
            DayCounterCpp = "Actual/Actual (ISDA)";

        std::string CompoundingCpp;
        if(Compounding.hasValue()) 
            calcToScalar(CompoundingCpp, Compounding);
        else
            CompoundingCpp = "Compounded";

        std::string FrequencyCpp;
        if(Frequency.hasValue()) 
            calcToScalar(FrequencyCpp, Frequency);
        else
            FrequencyCpp = "Annual";

        ObjectHandler::property_t SettlementDateCpp;
        calcToScalar(SettlementDateCpp, SettlementDate);

        double AccuracyCpp;
        if(Accuracy.hasValue()) 
            calcToScalar(AccuracyCpp, Accuracy);
        else
            AccuracyCpp = 1.0e-10;

        long MaxIterationsCpp;
        calcToScalar(MaxIterationsCpp, MaxIterations);

        double GuessCpp;
        if(Guess.hasValue()) 
            calcToScalar(GuessCpp, Guess);
        else
            GuessCpp = 0.0;

        // convert input datatypes to QuantLib datatypes

        QuantLib::Real CleanPriceLib;
        calcToScalar(CleanPriceLib, CleanPrice);

        QuantLib::Date SettlementDateLib;
        if(!SettlementDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            SettlementDateLib = QuantLib::Date();
        else
            calcToScalar(SettlementDateLib, SettlementDate);

        QuantLib::Real AccuracyLib;
        calcToScalar(AccuracyLib, Accuracy);

        QuantLib::Size MaxIterationsLib;
        calcToScalar(MaxIterationsLib, MaxIterations);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ObjectIdLibObj, ObjectIdCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        OH_GET_REFERENCE(YieldCurveLibObjPtr, YieldCurveCpp,
            QuantLibAddin::YieldTermStructure, QuantLib::YieldTermStructure)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        QuantLib::Compounding CompoundingEnum =
            ObjectHandler::Create<QuantLib::Compounding>()(CompoundingCpp);

        QuantLib::Frequency FrequencyEnum =
            ObjectHandler::Create<QuantLib::Frequency>()(FrequencyCpp);

        // invoke the utility function

        static double returnValue;
        returnValue = QuantLib::BondFunctions::zSpread(
                ObjectIdLibObj,
                CleanPriceLib,
                YieldCurveLibObjPtr,
                DayCounterEnum,
                CompoundingEnum,
                FrequencyEnum,
                SettlementDateLib,
                AccuracyLib,
                MaxIterationsLib,
                GuessCpp);

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
            errorMsg << "ERROR: qlBondZSpreadFromCleanPrice: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlCmsRateBond(
        const ANY &ObjectId,
        const ANY &Description,
        const ANY &Currency,
        const ANY &SettlementDays,
        const ANY &PaymentBDC,
        const ANY &FaceAmount,
        const ANY &ScheduleID,
        const ANY &FixingDays,
        const sal_Int32 IsInArrears,
        const ANY &DayCounter,
        const SEQSEQ(ANY) &Floors,
        const SEQSEQ(ANY) &Gearings,
        const ANY &SwapIndex,
        const SEQSEQ(ANY) &Spreads,
        const SEQSEQ(ANY) &Caps,
        const ANY &Redemption,
        const ANY &IssueDate,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string DescriptionCpp;
        if(Description.hasValue()) 
            calcToScalar(DescriptionCpp, Description);
        else
            DescriptionCpp = std::string();

        std::string CurrencyCpp;
        calcToScalar(CurrencyCpp, Currency);

        long SettlementDaysCpp;
        calcToScalar(SettlementDaysCpp, SettlementDays);

        std::string PaymentBDCCpp;
        if(PaymentBDC.hasValue()) 
            calcToScalar(PaymentBDCCpp, PaymentBDC);
        else
            PaymentBDCCpp = "Following";

        double FaceAmountCpp;
        if(FaceAmount.hasValue()) 
            calcToScalar(FaceAmountCpp, FaceAmount);
        else
            FaceAmountCpp = 100.0;

        std::string ScheduleIDCpp;
        calcToScalar(ScheduleIDCpp, ScheduleID);

        long FixingDaysCpp;
        calcToScalar(FixingDaysCpp, FixingDays);

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

        double RedemptionCpp;
        if(Redemption.hasValue()) 
            calcToScalar(RedemptionCpp, Redemption);
        else
            RedemptionCpp = 100;

        ObjectHandler::property_t IssueDateCpp;
        calcToScalar(IssueDateCpp, IssueDate);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Size SettlementDaysLib;
        calcToScalar(SettlementDaysLib, SettlementDays);

        QuantLib::Real FaceAmountLib;
        calcToScalar(FaceAmountLib, FaceAmount);

        QuantLib::Natural FixingDaysLib;
        calcToScalar(FixingDaysLib, FixingDays);

        QuantLib::Real RedemptionLib;
        calcToScalar(RedemptionLib, Redemption);

        QuantLib::Date IssueDateLib;
        if(!IssueDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            IssueDateLib = QuantLib::Date();
        else
            calcToScalar(IssueDateLib, IssueDate);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ScheduleIDLibObjPtr, ScheduleIDCpp,
            QuantLibAddin::Schedule, QuantLib::Schedule)

        OH_GET_REFERENCE(SwapIndexLibObjPtr, SwapIndexCpp,
            QuantLibAddin::SwapIndex, QuantLib::SwapIndex)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::Currency CurrencyEnum =
            ObjectHandler::Create<QuantLib::Currency>()(CurrencyCpp);

        QuantLib::BusinessDayConvention PaymentBDCEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(PaymentBDCCpp);

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlCmsRateBond(
                ObjectIdCpp,
                DescriptionCpp,
                CurrencyCpp,
                SettlementDaysCpp,
                PaymentBDCCpp,
                FaceAmountCpp,
                ScheduleIDCpp,
                FixingDaysCpp,
                IsInArrearsCpp,
                DayCounterCpp,
                FloorsCpp,
                GearingsCpp,
                SwapIndexCpp,
                SpreadsCpp,
                CapsCpp,
                RedemptionCpp,
                IssueDateCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::CmsRateBond(
                valueObject,
                DescriptionCpp,
                CurrencyEnum,
                SettlementDaysLib,
                PaymentBDCEnum,
                FaceAmountLib,
                ScheduleIDLibObjPtr,
                FixingDaysLib,
                IsInArrearsCpp,
                DayCounterEnum,
                FloorsCpp,
                GearingsCpp,
                SwapIndexLibObjPtr,
                SpreadsCpp,
                CapsCpp,
                RedemptionLib,
                IssueDateLib,
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
            errorMsg << "ERROR: qlCmsRateBond: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlFixedRateBond(
        const ANY &ObjectId,
        const ANY &Description,
        const ANY &Currency,
        const ANY &SettlementDays,
        const ANY &FaceAmount,
        const ANY &ScheduleID,
        const SEQSEQ(ANY) &Coupons,
        const ANY &DayCounter,
        const ANY &PaymentBDC,
        const ANY &Redemption,
        const ANY &IssueDate,
        const ANY &PaymentCalendar,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string DescriptionCpp;
        if(Description.hasValue()) 
            calcToScalar(DescriptionCpp, Description);
        else
            DescriptionCpp = std::string();

        std::string CurrencyCpp;
        calcToScalar(CurrencyCpp, Currency);

        long SettlementDaysCpp;
        calcToScalar(SettlementDaysCpp, SettlementDays);

        double FaceAmountCpp;
        if(FaceAmount.hasValue()) 
            calcToScalar(FaceAmountCpp, FaceAmount);
        else
            FaceAmountCpp = 100.0;

        std::string ScheduleIDCpp;
        calcToScalar(ScheduleIDCpp, ScheduleID);

        std::vector<double> CouponsCpp;
        calcToVector(CouponsCpp, Coupons);

        std::string DayCounterCpp;
        calcToScalar(DayCounterCpp, DayCounter);

        std::string PaymentBDCCpp;
        if(PaymentBDC.hasValue()) 
            calcToScalar(PaymentBDCCpp, PaymentBDC);
        else
            PaymentBDCCpp = "Following";

        double RedemptionCpp;
        if(Redemption.hasValue()) 
            calcToScalar(RedemptionCpp, Redemption);
        else
            RedemptionCpp = 100.0;

        ObjectHandler::property_t IssueDateCpp;
        calcToScalar(IssueDateCpp, IssueDate);

        std::string PaymentCalendarCpp;
        calcToScalar(PaymentCalendarCpp, PaymentCalendar);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Size SettlementDaysLib;
        calcToScalar(SettlementDaysLib, SettlementDays);

        QuantLib::Real FaceAmountLib;
        calcToScalar(FaceAmountLib, FaceAmount);

        QuantLib::Real RedemptionLib;
        calcToScalar(RedemptionLib, Redemption);

        QuantLib::Date IssueDateLib;
        if(!IssueDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            IssueDateLib = QuantLib::Date();
        else
            calcToScalar(IssueDateLib, IssueDate);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ScheduleIDLibObjPtr, ScheduleIDCpp,
            QuantLibAddin::Schedule, QuantLib::Schedule)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::Currency CurrencyEnum =
            ObjectHandler::Create<QuantLib::Currency>()(CurrencyCpp);

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        QuantLib::BusinessDayConvention PaymentBDCEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(PaymentBDCCpp);

        QuantLib::Calendar PaymentCalendarEnum =
            ObjectHandler::Create<QuantLib::Calendar>()(PaymentCalendarCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlFixedRateBond(
                ObjectIdCpp,
                DescriptionCpp,
                CurrencyCpp,
                SettlementDaysCpp,
                FaceAmountCpp,
                ScheduleIDCpp,
                CouponsCpp,
                DayCounterCpp,
                PaymentBDCCpp,
                RedemptionCpp,
                IssueDateCpp,
                PaymentCalendarCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::FixedRateBond(
                valueObject,
                DescriptionCpp,
                CurrencyEnum,
                SettlementDaysLib,
                FaceAmountLib,
                ScheduleIDLibObjPtr,
                CouponsCpp,
                DayCounterEnum,
                PaymentBDCEnum,
                RedemptionLib,
                IssueDateLib,
                PaymentCalendarEnum,
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
            errorMsg << "ERROR: qlFixedRateBond: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlFixedRateBond2(
        const ANY &ObjectId,
        const ANY &Description,
        const ANY &Currency,
        const ANY &SettlementDays,
        const ANY &FaceAmount,
        const ANY &ScheduleID,
        const SEQSEQ(ANY) &Coupons,
        const ANY &PaymentBDC,
        const ANY &Redemption,
        const ANY &IssueDate,
        const ANY &PaymentCalendar,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string DescriptionCpp;
        if(Description.hasValue()) 
            calcToScalar(DescriptionCpp, Description);
        else
            DescriptionCpp = std::string();

        std::string CurrencyCpp;
        calcToScalar(CurrencyCpp, Currency);

        long SettlementDaysCpp;
        calcToScalar(SettlementDaysCpp, SettlementDays);

        double FaceAmountCpp;
        if(FaceAmount.hasValue()) 
            calcToScalar(FaceAmountCpp, FaceAmount);
        else
            FaceAmountCpp = 100.0;

        std::string ScheduleIDCpp;
        calcToScalar(ScheduleIDCpp, ScheduleID);

        std::vector<std::string> CouponsCpp;
        calcToVector(CouponsCpp, Coupons);

        std::string PaymentBDCCpp;
        if(PaymentBDC.hasValue()) 
            calcToScalar(PaymentBDCCpp, PaymentBDC);
        else
            PaymentBDCCpp = "Following";

        double RedemptionCpp;
        if(Redemption.hasValue()) 
            calcToScalar(RedemptionCpp, Redemption);
        else
            RedemptionCpp = 100.0;

        ObjectHandler::property_t IssueDateCpp;
        calcToScalar(IssueDateCpp, IssueDate);

        std::string PaymentCalendarCpp;
        calcToScalar(PaymentCalendarCpp, PaymentCalendar);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Size SettlementDaysLib;
        calcToScalar(SettlementDaysLib, SettlementDays);

        QuantLib::Real FaceAmountLib;
        calcToScalar(FaceAmountLib, FaceAmount);

        std::vector<boost::shared_ptr<QuantLib::InterestRate> > CouponsLibObjPtr =
            ObjectHandler::getLibraryObjectVector<QuantLibAddin::InterestRate, QuantLib::InterestRate>(CouponsCpp);

        QuantLib::Real RedemptionLib;
        calcToScalar(RedemptionLib, Redemption);

        QuantLib::Date IssueDateLib;
        if(!IssueDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            IssueDateLib = QuantLib::Date();
        else
            calcToScalar(IssueDateLib, IssueDate);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ScheduleIDLibObjPtr, ScheduleIDCpp,
            QuantLibAddin::Schedule, QuantLib::Schedule)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::Currency CurrencyEnum =
            ObjectHandler::Create<QuantLib::Currency>()(CurrencyCpp);

        QuantLib::BusinessDayConvention PaymentBDCEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(PaymentBDCCpp);

        QuantLib::Calendar PaymentCalendarEnum =
            ObjectHandler::Create<QuantLib::Calendar>()(PaymentCalendarCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlFixedRateBond2(
                ObjectIdCpp,
                DescriptionCpp,
                CurrencyCpp,
                SettlementDaysCpp,
                FaceAmountCpp,
                ScheduleIDCpp,
                CouponsCpp,
                PaymentBDCCpp,
                RedemptionCpp,
                IssueDateCpp,
                PaymentCalendarCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::FixedRateBond(
                valueObject,
                DescriptionCpp,
                CurrencyEnum,
                SettlementDaysLib,
                FaceAmountLib,
                ScheduleIDLibObjPtr,
                CouponsLibObjPtr,
                PaymentBDCEnum,
                RedemptionLib,
                IssueDateLib,
                PaymentCalendarEnum,
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
            errorMsg << "ERROR: qlFixedRateBond2: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlFloatingRateBond(
        const ANY &ObjectId,
        const ANY &Description,
        const ANY &Currency,
        const ANY &SettlementDays,
        const ANY &PaymentBDC,
        const ANY &FaceAmount,
        const ANY &ScheduleID,
        const ANY &FixingDays,
        const sal_Int32 IsInArrears,
        const ANY &DayCounter,
        const SEQSEQ(ANY) &Floors,
        const SEQSEQ(ANY) &Gearings,
        const ANY &IborIndex,
        const SEQSEQ(ANY) &Spreads,
        const SEQSEQ(ANY) &Caps,
        const ANY &Redemption,
        const ANY &IssueDate,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string DescriptionCpp;
        if(Description.hasValue()) 
            calcToScalar(DescriptionCpp, Description);
        else
            DescriptionCpp = std::string();

        std::string CurrencyCpp;
        calcToScalar(CurrencyCpp, Currency);

        long SettlementDaysCpp;
        calcToScalar(SettlementDaysCpp, SettlementDays);

        std::string PaymentBDCCpp;
        if(PaymentBDC.hasValue()) 
            calcToScalar(PaymentBDCCpp, PaymentBDC);
        else
            PaymentBDCCpp = "Following";

        double FaceAmountCpp;
        if(FaceAmount.hasValue()) 
            calcToScalar(FaceAmountCpp, FaceAmount);
        else
            FaceAmountCpp = 100.0;

        std::string ScheduleIDCpp;
        calcToScalar(ScheduleIDCpp, ScheduleID);

        long FixingDaysCpp;
        calcToScalar(FixingDaysCpp, FixingDays);

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

        double RedemptionCpp;
        if(Redemption.hasValue()) 
            calcToScalar(RedemptionCpp, Redemption);
        else
            RedemptionCpp = 100;

        ObjectHandler::property_t IssueDateCpp;
        calcToScalar(IssueDateCpp, IssueDate);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Size SettlementDaysLib;
        calcToScalar(SettlementDaysLib, SettlementDays);

        QuantLib::Real FaceAmountLib;
        calcToScalar(FaceAmountLib, FaceAmount);

        QuantLib::Natural FixingDaysLib;
        calcToScalar(FixingDaysLib, FixingDays);

        QuantLib::Real RedemptionLib;
        calcToScalar(RedemptionLib, Redemption);

        QuantLib::Date IssueDateLib;
        if(!IssueDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            IssueDateLib = QuantLib::Date();
        else
            calcToScalar(IssueDateLib, IssueDate);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ScheduleIDLibObjPtr, ScheduleIDCpp,
            QuantLibAddin::Schedule, QuantLib::Schedule)

        OH_GET_REFERENCE(IborIndexLibObjPtr, IborIndexCpp,
            QuantLibAddin::IborIndex, QuantLib::IborIndex)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::Currency CurrencyEnum =
            ObjectHandler::Create<QuantLib::Currency>()(CurrencyCpp);

        QuantLib::BusinessDayConvention PaymentBDCEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(PaymentBDCCpp);

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlFloatingRateBond(
                ObjectIdCpp,
                DescriptionCpp,
                CurrencyCpp,
                SettlementDaysCpp,
                PaymentBDCCpp,
                FaceAmountCpp,
                ScheduleIDCpp,
                FixingDaysCpp,
                IsInArrearsCpp,
                DayCounterCpp,
                FloorsCpp,
                GearingsCpp,
                IborIndexCpp,
                SpreadsCpp,
                CapsCpp,
                RedemptionCpp,
                IssueDateCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::FloatingRateBond(
                valueObject,
                DescriptionCpp,
                CurrencyEnum,
                SettlementDaysLib,
                PaymentBDCEnum,
                FaceAmountLib,
                ScheduleIDLibObjPtr,
                FixingDaysLib,
                IsInArrearsCpp,
                DayCounterEnum,
                FloorsCpp,
                GearingsCpp,
                IborIndexLibObjPtr,
                SpreadsCpp,
                CapsCpp,
                RedemptionLib,
                IssueDateLib,
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
            errorMsg << "ERROR: qlFloatingRateBond: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlZeroCouponBond(
        const ANY &ObjectId,
        const ANY &Description,
        const ANY &Currency,
        const ANY &SettlementDays,
        const ANY &Calendar,
        const ANY &FaceAmount,
        const ANY &Maturity,
        const ANY &PaymentBDC,
        const ANY &Redemption,
        const ANY &IssueDate,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string DescriptionCpp;
        if(Description.hasValue()) 
            calcToScalar(DescriptionCpp, Description);
        else
            DescriptionCpp = std::string();

        std::string CurrencyCpp;
        calcToScalar(CurrencyCpp, Currency);

        long SettlementDaysCpp;
        calcToScalar(SettlementDaysCpp, SettlementDays);

        std::string CalendarCpp;
        calcToScalar(CalendarCpp, Calendar);

        double FaceAmountCpp;
        if(FaceAmount.hasValue()) 
            calcToScalar(FaceAmountCpp, FaceAmount);
        else
            FaceAmountCpp = 100.0;

        ObjectHandler::property_t MaturityCpp;
        calcToScalar(MaturityCpp, Maturity);

        std::string PaymentBDCCpp;
        if(PaymentBDC.hasValue()) 
            calcToScalar(PaymentBDCCpp, PaymentBDC);
        else
            PaymentBDCCpp = "Following";

        double RedemptionCpp;
        if(Redemption.hasValue()) 
            calcToScalar(RedemptionCpp, Redemption);
        else
            RedemptionCpp = 100;

        ObjectHandler::property_t IssueDateCpp;
        calcToScalar(IssueDateCpp, IssueDate);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Size SettlementDaysLib;
        calcToScalar(SettlementDaysLib, SettlementDays);

        QuantLib::Real FaceAmountLib;
        calcToScalar(FaceAmountLib, FaceAmount);

        QuantLib::Date MaturityLib;
        calcToScalar(MaturityLib, Maturity);

        QuantLib::Real RedemptionLib;
        calcToScalar(RedemptionLib, Redemption);

        QuantLib::Date IssueDateLib;
        if(!IssueDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            IssueDateLib = QuantLib::Date();
        else
            calcToScalar(IssueDateLib, IssueDate);

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::Currency CurrencyEnum =
            ObjectHandler::Create<QuantLib::Currency>()(CurrencyCpp);

        QuantLib::Calendar CalendarEnum =
            ObjectHandler::Create<QuantLib::Calendar>()(CalendarCpp);

        QuantLib::BusinessDayConvention PaymentBDCEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(PaymentBDCCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlZeroCouponBond(
                ObjectIdCpp,
                DescriptionCpp,
                CurrencyCpp,
                SettlementDaysCpp,
                CalendarCpp,
                FaceAmountCpp,
                MaturityCpp,
                PaymentBDCCpp,
                RedemptionCpp,
                IssueDateCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::ZeroCouponBond(
                valueObject,
                DescriptionCpp,
                CurrencyEnum,
                SettlementDaysLib,
                CalendarEnum,
                FaceAmountLib,
                MaturityLib,
                PaymentBDCEnum,
                RedemptionLib,
                IssueDateLib,
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
            errorMsg << "ERROR: qlZeroCouponBond: " << e.what(); 
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


