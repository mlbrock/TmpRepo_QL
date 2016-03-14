
/*  
 Copyright (C) 2005, 2006 Eric Ehlers
 Copyright (C) 2006, 2007, 2008, 2009, 2015 Ferdinando Ametrano
 Copyright (C) 2005 Plamen Neykov
 Copyright (C) 2005 Aurelien Chanudet
 Copyright (C) 2015 Maddalena Zanzi
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
#include <oh/enumerations/typefactory.hpp>
#include <qlo/enumerations/factories/calendarfactory.hpp>
#include <qlo/ratehelpers.hpp>
#include <qlo/indexes/swapindex.hpp>
#include <qlo/schedule.hpp>
#include <qlo/bonds.hpp>
#include <qlo/yieldtermstructures.hpp>
#include <qlo/indexes/ibor/euribor.hpp>
#include <ql/termstructures/yield/ratehelpers.hpp>
#include <ql/indexes/swapindex.hpp>
#include <ql/instruments/bonds/fixedratebond.hpp>
#include <ql/indexes/ibor/euribor.hpp>
#include <qlo/valueobjects/vo_ratehelpers.hpp>

#include <qlo/conversions/all.hpp>
#include <oh/property.hpp>

namespace QuantLibAddinCpp {

    std::string qlBondHelper(
            const std::string &ObjectId,
            const ObjectHandler::property_t &Price,
            const std::string &Bond,
            const ObjectHandler::property_t &UseCleanPrice,
            const ObjectHandler::property_t &Permanent,
            const ObjectHandler::property_t &Trigger,
            const bool &Overwrite) {

        try {

        // convert input datatypes to C++ datatypes

        bool UseCleanPriceCpp = ObjectHandler::convert2<bool>(
            UseCleanPrice, "UseCleanPrice", true);

        bool PermanentCpp = ObjectHandler::convert2<bool>(
            Permanent, "Permanent", false);

        // convert object IDs into library objects

        QuantLib::Handle<QuantLib::Quote> PriceLibObj = 
            ObjectHandler::convert2<QuantLib::Handle<QuantLib::Quote> >(
                Price, "Price");

        OH_GET_REFERENCE(BondLibObjPtr, Bond,
            QuantLibAddin::Bond, QuantLib::Bond)

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlBondHelper(
                ObjectId,
                Price,
                Bond,
                UseCleanPriceCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::BondHelper(
                valueObject,
                PriceLibObj,
                BondLibObjPtr,
                UseCleanPriceCpp,
                PermanentCpp));

        // Store the Object in the Repository

        std::string returnValue =
            ObjectHandler::Repository::instance().storeObject(ObjectId, object, Overwrite, valueObject);

        // Convert and return the return value

        return returnValue;

        } catch (const std::exception &e) {
            OH_FAIL("Error in function qlBondHelper : " << e.what());
        }
    }


    std::string qlDatedOISRateHelper(
            const std::string &ObjectId,
            const ObjectHandler::property_t &StartDate,
            const ObjectHandler::property_t &EndDate,
            const ObjectHandler::property_t &FixedRate,
            const std::string &ONIndex,
            const ObjectHandler::property_t &DiscountingCurve,
            const ObjectHandler::property_t &Permanent,
            const ObjectHandler::property_t &Trigger,
            const bool &Overwrite) {

        try {

        // convert input datatypes to C++ datatypes

        std::string DiscountingCurveCpp = ObjectHandler::convert2<std::string>(
            DiscountingCurve, "DiscountingCurve", "");

        bool PermanentCpp = ObjectHandler::convert2<bool>(
            Permanent, "Permanent", false);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date StartDateLib = ObjectHandler::convert2<QuantLib::Date>(
            StartDate, "StartDate");

        QuantLib::Date EndDateLib = ObjectHandler::convert2<QuantLib::Date>(
            EndDate, "EndDate");

        // convert object IDs into library objects

        QuantLib::Handle<QuantLib::Quote> FixedRateLibObj = 
            ObjectHandler::convert2<QuantLib::Handle<QuantLib::Quote> >(
                FixedRate, "FixedRate");

        OH_GET_REFERENCE(ONIndexLibObjPtr, ONIndex,
            QuantLibAddin::OvernightIndex, QuantLib::OvernightIndex)

        OH_GET_OBJECT_DEFAULT(DiscountingCurveCoerce, DiscountingCurveCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::YieldTermStructure> DiscountingCurveLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::YieldTermStructure,
                QuantLib::YieldTermStructure>()(
                    DiscountingCurveCoerce, QuantLib::Handle<QuantLib::YieldTermStructure>());

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlDatedOISRateHelper(
                ObjectId,
                StartDate,
                EndDate,
                FixedRate,
                ONIndex,
                DiscountingCurveCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::DatedOISRateHelper(
                valueObject,
                StartDateLib,
                EndDateLib,
                FixedRateLibObj,
                ONIndexLibObjPtr,
                DiscountingCurveLibObj,
                PermanentCpp));

        // Store the Object in the Repository

        std::string returnValue =
            ObjectHandler::Repository::instance().storeObject(ObjectId, object, Overwrite, valueObject);

        // Convert and return the return value

        return returnValue;

        } catch (const std::exception &e) {
            OH_FAIL("Error in function qlDatedOISRateHelper : " << e.what());
        }
    }


    std::string qlDepositRateHelper(
            const std::string &ObjectId,
            const ObjectHandler::property_t &Rate,
            const std::string &IborIndex,
            const ObjectHandler::property_t &Permanent,
            const ObjectHandler::property_t &Trigger,
            const bool &Overwrite) {

        try {

        // convert input datatypes to C++ datatypes

        bool PermanentCpp = ObjectHandler::convert2<bool>(
            Permanent, "Permanent", false);

        // convert object IDs into library objects

        QuantLib::Handle<QuantLib::Quote> RateLibObj = 
            ObjectHandler::convert2<QuantLib::Handle<QuantLib::Quote> >(
                Rate, "Rate");

        OH_GET_REFERENCE(IborIndexLibObjPtr, IborIndex,
            QuantLibAddin::IborIndex, QuantLib::IborIndex)

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlDepositRateHelper(
                ObjectId,
                Rate,
                IborIndex,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::DepositRateHelper(
                valueObject,
                RateLibObj,
                IborIndexLibObjPtr,
                PermanentCpp));

        // Store the Object in the Repository

        std::string returnValue =
            ObjectHandler::Repository::instance().storeObject(ObjectId, object, Overwrite, valueObject);

        // Convert and return the return value

        return returnValue;

        } catch (const std::exception &e) {
            OH_FAIL("Error in function qlDepositRateHelper : " << e.what());
        }
    }


    std::string qlDepositRateHelper2(
            const std::string &ObjectId,
            const ObjectHandler::property_t &Rate,
            const std::string &Tenor,
            const long &FixingDays,
            const std::string &Calendar,
            const std::string &Convention,
            const bool &EndOfMonth,
            const std::string &DayCounter,
            const ObjectHandler::property_t &Permanent,
            const ObjectHandler::property_t &Trigger,
            const bool &Overwrite) {

        try {

        // convert input datatypes to C++ datatypes

        bool PermanentCpp = ObjectHandler::convert2<bool>(
            Permanent, "Permanent", false);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Period TenorLib;
        QuantLibAddin::cppToLibrary(Tenor, TenorLib);

        QuantLib::Natural FixingDaysLib;
        QuantLibAddin::cppToLibrary(FixingDays, FixingDaysLib);

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::Calendar CalendarEnum =
            ObjectHandler::Create<QuantLib::Calendar>()(Calendar);

        QuantLib::BusinessDayConvention ConventionEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(Convention);

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounter);

        // convert object IDs into library objects

        QuantLib::Handle<QuantLib::Quote> RateLibObj = 
            ObjectHandler::convert2<QuantLib::Handle<QuantLib::Quote> >(
                Rate, "Rate");

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlDepositRateHelper2(
                ObjectId,
                Rate,
                Tenor,
                FixingDays,
                Calendar,
                Convention,
                EndOfMonth,
                DayCounter,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::DepositRateHelper(
                valueObject,
                RateLibObj,
                TenorLib,
                FixingDaysLib,
                CalendarEnum,
                ConventionEnum,
                EndOfMonth,
                DayCounterEnum,
                PermanentCpp));

        // Store the Object in the Repository

        std::string returnValue =
            ObjectHandler::Repository::instance().storeObject(ObjectId, object, Overwrite, valueObject);

        // Convert and return the return value

        return returnValue;

        } catch (const std::exception &e) {
            OH_FAIL("Error in function qlDepositRateHelper2 : " << e.what());
        }
    }


    std::string qlFixedRateBondHelper(
            const std::string &ObjectId,
            const ObjectHandler::property_t &Price,
            const long &SettlementDays,
            const ObjectHandler::property_t &FaceAmount,
            const std::string &ScheduleID,
            const std::vector<double>& Coupons,
            const std::string &DayCounter,
            const ObjectHandler::property_t &PaymentBDC,
            const ObjectHandler::property_t &Redemption,
            const ObjectHandler::property_t &IssueDate,
            const std::string &PaymentCalendar,
            const std::string &ExCouponPeriod,
            const std::string &ExCouponCalendar,
            const std::string &ExCouponBDC,
            const bool &ExCouponEndOfMonth,
            const ObjectHandler::property_t &UseCleanPrice,
            const ObjectHandler::property_t &Permanent,
            const ObjectHandler::property_t &Trigger,
            const bool &Overwrite) {

        try {

        // convert input datatypes to C++ datatypes

        double FaceAmountCpp = ObjectHandler::convert2<double>(
            FaceAmount, "FaceAmount", 100.0);

        std::string PaymentBDCCpp = ObjectHandler::convert2<std::string>(
            PaymentBDC, "PaymentBDC", "Following");

        double RedemptionCpp = ObjectHandler::convert2<double>(
            Redemption, "Redemption", 100.0);

        bool UseCleanPriceCpp = ObjectHandler::convert2<bool>(
            UseCleanPrice, "UseCleanPrice", true);

        bool PermanentCpp = ObjectHandler::convert2<bool>(
            Permanent, "Permanent", false);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Size SettlementDaysLib;
        QuantLibAddin::cppToLibrary(SettlementDays, SettlementDaysLib);

        QuantLib::Date IssueDateLib = ObjectHandler::convert2<QuantLib::Date>(
            IssueDate, "IssueDate", QuantLib::Date());

        QuantLib::Period ExCouponPeriodLib;
        QuantLibAddin::cppToLibrary(ExCouponPeriod, ExCouponPeriodLib);

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounter);

        QuantLib::BusinessDayConvention PaymentBDCEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(PaymentBDCCpp);

        QuantLib::Calendar PaymentCalendarEnum =
            ObjectHandler::Create<QuantLib::Calendar>()(PaymentCalendar);

        QuantLib::Calendar ExCouponCalendarEnum =
            ObjectHandler::Create<QuantLib::Calendar>()(ExCouponCalendar);

        QuantLib::BusinessDayConvention ExCouponBDCEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(ExCouponBDC);

        // convert object IDs into library objects

        QuantLib::Handle<QuantLib::Quote> PriceLibObj = 
            ObjectHandler::convert2<QuantLib::Handle<QuantLib::Quote> >(
                Price, "Price");

        OH_GET_REFERENCE(ScheduleIDLibObjPtr, ScheduleID,
            QuantLibAddin::Schedule, QuantLib::Schedule)

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlFixedRateBondHelper(
                ObjectId,
                Price,
                SettlementDays,
                FaceAmountCpp,
                ScheduleID,
                Coupons,
                DayCounter,
                PaymentBDCCpp,
                RedemptionCpp,
                IssueDate,
                PaymentCalendar,
                ExCouponPeriod,
                ExCouponCalendar,
                ExCouponBDC,
                ExCouponEndOfMonth,
                UseCleanPriceCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::FixedRateBondHelper(
                valueObject,
                PriceLibObj,
                SettlementDaysLib,
                FaceAmountCpp,
                ScheduleIDLibObjPtr,
                Coupons,
                DayCounterEnum,
                PaymentBDCEnum,
                RedemptionCpp,
                IssueDateLib,
                PaymentCalendarEnum,
                ExCouponPeriodLib,
                ExCouponCalendarEnum,
                ExCouponBDCEnum,
                ExCouponEndOfMonth,
                UseCleanPriceCpp,
                PermanentCpp));

        // Store the Object in the Repository

        std::string returnValue =
            ObjectHandler::Repository::instance().storeObject(ObjectId, object, Overwrite, valueObject);

        // Convert and return the return value

        return returnValue;

        } catch (const std::exception &e) {
            OH_FAIL("Error in function qlFixedRateBondHelper : " << e.what());
        }
    }


    std::string qlFraRateHelper(
            const std::string &ObjectId,
            const ObjectHandler::property_t &Rate,
            const std::string &PeriodToStart,
            const std::string &IborIndex,
            const ObjectHandler::property_t &PillarDate,
            const ObjectHandler::property_t &CustomPillarDate,
            const ObjectHandler::property_t &Permanent,
            const ObjectHandler::property_t &Trigger,
            const bool &Overwrite) {

        try {

        // convert input datatypes to C++ datatypes

        std::string PillarDateCpp = ObjectHandler::convert2<std::string>(
            PillarDate, "PillarDate", "MaturityDate");

        bool PermanentCpp = ObjectHandler::convert2<bool>(
            Permanent, "Permanent", false);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Period PeriodToStartLib;
        QuantLibAddin::cppToLibrary(PeriodToStart, PeriodToStartLib);

        QuantLib::Date CustomPillarDateLib = ObjectHandler::convert2<QuantLib::Date>(
            CustomPillarDate, "CustomPillarDate", QuantLib::Date());

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::Pillar::Choice PillarDateEnum =
            ObjectHandler::Create<QuantLib::Pillar::Choice>()(PillarDateCpp);

        // convert object IDs into library objects

        QuantLib::Handle<QuantLib::Quote> RateLibObj = 
            ObjectHandler::convert2<QuantLib::Handle<QuantLib::Quote> >(
                Rate, "Rate");

        OH_GET_REFERENCE(IborIndexLibObjPtr, IborIndex,
            QuantLibAddin::IborIndex, QuantLib::IborIndex)

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlFraRateHelper(
                ObjectId,
                Rate,
                PeriodToStart,
                IborIndex,
                PillarDateCpp,
                CustomPillarDate,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::FraRateHelper(
                valueObject,
                RateLibObj,
                PeriodToStartLib,
                IborIndexLibObjPtr,
                PillarDateEnum,
                CustomPillarDateLib,
                PermanentCpp));

        // Store the Object in the Repository

        std::string returnValue =
            ObjectHandler::Repository::instance().storeObject(ObjectId, object, Overwrite, valueObject);

        // Convert and return the return value

        return returnValue;

        } catch (const std::exception &e) {
            OH_FAIL("Error in function qlFraRateHelper : " << e.what());
        }
    }


    std::string qlFraRateHelper2(
            const std::string &ObjectId,
            const ObjectHandler::property_t &Rate,
            const std::string &PeriodToStart,
            const long &LengthInMonths,
            const long &FixingDays,
            const std::string &Calendar,
            const std::string &Convention,
            const bool &EndOfMonth,
            const std::string &DayCounter,
            const ObjectHandler::property_t &PillarDate,
            const ObjectHandler::property_t &CustomPillarDate,
            const ObjectHandler::property_t &Permanent,
            const ObjectHandler::property_t &Trigger,
            const bool &Overwrite) {

        try {

        // convert input datatypes to C++ datatypes

        std::string PillarDateCpp = ObjectHandler::convert2<std::string>(
            PillarDate, "PillarDate", "MaturityDate");

        bool PermanentCpp = ObjectHandler::convert2<bool>(
            Permanent, "Permanent", false);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Period PeriodToStartLib;
        QuantLibAddin::cppToLibrary(PeriodToStart, PeriodToStartLib);

        QuantLib::Natural LengthInMonthsLib;
        QuantLibAddin::cppToLibrary(LengthInMonths, LengthInMonthsLib);

        QuantLib::Natural FixingDaysLib;
        QuantLibAddin::cppToLibrary(FixingDays, FixingDaysLib);

        QuantLib::Date CustomPillarDateLib = ObjectHandler::convert2<QuantLib::Date>(
            CustomPillarDate, "CustomPillarDate", QuantLib::Date());

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::Calendar CalendarEnum =
            ObjectHandler::Create<QuantLib::Calendar>()(Calendar);

        QuantLib::BusinessDayConvention ConventionEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(Convention);

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounter);

        QuantLib::Pillar::Choice PillarDateEnum =
            ObjectHandler::Create<QuantLib::Pillar::Choice>()(PillarDateCpp);

        // convert object IDs into library objects

        QuantLib::Handle<QuantLib::Quote> RateLibObj = 
            ObjectHandler::convert2<QuantLib::Handle<QuantLib::Quote> >(
                Rate, "Rate");

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlFraRateHelper2(
                ObjectId,
                Rate,
                PeriodToStart,
                LengthInMonths,
                FixingDays,
                Calendar,
                Convention,
                EndOfMonth,
                DayCounter,
                PillarDateCpp,
                CustomPillarDate,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::FraRateHelper(
                valueObject,
                RateLibObj,
                PeriodToStartLib,
                LengthInMonthsLib,
                FixingDaysLib,
                CalendarEnum,
                ConventionEnum,
                EndOfMonth,
                DayCounterEnum,
                PillarDateEnum,
                CustomPillarDateLib,
                PermanentCpp));

        // Store the Object in the Repository

        std::string returnValue =
            ObjectHandler::Repository::instance().storeObject(ObjectId, object, Overwrite, valueObject);

        // Convert and return the return value

        return returnValue;

        } catch (const std::exception &e) {
            OH_FAIL("Error in function qlFraRateHelper2 : " << e.what());
        }
    }


    std::string qlFuturesRateHelper(
            const std::string &ObjectId,
            const ObjectHandler::property_t &Price,
            const ObjectHandler::property_t &FuturesType,
            const ObjectHandler::property_t &FuturesDate,
            const ObjectHandler::property_t &IborIndex,
            const ObjectHandler::property_t &ConvexityAdjQuote,
            const ObjectHandler::property_t &Permanent,
            const ObjectHandler::property_t &Trigger,
            const bool &Overwrite) {

        try {

        // convert input datatypes to C++ datatypes

        std::string FuturesTypeCpp = ObjectHandler::convert2<std::string>(
            FuturesType, "FuturesType", "IMM");

        std::string IborIndexCpp = ObjectHandler::convert2<std::string>(
            IborIndex, "IborIndex", "Euribor3M");

        bool PermanentCpp = ObjectHandler::convert2<bool>(
            Permanent, "Permanent", false);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date FuturesDateLib = ObjectHandler::convert2<QuantLib::Date>(
            FuturesDate, "FuturesDate");

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::Futures::Type FuturesTypeEnum =
            ObjectHandler::Create<QuantLib::Futures::Type>()(FuturesTypeCpp);

        // convert object IDs into library objects

        QuantLib::Handle<QuantLib::Quote> PriceLibObj = 
            ObjectHandler::convert2<QuantLib::Handle<QuantLib::Quote> >(
                Price, "Price");

        OH_GET_REFERENCE_DEFAULT(IborIndexLibObjPtr, IborIndexCpp,
            QuantLibAddin::IborIndex, QuantLib::IborIndex)

        QuantLib::Handle<QuantLib::Quote> ConvexityAdjQuoteLibObj = 
            ObjectHandler::convert2<QuantLib::Handle<QuantLib::Quote> >(
                ConvexityAdjQuote, "ConvexityAdjQuote");

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlFuturesRateHelper(
                ObjectId,
                Price,
                FuturesTypeCpp,
                FuturesDate,
                IborIndexCpp,
                ConvexityAdjQuote,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::FuturesRateHelper(
                valueObject,
                PriceLibObj,
                FuturesTypeEnum,
                FuturesDateLib,
                IborIndexLibObjPtr,
                ConvexityAdjQuoteLibObj,
                PermanentCpp));

        // Store the Object in the Repository

        std::string returnValue =
            ObjectHandler::Repository::instance().storeObject(ObjectId, object, Overwrite, valueObject);

        // Convert and return the return value

        return returnValue;

        } catch (const std::exception &e) {
            OH_FAIL("Error in function qlFuturesRateHelper : " << e.what());
        }
    }


    std::string qlFuturesRateHelper2(
            const std::string &ObjectId,
            const ObjectHandler::property_t &Price,
            const ObjectHandler::property_t &FuturesType,
            const ObjectHandler::property_t &FuturesDate,
            const ObjectHandler::property_t &LengthInMonths,
            const std::string &Calendar,
            const ObjectHandler::property_t &Convention,
            const ObjectHandler::property_t &EndOfMonth,
            const ObjectHandler::property_t &DayCounter,
            const ObjectHandler::property_t &ConvexityAdjQuote,
            const ObjectHandler::property_t &Permanent,
            const ObjectHandler::property_t &Trigger,
            const bool &Overwrite) {

        try {

        // convert input datatypes to C++ datatypes

        std::string FuturesTypeCpp = ObjectHandler::convert2<std::string>(
            FuturesType, "FuturesType", "IMM");

        long LengthInMonthsCpp = ObjectHandler::convert2<long>(
            LengthInMonths, "LengthInMonths", 3);

        std::string ConventionCpp = ObjectHandler::convert2<std::string>(
            Convention, "Convention", "Modified Following");

        bool EndOfMonthCpp = ObjectHandler::convert2<bool>(
            EndOfMonth, "EndOfMonth", true);

        std::string DayCounterCpp = ObjectHandler::convert2<std::string>(
            DayCounter, "DayCounter", "Actual/360");

        bool PermanentCpp = ObjectHandler::convert2<bool>(
            Permanent, "Permanent", false);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date FuturesDateLib = ObjectHandler::convert2<QuantLib::Date>(
            FuturesDate, "FuturesDate");

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::Futures::Type FuturesTypeEnum =
            ObjectHandler::Create<QuantLib::Futures::Type>()(FuturesTypeCpp);

        QuantLib::Calendar CalendarEnum =
            ObjectHandler::Create<QuantLib::Calendar>()(Calendar);

        QuantLib::BusinessDayConvention ConventionEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(ConventionCpp);

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        // convert object IDs into library objects

        QuantLib::Handle<QuantLib::Quote> PriceLibObj = 
            ObjectHandler::convert2<QuantLib::Handle<QuantLib::Quote> >(
                Price, "Price");

        QuantLib::Handle<QuantLib::Quote> ConvexityAdjQuoteLibObj = 
            ObjectHandler::convert2<QuantLib::Handle<QuantLib::Quote> >(
                ConvexityAdjQuote, "ConvexityAdjQuote");

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlFuturesRateHelper2(
                ObjectId,
                Price,
                FuturesTypeCpp,
                FuturesDate,
                LengthInMonthsCpp,
                Calendar,
                ConventionCpp,
                EndOfMonthCpp,
                DayCounterCpp,
                ConvexityAdjQuote,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::FuturesRateHelper(
                valueObject,
                PriceLibObj,
                FuturesTypeEnum,
                FuturesDateLib,
                LengthInMonthsCpp,
                CalendarEnum,
                ConventionEnum,
                EndOfMonthCpp,
                DayCounterEnum,
                ConvexityAdjQuoteLibObj,
                PermanentCpp));

        // Store the Object in the Repository

        std::string returnValue =
            ObjectHandler::Repository::instance().storeObject(ObjectId, object, Overwrite, valueObject);

        // Convert and return the return value

        return returnValue;

        } catch (const std::exception &e) {
            OH_FAIL("Error in function qlFuturesRateHelper2 : " << e.what());
        }
    }


    std::string qlFuturesRateHelper3(
            const std::string &ObjectId,
            const ObjectHandler::property_t &Price,
            const ObjectHandler::property_t &FuturesType,
            const ObjectHandler::property_t &FuturesDate,
            const ObjectHandler::property_t &EndDate,
            const ObjectHandler::property_t &DayCounter,
            const ObjectHandler::property_t &ConvexityAdjQuote,
            const ObjectHandler::property_t &Permanent,
            const ObjectHandler::property_t &Trigger,
            const bool &Overwrite) {

        try {

        // convert input datatypes to C++ datatypes

        std::string FuturesTypeCpp = ObjectHandler::convert2<std::string>(
            FuturesType, "FuturesType", "IMM");

        std::string DayCounterCpp = ObjectHandler::convert2<std::string>(
            DayCounter, "DayCounter", "Actual/360");

        bool PermanentCpp = ObjectHandler::convert2<bool>(
            Permanent, "Permanent", false);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date FuturesDateLib = ObjectHandler::convert2<QuantLib::Date>(
            FuturesDate, "FuturesDate");

        QuantLib::Date EndDateLib = ObjectHandler::convert2<QuantLib::Date>(
            EndDate, "EndDate", QuantLib::Date());

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::Futures::Type FuturesTypeEnum =
            ObjectHandler::Create<QuantLib::Futures::Type>()(FuturesTypeCpp);

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        // convert object IDs into library objects

        QuantLib::Handle<QuantLib::Quote> PriceLibObj = 
            ObjectHandler::convert2<QuantLib::Handle<QuantLib::Quote> >(
                Price, "Price");

        QuantLib::Handle<QuantLib::Quote> ConvexityAdjQuoteLibObj = 
            ObjectHandler::convert2<QuantLib::Handle<QuantLib::Quote> >(
                ConvexityAdjQuote, "ConvexityAdjQuote");

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlFuturesRateHelper3(
                ObjectId,
                Price,
                FuturesTypeCpp,
                FuturesDate,
                EndDate,
                DayCounterCpp,
                ConvexityAdjQuote,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::FuturesRateHelper(
                valueObject,
                PriceLibObj,
                FuturesTypeEnum,
                FuturesDateLib,
                EndDateLib,
                DayCounterEnum,
                ConvexityAdjQuoteLibObj,
                PermanentCpp));

        // Store the Object in the Repository

        std::string returnValue =
            ObjectHandler::Repository::instance().storeObject(ObjectId, object, Overwrite, valueObject);

        // Convert and return the return value

        return returnValue;

        } catch (const std::exception &e) {
            OH_FAIL("Error in function qlFuturesRateHelper3 : " << e.what());
        }
    }


    std::string qlFxSwapRateHelper(
            const std::string &ObjectId,
            const ObjectHandler::property_t &FwdPoint,
            const ObjectHandler::property_t &SpotFx,
            const std::string &Tenor,
            const long &FixingDays,
            const std::string &Calendar,
            const std::string &Convention,
            const bool &EndOfMonth,
            const bool &IsFxBaseCurrencyCollateralCurrency,
            const std::string &CollateralCurve,
            const ObjectHandler::property_t &Permanent,
            const ObjectHandler::property_t &Trigger,
            const bool &Overwrite) {

        try {

        // convert input datatypes to C++ datatypes

        bool PermanentCpp = ObjectHandler::convert2<bool>(
            Permanent, "Permanent", false);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Period TenorLib;
        QuantLibAddin::cppToLibrary(Tenor, TenorLib);

        QuantLib::Natural FixingDaysLib;
        QuantLibAddin::cppToLibrary(FixingDays, FixingDaysLib);

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::Calendar CalendarEnum =
            ObjectHandler::Create<QuantLib::Calendar>()(Calendar);

        QuantLib::BusinessDayConvention ConventionEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(Convention);

        // convert object IDs into library objects

        QuantLib::Handle<QuantLib::Quote> FwdPointLibObj = 
            ObjectHandler::convert2<QuantLib::Handle<QuantLib::Quote> >(
                FwdPoint, "FwdPoint");

        QuantLib::Handle<QuantLib::Quote> SpotFxLibObj = 
            ObjectHandler::convert2<QuantLib::Handle<QuantLib::Quote> >(
                SpotFx, "SpotFx");

        OH_GET_OBJECT(CollateralCurveCoerce, CollateralCurve, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::YieldTermStructure> CollateralCurveLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::YieldTermStructure,
                QuantLib::YieldTermStructure>()(
                    CollateralCurveCoerce);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlFxSwapRateHelper(
                ObjectId,
                FwdPoint,
                SpotFx,
                Tenor,
                FixingDays,
                Calendar,
                Convention,
                EndOfMonth,
                IsFxBaseCurrencyCollateralCurrency,
                CollateralCurve,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::FxSwapRateHelper(
                valueObject,
                FwdPointLibObj,
                SpotFxLibObj,
                TenorLib,
                FixingDaysLib,
                CalendarEnum,
                ConventionEnum,
                EndOfMonth,
                IsFxBaseCurrencyCollateralCurrency,
                CollateralCurveLibObj,
                PermanentCpp));

        // Store the Object in the Repository

        std::string returnValue =
            ObjectHandler::Repository::instance().storeObject(ObjectId, object, Overwrite, valueObject);

        // Convert and return the return value

        return returnValue;

        } catch (const std::exception &e) {
            OH_FAIL("Error in function qlFxSwapRateHelper : " << e.what());
        }
    }


    std::string qlOISRateHelper(
            const std::string &ObjectId,
            const long &SettlDays,
            const std::string &Tenor,
            const ObjectHandler::property_t &FixedRate,
            const std::string &ONIndex,
            const ObjectHandler::property_t &DiscountingCurve,
            const ObjectHandler::property_t &Permanent,
            const ObjectHandler::property_t &Trigger,
            const bool &Overwrite) {

        try {

        // convert input datatypes to C++ datatypes

        std::string DiscountingCurveCpp = ObjectHandler::convert2<std::string>(
            DiscountingCurve, "DiscountingCurve", "");

        bool PermanentCpp = ObjectHandler::convert2<bool>(
            Permanent, "Permanent", false);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Natural SettlDaysLib;
        QuantLibAddin::cppToLibrary(SettlDays, SettlDaysLib);

        QuantLib::Period TenorLib;
        QuantLibAddin::cppToLibrary(Tenor, TenorLib);

        // convert object IDs into library objects

        QuantLib::Handle<QuantLib::Quote> FixedRateLibObj = 
            ObjectHandler::convert2<QuantLib::Handle<QuantLib::Quote> >(
                FixedRate, "FixedRate");

        OH_GET_REFERENCE(ONIndexLibObjPtr, ONIndex,
            QuantLibAddin::OvernightIndex, QuantLib::OvernightIndex)

        OH_GET_OBJECT_DEFAULT(DiscountingCurveCoerce, DiscountingCurveCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::YieldTermStructure> DiscountingCurveLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::YieldTermStructure,
                QuantLib::YieldTermStructure>()(
                    DiscountingCurveCoerce, QuantLib::Handle<QuantLib::YieldTermStructure>());

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlOISRateHelper(
                ObjectId,
                SettlDays,
                Tenor,
                FixedRate,
                ONIndex,
                DiscountingCurveCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::OISRateHelper(
                valueObject,
                SettlDaysLib,
                TenorLib,
                FixedRateLibObj,
                ONIndexLibObjPtr,
                DiscountingCurveLibObj,
                PermanentCpp));

        // Store the Object in the Repository

        std::string returnValue =
            ObjectHandler::Repository::instance().storeObject(ObjectId, object, Overwrite, valueObject);

        // Convert and return the return value

        return returnValue;

        } catch (const std::exception &e) {
            OH_FAIL("Error in function qlOISRateHelper : " << e.what());
        }
    }


    double qlRateHelperImpliedQuote(
            const std::string &ObjectId,
            const ObjectHandler::property_t &Trigger) {

        try {

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectId,
            QuantLibAddin::RateHelper, QuantLib::RateHelper)

        // invoke the member function

        double returnValue = ObjectIdLibObjPtr->impliedQuote();

        // convert and return the return value

        return returnValue;

        } catch (const std::exception &e) {
            OH_FAIL("Error in function qlRateHelperImpliedQuote : " << e.what());
        }
    }


    double qlRateHelperQuoteError(
            const std::string &ObjectId,
            const ObjectHandler::property_t &Trigger) {

        try {

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectId,
            QuantLibAddin::RateHelper, QuantLib::RateHelper)

        // invoke the member function

        double returnValue = ObjectIdLibObjPtr->quoteError();

        // convert and return the return value

        return returnValue;

        } catch (const std::exception &e) {
            OH_FAIL("Error in function qlRateHelperQuoteError : " << e.what());
        }
    }


    double qlRateHelperQuoteIsValid(
            const std::string &ObjectId,
            const ObjectHandler::property_t &Trigger) {

        try {

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectId,
            QuantLibAddin::RateHelper, QuantLib::RateHelper)

        // invoke the member function

        double returnValue = ObjectIdLibObjPtr->quote()->isValid();

        // convert and return the return value

        return returnValue;

        } catch (const std::exception &e) {
            OH_FAIL("Error in function qlRateHelperQuoteIsValid : " << e.what());
        }
    }


    std::string qlRateHelperQuoteName(
            const std::string &ObjectId,
            const ObjectHandler::property_t &Trigger) {

        try {

        // convert input datatypes to Object references

        OH_GET_OBJECT(ObjectIdObjPtr, ObjectId, QuantLibAddin::RateHelper)

        // invoke the member function

        std::string returnValue = ObjectIdObjPtr->quoteName();

        // convert and return the return value

        return returnValue;

        } catch (const std::exception &e) {
            OH_FAIL("Error in function qlRateHelperQuoteName : " << e.what());
        }
    }


    double qlRateHelperQuoteValue(
            const std::string &ObjectId,
            const ObjectHandler::property_t &Trigger) {

        try {

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectId,
            QuantLibAddin::RateHelper, QuantLib::RateHelper)

        // invoke the member function

        double returnValue = ObjectIdLibObjPtr->quote()->value();

        // convert and return the return value

        return returnValue;

        } catch (const std::exception &e) {
            OH_FAIL("Error in function qlRateHelperQuoteValue : " << e.what());
        }
    }


    std::string qlSwapRateHelper(
            const std::string &ObjectId,
            const ObjectHandler::property_t &Rate,
            const std::string &SwapIndex,
            const ObjectHandler::property_t &Spread,
            const std::string &ForwardStart,
            const ObjectHandler::property_t &DiscountingCurve,
            const ObjectHandler::property_t &PillarDate,
            const ObjectHandler::property_t &CustomPillarDate,
            const ObjectHandler::property_t &Permanent,
            const ObjectHandler::property_t &Trigger,
            const bool &Overwrite) {

        try {

        // convert input datatypes to C++ datatypes

        std::string DiscountingCurveCpp = ObjectHandler::convert2<std::string>(
            DiscountingCurve, "DiscountingCurve", "");

        std::string PillarDateCpp = ObjectHandler::convert2<std::string>(
            PillarDate, "PillarDate", "MaturityDate");

        bool PermanentCpp = ObjectHandler::convert2<bool>(
            Permanent, "Permanent", false);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Period ForwardStartLib;
        QuantLibAddin::cppToLibrary(ForwardStart, ForwardStartLib);

        QuantLib::Date CustomPillarDateLib = ObjectHandler::convert2<QuantLib::Date>(
            CustomPillarDate, "CustomPillarDate", QuantLib::Date());

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::Pillar::Choice PillarDateEnum =
            ObjectHandler::Create<QuantLib::Pillar::Choice>()(PillarDateCpp);

        // convert object IDs into library objects

        QuantLib::Handle<QuantLib::Quote> RateLibObj = 
            ObjectHandler::convert2<QuantLib::Handle<QuantLib::Quote> >(
                Rate, "Rate");

        OH_GET_REFERENCE(SwapIndexLibObjPtr, SwapIndex,
            QuantLibAddin::SwapIndex, QuantLib::SwapIndex)

        QuantLib::Handle<QuantLib::Quote> SpreadLibObj = 
            ObjectHandler::convert2<QuantLib::Handle<QuantLib::Quote> >(
                Spread, "Spread");

        OH_GET_OBJECT_DEFAULT(DiscountingCurveCoerce, DiscountingCurveCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::YieldTermStructure> DiscountingCurveLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::YieldTermStructure,
                QuantLib::YieldTermStructure>()(
                    DiscountingCurveCoerce, QuantLib::Handle<QuantLib::YieldTermStructure>());

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlSwapRateHelper(
                ObjectId,
                Rate,
                SwapIndex,
                Spread,
                ForwardStart,
                DiscountingCurveCpp,
                PillarDateCpp,
                CustomPillarDate,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::SwapRateHelper(
                valueObject,
                RateLibObj,
                SwapIndexLibObjPtr,
                SpreadLibObj,
                ForwardStartLib,
                DiscountingCurveLibObj,
                PillarDateEnum,
                CustomPillarDateLib,
                PermanentCpp));

        // Store the Object in the Repository

        std::string returnValue =
            ObjectHandler::Repository::instance().storeObject(ObjectId, object, Overwrite, valueObject);

        // Convert and return the return value

        return returnValue;

        } catch (const std::exception &e) {
            OH_FAIL("Error in function qlSwapRateHelper : " << e.what());
        }
    }


    std::string qlSwapRateHelper2(
            const std::string &ObjectId,
            const ObjectHandler::property_t &Rate,
            const ObjectHandler::property_t &SettlDays,
            const std::string &Tenor,
            const std::string &Calendar,
            const std::string &FixedLegFrequency,
            const std::string &FixedLegConvention,
            const std::string &FixedLegDayCounter,
            const std::string &IborIndex,
            const ObjectHandler::property_t &Spread,
            const std::string &ForwardStart,
            const ObjectHandler::property_t &DiscountingCurve,
            const ObjectHandler::property_t &PillarDate,
            const ObjectHandler::property_t &CustomPillarDate,
            const ObjectHandler::property_t &Permanent,
            const ObjectHandler::property_t &Trigger,
            const bool &Overwrite) {

        try {

        // convert input datatypes to C++ datatypes

        long SettlDaysCpp = ObjectHandler::convert2<long>(
            SettlDays, "SettlDays", 2);

        std::string DiscountingCurveCpp = ObjectHandler::convert2<std::string>(
            DiscountingCurve, "DiscountingCurve", "");

        std::string PillarDateCpp = ObjectHandler::convert2<std::string>(
            PillarDate, "PillarDate", "MaturityDate");

        bool PermanentCpp = ObjectHandler::convert2<bool>(
            Permanent, "Permanent", false);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Natural SettlDaysLib = ObjectHandler::convert2<long>(
            SettlDays, "SettlDays", 2);

        QuantLib::Period TenorLib;
        QuantLibAddin::cppToLibrary(Tenor, TenorLib);

        QuantLib::Period ForwardStartLib;
        QuantLibAddin::cppToLibrary(ForwardStart, ForwardStartLib);

        QuantLib::Date CustomPillarDateLib = ObjectHandler::convert2<QuantLib::Date>(
            CustomPillarDate, "CustomPillarDate", QuantLib::Date());

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::Calendar CalendarEnum =
            ObjectHandler::Create<QuantLib::Calendar>()(Calendar);

        QuantLib::Frequency FixedLegFrequencyEnum =
            ObjectHandler::Create<QuantLib::Frequency>()(FixedLegFrequency);

        QuantLib::BusinessDayConvention FixedLegConventionEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(FixedLegConvention);

        QuantLib::DayCounter FixedLegDayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(FixedLegDayCounter);

        QuantLib::Pillar::Choice PillarDateEnum =
            ObjectHandler::Create<QuantLib::Pillar::Choice>()(PillarDateCpp);

        // convert object IDs into library objects

        QuantLib::Handle<QuantLib::Quote> RateLibObj = 
            ObjectHandler::convert2<QuantLib::Handle<QuantLib::Quote> >(
                Rate, "Rate");

        OH_GET_REFERENCE(IborIndexLibObjPtr, IborIndex,
            QuantLibAddin::IborIndex, QuantLib::IborIndex)

        QuantLib::Handle<QuantLib::Quote> SpreadLibObj = 
            ObjectHandler::convert2<QuantLib::Handle<QuantLib::Quote> >(
                Spread, "Spread");

        OH_GET_OBJECT_DEFAULT(DiscountingCurveCoerce, DiscountingCurveCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::YieldTermStructure> DiscountingCurveLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::YieldTermStructure,
                QuantLib::YieldTermStructure>()(
                    DiscountingCurveCoerce, QuantLib::Handle<QuantLib::YieldTermStructure>());

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlSwapRateHelper2(
                ObjectId,
                Rate,
                SettlDaysCpp,
                Tenor,
                Calendar,
                FixedLegFrequency,
                FixedLegConvention,
                FixedLegDayCounter,
                IborIndex,
                Spread,
                ForwardStart,
                DiscountingCurveCpp,
                PillarDateCpp,
                CustomPillarDate,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::SwapRateHelper(
                valueObject,
                RateLibObj,
                SettlDaysLib,
                TenorLib,
                CalendarEnum,
                FixedLegFrequencyEnum,
                FixedLegConventionEnum,
                FixedLegDayCounterEnum,
                IborIndexLibObjPtr,
                SpreadLibObj,
                ForwardStartLib,
                DiscountingCurveLibObj,
                PillarDateEnum,
                CustomPillarDateLib,
                PermanentCpp));

        // Store the Object in the Repository

        std::string returnValue =
            ObjectHandler::Repository::instance().storeObject(ObjectId, object, Overwrite, valueObject);

        // Convert and return the return value

        return returnValue;

        } catch (const std::exception &e) {
            OH_FAIL("Error in function qlSwapRateHelper2 : " << e.what());
        }
    }

}

