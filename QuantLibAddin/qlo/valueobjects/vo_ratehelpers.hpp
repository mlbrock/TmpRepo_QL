
/*  
 Copyright (C) 2005, 2006 Plamen Neykov
 Copyright (C) 2007 Eric Ehlers
 
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
//      gensrc/gensrc/stubs/stub.vo.includes.decl

#ifndef qlo_vo_ratehelpers_hpp
#define qlo_vo_ratehelpers_hpp

#include <oh/valueobject.hpp>
#include <string>
#include <vector>
#include <set>
#include <boost/serialization/map.hpp>
#include <boost/algorithm/string/case_conv.hpp>

namespace QuantLibAddin { namespace ValueObjects {

    class qlBondHelper : public ObjectHandler::ValueObject {
        friend class boost::serialization::access;
    public:
        qlBondHelper() {}
        qlBondHelper(
            const std::string& ObjectId,
            const ObjectHandler::property_t& Price,
            const std::string& Bond,
            bool UseCleanPrice,
            bool Permanent);

        const std::set<std::string>& getSystemPropertyNames() const;
        std::vector<std::string> getPropertyNamesVector() const;
        ObjectHandler::property_t getSystemProperty(const std::string&) const;
        void setSystemProperty(const std::string& name, const ObjectHandler::property_t& value);

    protected:
        static const char* mPropertyNames[];
        static std::set<std::string> mSystemPropertyNames;

        ObjectHandler::property_t Price_;
        std::string Bond_;
        bool UseCleanPrice_;
        bool Permanent_;


        template<class Archive>
        void serialize(Archive& ar, const unsigned int) {
        boost::serialization::void_cast_register<qlBondHelper, ObjectHandler::ValueObject>(this, this);
            ar  & boost::serialization::make_nvp("ObjectId", objectId_)
                & boost::serialization::make_nvp("ClassName", className_)
                & boost::serialization::make_nvp("Price", Price_)
                & boost::serialization::make_nvp("Bond", Bond_)
                & boost::serialization::make_nvp("UseCleanPrice", UseCleanPrice_)
                & boost::serialization::make_nvp("Permanent", Permanent_)
                & boost::serialization::make_nvp("UserProperties", userProperties);
        }
    };

    class qlDatedOISRateHelper : public ObjectHandler::ValueObject {
        friend class boost::serialization::access;
    public:
        qlDatedOISRateHelper() {}
        qlDatedOISRateHelper(
            const std::string& ObjectId,
            const ObjectHandler::property_t& StartDate,
            const ObjectHandler::property_t& EndDate,
            const ObjectHandler::property_t& FixedRate,
            const std::string& ONIndex,
            const std::string& DiscountingCurve,
            bool Permanent);

        const std::set<std::string>& getSystemPropertyNames() const;
        std::vector<std::string> getPropertyNamesVector() const;
        ObjectHandler::property_t getSystemProperty(const std::string&) const;
        void setSystemProperty(const std::string& name, const ObjectHandler::property_t& value);

    protected:
        static const char* mPropertyNames[];
        static std::set<std::string> mSystemPropertyNames;

        ObjectHandler::property_t StartDate_;
        ObjectHandler::property_t EndDate_;
        ObjectHandler::property_t FixedRate_;
        std::string ONIndex_;
        std::string DiscountingCurve_;
        bool Permanent_;


        template<class Archive>
        void serialize(Archive& ar, const unsigned int) {
        boost::serialization::void_cast_register<qlDatedOISRateHelper, ObjectHandler::ValueObject>(this, this);
            ar  & boost::serialization::make_nvp("ObjectId", objectId_)
                & boost::serialization::make_nvp("ClassName", className_)
                & boost::serialization::make_nvp("StartDate", StartDate_)
                & boost::serialization::make_nvp("EndDate", EndDate_)
                & boost::serialization::make_nvp("FixedRate", FixedRate_)
                & boost::serialization::make_nvp("ONIndex", ONIndex_)
                & boost::serialization::make_nvp("DiscountingCurve", DiscountingCurve_)
                & boost::serialization::make_nvp("Permanent", Permanent_)
                & boost::serialization::make_nvp("UserProperties", userProperties);
        }
    };

    class qlDepositRateHelper : public ObjectHandler::ValueObject {
        friend class boost::serialization::access;
    public:
        qlDepositRateHelper() {}
        qlDepositRateHelper(
            const std::string& ObjectId,
            const ObjectHandler::property_t& Rate,
            const std::string& IborIndex,
            bool Permanent);

        const std::set<std::string>& getSystemPropertyNames() const;
        std::vector<std::string> getPropertyNamesVector() const;
        ObjectHandler::property_t getSystemProperty(const std::string&) const;
        void setSystemProperty(const std::string& name, const ObjectHandler::property_t& value);

    protected:
        static const char* mPropertyNames[];
        static std::set<std::string> mSystemPropertyNames;

        ObjectHandler::property_t Rate_;
        std::string IborIndex_;
        bool Permanent_;


        template<class Archive>
        void serialize(Archive& ar, const unsigned int) {
        boost::serialization::void_cast_register<qlDepositRateHelper, ObjectHandler::ValueObject>(this, this);
            ar  & boost::serialization::make_nvp("ObjectId", objectId_)
                & boost::serialization::make_nvp("ClassName", className_)
                & boost::serialization::make_nvp("Rate", Rate_)
                & boost::serialization::make_nvp("IborIndex", IborIndex_)
                & boost::serialization::make_nvp("Permanent", Permanent_)
                & boost::serialization::make_nvp("UserProperties", userProperties);
        }
    };

    class qlDepositRateHelper2 : public ObjectHandler::ValueObject {
        friend class boost::serialization::access;
    public:
        qlDepositRateHelper2() {}
        qlDepositRateHelper2(
            const std::string& ObjectId,
            const ObjectHandler::property_t& Rate,
            const std::string& Tenor,
            long FixingDays,
            const std::string& Calendar,
            const std::string& Convention,
            bool EndOfMonth,
            const std::string& DayCounter,
            bool Permanent);

        const std::set<std::string>& getSystemPropertyNames() const;
        std::vector<std::string> getPropertyNamesVector() const;
        ObjectHandler::property_t getSystemProperty(const std::string&) const;
        void setSystemProperty(const std::string& name, const ObjectHandler::property_t& value);

    protected:
        static const char* mPropertyNames[];
        static std::set<std::string> mSystemPropertyNames;

        ObjectHandler::property_t Rate_;
        std::string Tenor_;
        long FixingDays_;
        std::string Calendar_;
        std::string Convention_;
        bool EndOfMonth_;
        std::string DayCounter_;
        bool Permanent_;


        template<class Archive>
        void serialize(Archive& ar, const unsigned int) {
        boost::serialization::void_cast_register<qlDepositRateHelper2, ObjectHandler::ValueObject>(this, this);
            ar  & boost::serialization::make_nvp("ObjectId", objectId_)
                & boost::serialization::make_nvp("ClassName", className_)
                & boost::serialization::make_nvp("Rate", Rate_)
                & boost::serialization::make_nvp("Tenor", Tenor_)
                & boost::serialization::make_nvp("FixingDays", FixingDays_)
                & boost::serialization::make_nvp("Calendar", Calendar_)
                & boost::serialization::make_nvp("Convention", Convention_)
                & boost::serialization::make_nvp("EndOfMonth", EndOfMonth_)
                & boost::serialization::make_nvp("DayCounter", DayCounter_)
                & boost::serialization::make_nvp("Permanent", Permanent_)
                & boost::serialization::make_nvp("UserProperties", userProperties);
        }
    };

    class qlFixedRateBondHelper : public ObjectHandler::ValueObject {
        friend class boost::serialization::access;
    public:
        qlFixedRateBondHelper() {}
        qlFixedRateBondHelper(
            const std::string& ObjectId,
            const ObjectHandler::property_t& Price,
            long SettlementDays,
            double FaceAmount,
            const std::string& ScheduleID,
            const std::vector<double>& Coupons,
            const std::string& DayCounter,
            const std::string& PaymentBDC,
            double Redemption,
            const ObjectHandler::property_t& IssueDate,
            const std::string& PaymentCalendar,
            const std::string& ExCouponPeriod,
            const std::string& ExCouponCalendar,
            const std::string& ExCouponBDC,
            bool ExCouponEndOfMonth,
            bool UseCleanPrice,
            bool Permanent);

        const std::set<std::string>& getSystemPropertyNames() const;
        std::vector<std::string> getPropertyNamesVector() const;
        ObjectHandler::property_t getSystemProperty(const std::string&) const;
        void setSystemProperty(const std::string& name, const ObjectHandler::property_t& value);

    protected:
        static const char* mPropertyNames[];
        static std::set<std::string> mSystemPropertyNames;

        ObjectHandler::property_t Price_;
        long SettlementDays_;
        double FaceAmount_;
        std::string ScheduleID_;
        std::vector<double> Coupons_;
        std::string DayCounter_;
        std::string PaymentBDC_;
        double Redemption_;
        ObjectHandler::property_t IssueDate_;
        std::string PaymentCalendar_;
        std::string ExCouponPeriod_;
        std::string ExCouponCalendar_;
        std::string ExCouponBDC_;
        bool ExCouponEndOfMonth_;
        bool UseCleanPrice_;
        bool Permanent_;


        template<class Archive>
        void serialize(Archive& ar, const unsigned int) {
        boost::serialization::void_cast_register<qlFixedRateBondHelper, ObjectHandler::ValueObject>(this, this);
            ar  & boost::serialization::make_nvp("ObjectId", objectId_)
                & boost::serialization::make_nvp("ClassName", className_)
                & boost::serialization::make_nvp("Price", Price_)
                & boost::serialization::make_nvp("SettlementDays", SettlementDays_)
                & boost::serialization::make_nvp("FaceAmount", FaceAmount_)
                & boost::serialization::make_nvp("ScheduleID", ScheduleID_)
                & boost::serialization::make_nvp("Coupons", Coupons_)
                & boost::serialization::make_nvp("DayCounter", DayCounter_)
                & boost::serialization::make_nvp("PaymentBDC", PaymentBDC_)
                & boost::serialization::make_nvp("Redemption", Redemption_)
                & boost::serialization::make_nvp("IssueDate", IssueDate_)
                & boost::serialization::make_nvp("PaymentCalendar", PaymentCalendar_)
                & boost::serialization::make_nvp("ExCouponPeriod", ExCouponPeriod_)
                & boost::serialization::make_nvp("ExCouponCalendar", ExCouponCalendar_)
                & boost::serialization::make_nvp("ExCouponBDC", ExCouponBDC_)
                & boost::serialization::make_nvp("ExCouponEndOfMonth", ExCouponEndOfMonth_)
                & boost::serialization::make_nvp("UseCleanPrice", UseCleanPrice_)
                & boost::serialization::make_nvp("Permanent", Permanent_)
                & boost::serialization::make_nvp("UserProperties", userProperties);
        }
    };

    class qlFraRateHelper : public ObjectHandler::ValueObject {
        friend class boost::serialization::access;
    public:
        qlFraRateHelper() {}
        qlFraRateHelper(
            const std::string& ObjectId,
            const ObjectHandler::property_t& Rate,
            const std::string& PeriodToStart,
            const std::string& IborIndex,
            const std::string& PillarDate,
            const ObjectHandler::property_t& CustomPillarDate,
            bool Permanent);

        const std::set<std::string>& getSystemPropertyNames() const;
        std::vector<std::string> getPropertyNamesVector() const;
        ObjectHandler::property_t getSystemProperty(const std::string&) const;
        void setSystemProperty(const std::string& name, const ObjectHandler::property_t& value);

    protected:
        static const char* mPropertyNames[];
        static std::set<std::string> mSystemPropertyNames;

        ObjectHandler::property_t Rate_;
        std::string PeriodToStart_;
        std::string IborIndex_;
        std::string PillarDate_;
        ObjectHandler::property_t CustomPillarDate_;
        bool Permanent_;


        template<class Archive>
        void serialize(Archive& ar, const unsigned int) {
        boost::serialization::void_cast_register<qlFraRateHelper, ObjectHandler::ValueObject>(this, this);
            ar  & boost::serialization::make_nvp("ObjectId", objectId_)
                & boost::serialization::make_nvp("ClassName", className_)
                & boost::serialization::make_nvp("Rate", Rate_)
                & boost::serialization::make_nvp("PeriodToStart", PeriodToStart_)
                & boost::serialization::make_nvp("IborIndex", IborIndex_)
                & boost::serialization::make_nvp("PillarDate", PillarDate_)
                & boost::serialization::make_nvp("CustomPillarDate", CustomPillarDate_)
                & boost::serialization::make_nvp("Permanent", Permanent_)
                & boost::serialization::make_nvp("UserProperties", userProperties);
        }
    };

    class qlFraRateHelper2 : public ObjectHandler::ValueObject {
        friend class boost::serialization::access;
    public:
        qlFraRateHelper2() {}
        qlFraRateHelper2(
            const std::string& ObjectId,
            const ObjectHandler::property_t& Rate,
            const std::string& PeriodToStart,
            long LengthInMonths,
            long FixingDays,
            const std::string& Calendar,
            const std::string& Convention,
            bool EndOfMonth,
            const std::string& DayCounter,
            const std::string& PillarDate,
            const ObjectHandler::property_t& CustomPillarDate,
            bool Permanent);

        const std::set<std::string>& getSystemPropertyNames() const;
        std::vector<std::string> getPropertyNamesVector() const;
        ObjectHandler::property_t getSystemProperty(const std::string&) const;
        void setSystemProperty(const std::string& name, const ObjectHandler::property_t& value);

    protected:
        static const char* mPropertyNames[];
        static std::set<std::string> mSystemPropertyNames;

        ObjectHandler::property_t Rate_;
        std::string PeriodToStart_;
        long LengthInMonths_;
        long FixingDays_;
        std::string Calendar_;
        std::string Convention_;
        bool EndOfMonth_;
        std::string DayCounter_;
        std::string PillarDate_;
        ObjectHandler::property_t CustomPillarDate_;
        bool Permanent_;


        template<class Archive>
        void serialize(Archive& ar, const unsigned int) {
        boost::serialization::void_cast_register<qlFraRateHelper2, ObjectHandler::ValueObject>(this, this);
            ar  & boost::serialization::make_nvp("ObjectId", objectId_)
                & boost::serialization::make_nvp("ClassName", className_)
                & boost::serialization::make_nvp("Rate", Rate_)
                & boost::serialization::make_nvp("PeriodToStart", PeriodToStart_)
                & boost::serialization::make_nvp("LengthInMonths", LengthInMonths_)
                & boost::serialization::make_nvp("FixingDays", FixingDays_)
                & boost::serialization::make_nvp("Calendar", Calendar_)
                & boost::serialization::make_nvp("Convention", Convention_)
                & boost::serialization::make_nvp("EndOfMonth", EndOfMonth_)
                & boost::serialization::make_nvp("DayCounter", DayCounter_)
                & boost::serialization::make_nvp("PillarDate", PillarDate_)
                & boost::serialization::make_nvp("CustomPillarDate", CustomPillarDate_)
                & boost::serialization::make_nvp("Permanent", Permanent_)
                & boost::serialization::make_nvp("UserProperties", userProperties);
        }
    };

    class qlFuturesRateHelper : public ObjectHandler::ValueObject {
        friend class boost::serialization::access;
    public:
        qlFuturesRateHelper() {}
        qlFuturesRateHelper(
            const std::string& ObjectId,
            const ObjectHandler::property_t& Price,
            const std::string& FuturesType,
            const ObjectHandler::property_t& FuturesDate,
            const std::string& IborIndex,
            const ObjectHandler::property_t& ConvexityAdjQuote,
            bool Permanent);

        const std::set<std::string>& getSystemPropertyNames() const;
        std::vector<std::string> getPropertyNamesVector() const;
        ObjectHandler::property_t getSystemProperty(const std::string&) const;
        void setSystemProperty(const std::string& name, const ObjectHandler::property_t& value);

    protected:
        static const char* mPropertyNames[];
        static std::set<std::string> mSystemPropertyNames;

        ObjectHandler::property_t Price_;
        std::string FuturesType_;
        ObjectHandler::property_t FuturesDate_;
        std::string IborIndex_;
        ObjectHandler::property_t ConvexityAdjQuote_;
        bool Permanent_;


        template<class Archive>
        void serialize(Archive& ar, const unsigned int) {
        boost::serialization::void_cast_register<qlFuturesRateHelper, ObjectHandler::ValueObject>(this, this);
            ar  & boost::serialization::make_nvp("ObjectId", objectId_)
                & boost::serialization::make_nvp("ClassName", className_)
                & boost::serialization::make_nvp("Price", Price_)
                & boost::serialization::make_nvp("FuturesType", FuturesType_)
                & boost::serialization::make_nvp("FuturesDate", FuturesDate_)
                & boost::serialization::make_nvp("IborIndex", IborIndex_)
                & boost::serialization::make_nvp("ConvexityAdjQuote", ConvexityAdjQuote_)
                & boost::serialization::make_nvp("Permanent", Permanent_)
                & boost::serialization::make_nvp("UserProperties", userProperties);
        }
    };

    class qlFuturesRateHelper2 : public ObjectHandler::ValueObject {
        friend class boost::serialization::access;
    public:
        qlFuturesRateHelper2() {}
        qlFuturesRateHelper2(
            const std::string& ObjectId,
            const ObjectHandler::property_t& Price,
            const std::string& FuturesType,
            const ObjectHandler::property_t& FuturesDate,
            long LengthInMonths,
            const std::string& Calendar,
            const std::string& Convention,
            bool EndOfMonth,
            const std::string& DayCounter,
            const ObjectHandler::property_t& ConvexityAdjQuote,
            bool Permanent);

        const std::set<std::string>& getSystemPropertyNames() const;
        std::vector<std::string> getPropertyNamesVector() const;
        ObjectHandler::property_t getSystemProperty(const std::string&) const;
        void setSystemProperty(const std::string& name, const ObjectHandler::property_t& value);

    protected:
        static const char* mPropertyNames[];
        static std::set<std::string> mSystemPropertyNames;

        ObjectHandler::property_t Price_;
        std::string FuturesType_;
        ObjectHandler::property_t FuturesDate_;
        long LengthInMonths_;
        std::string Calendar_;
        std::string Convention_;
        bool EndOfMonth_;
        std::string DayCounter_;
        ObjectHandler::property_t ConvexityAdjQuote_;
        bool Permanent_;


        template<class Archive>
        void serialize(Archive& ar, const unsigned int) {
        boost::serialization::void_cast_register<qlFuturesRateHelper2, ObjectHandler::ValueObject>(this, this);
            ar  & boost::serialization::make_nvp("ObjectId", objectId_)
                & boost::serialization::make_nvp("ClassName", className_)
                & boost::serialization::make_nvp("Price", Price_)
                & boost::serialization::make_nvp("FuturesType", FuturesType_)
                & boost::serialization::make_nvp("FuturesDate", FuturesDate_)
                & boost::serialization::make_nvp("LengthInMonths", LengthInMonths_)
                & boost::serialization::make_nvp("Calendar", Calendar_)
                & boost::serialization::make_nvp("Convention", Convention_)
                & boost::serialization::make_nvp("EndOfMonth", EndOfMonth_)
                & boost::serialization::make_nvp("DayCounter", DayCounter_)
                & boost::serialization::make_nvp("ConvexityAdjQuote", ConvexityAdjQuote_)
                & boost::serialization::make_nvp("Permanent", Permanent_)
                & boost::serialization::make_nvp("UserProperties", userProperties);
        }
    };

    class qlFuturesRateHelper3 : public ObjectHandler::ValueObject {
        friend class boost::serialization::access;
    public:
        qlFuturesRateHelper3() {}
        qlFuturesRateHelper3(
            const std::string& ObjectId,
            const ObjectHandler::property_t& Price,
            const std::string& FuturesType,
            const ObjectHandler::property_t& FuturesDate,
            const ObjectHandler::property_t& EndDate,
            const std::string& DayCounter,
            const ObjectHandler::property_t& ConvexityAdjQuote,
            bool Permanent);

        const std::set<std::string>& getSystemPropertyNames() const;
        std::vector<std::string> getPropertyNamesVector() const;
        ObjectHandler::property_t getSystemProperty(const std::string&) const;
        void setSystemProperty(const std::string& name, const ObjectHandler::property_t& value);

    protected:
        static const char* mPropertyNames[];
        static std::set<std::string> mSystemPropertyNames;

        ObjectHandler::property_t Price_;
        std::string FuturesType_;
        ObjectHandler::property_t FuturesDate_;
        ObjectHandler::property_t EndDate_;
        std::string DayCounter_;
        ObjectHandler::property_t ConvexityAdjQuote_;
        bool Permanent_;


        template<class Archive>
        void serialize(Archive& ar, const unsigned int) {
        boost::serialization::void_cast_register<qlFuturesRateHelper3, ObjectHandler::ValueObject>(this, this);
            ar  & boost::serialization::make_nvp("ObjectId", objectId_)
                & boost::serialization::make_nvp("ClassName", className_)
                & boost::serialization::make_nvp("Price", Price_)
                & boost::serialization::make_nvp("FuturesType", FuturesType_)
                & boost::serialization::make_nvp("FuturesDate", FuturesDate_)
                & boost::serialization::make_nvp("EndDate", EndDate_)
                & boost::serialization::make_nvp("DayCounter", DayCounter_)
                & boost::serialization::make_nvp("ConvexityAdjQuote", ConvexityAdjQuote_)
                & boost::serialization::make_nvp("Permanent", Permanent_)
                & boost::serialization::make_nvp("UserProperties", userProperties);
        }
    };

    class qlFxSwapRateHelper : public ObjectHandler::ValueObject {
        friend class boost::serialization::access;
    public:
        qlFxSwapRateHelper() {}
        qlFxSwapRateHelper(
            const std::string& ObjectId,
            const ObjectHandler::property_t& FwdPoint,
            const ObjectHandler::property_t& SpotFx,
            const std::string& Tenor,
            long FixingDays,
            const std::string& Calendar,
            const std::string& Convention,
            bool EndOfMonth,
            bool IsFxBaseCurrencyCollateralCurrency,
            const std::string& CollateralCurve,
            bool Permanent);

        const std::set<std::string>& getSystemPropertyNames() const;
        std::vector<std::string> getPropertyNamesVector() const;
        ObjectHandler::property_t getSystemProperty(const std::string&) const;
        void setSystemProperty(const std::string& name, const ObjectHandler::property_t& value);

    protected:
        static const char* mPropertyNames[];
        static std::set<std::string> mSystemPropertyNames;

        ObjectHandler::property_t FwdPoint_;
        ObjectHandler::property_t SpotFx_;
        std::string Tenor_;
        long FixingDays_;
        std::string Calendar_;
        std::string Convention_;
        bool EndOfMonth_;
        bool IsFxBaseCurrencyCollateralCurrency_;
        std::string CollateralCurve_;
        bool Permanent_;


        template<class Archive>
        void serialize(Archive& ar, const unsigned int) {
        boost::serialization::void_cast_register<qlFxSwapRateHelper, ObjectHandler::ValueObject>(this, this);
            ar  & boost::serialization::make_nvp("ObjectId", objectId_)
                & boost::serialization::make_nvp("ClassName", className_)
                & boost::serialization::make_nvp("FwdPoint", FwdPoint_)
                & boost::serialization::make_nvp("SpotFx", SpotFx_)
                & boost::serialization::make_nvp("Tenor", Tenor_)
                & boost::serialization::make_nvp("FixingDays", FixingDays_)
                & boost::serialization::make_nvp("Calendar", Calendar_)
                & boost::serialization::make_nvp("Convention", Convention_)
                & boost::serialization::make_nvp("EndOfMonth", EndOfMonth_)
                & boost::serialization::make_nvp("IsFxBaseCurrencyCollateralCurrency", IsFxBaseCurrencyCollateralCurrency_)
                & boost::serialization::make_nvp("CollateralCurve", CollateralCurve_)
                & boost::serialization::make_nvp("Permanent", Permanent_)
                & boost::serialization::make_nvp("UserProperties", userProperties);
        }
    };

    class qlOISRateHelper : public ObjectHandler::ValueObject {
        friend class boost::serialization::access;
    public:
        qlOISRateHelper() {}
        qlOISRateHelper(
            const std::string& ObjectId,
            long SettlDays,
            const std::string& Tenor,
            const ObjectHandler::property_t& FixedRate,
            const std::string& ONIndex,
            const std::string& DiscountingCurve,
            bool Permanent);

        const std::set<std::string>& getSystemPropertyNames() const;
        std::vector<std::string> getPropertyNamesVector() const;
        ObjectHandler::property_t getSystemProperty(const std::string&) const;
        void setSystemProperty(const std::string& name, const ObjectHandler::property_t& value);

    protected:
        static const char* mPropertyNames[];
        static std::set<std::string> mSystemPropertyNames;

        long SettlDays_;
        std::string Tenor_;
        ObjectHandler::property_t FixedRate_;
        std::string ONIndex_;
        std::string DiscountingCurve_;
        bool Permanent_;


        template<class Archive>
        void serialize(Archive& ar, const unsigned int) {
        boost::serialization::void_cast_register<qlOISRateHelper, ObjectHandler::ValueObject>(this, this);
            ar  & boost::serialization::make_nvp("ObjectId", objectId_)
                & boost::serialization::make_nvp("ClassName", className_)
                & boost::serialization::make_nvp("SettlDays", SettlDays_)
                & boost::serialization::make_nvp("Tenor", Tenor_)
                & boost::serialization::make_nvp("FixedRate", FixedRate_)
                & boost::serialization::make_nvp("ONIndex", ONIndex_)
                & boost::serialization::make_nvp("DiscountingCurve", DiscountingCurve_)
                & boost::serialization::make_nvp("Permanent", Permanent_)
                & boost::serialization::make_nvp("UserProperties", userProperties);
        }
    };

    class qlSwapRateHelper : public ObjectHandler::ValueObject {
        friend class boost::serialization::access;
    public:
        qlSwapRateHelper() {}
        qlSwapRateHelper(
            const std::string& ObjectId,
            const ObjectHandler::property_t& Rate,
            const std::string& SwapIndex,
            const ObjectHandler::property_t& Spread,
            const std::string& ForwardStart,
            const std::string& DiscountingCurve,
            const std::string& PillarDate,
            const ObjectHandler::property_t& CustomPillarDate,
            bool Permanent);

        const std::set<std::string>& getSystemPropertyNames() const;
        std::vector<std::string> getPropertyNamesVector() const;
        ObjectHandler::property_t getSystemProperty(const std::string&) const;
        void setSystemProperty(const std::string& name, const ObjectHandler::property_t& value);

    protected:
        static const char* mPropertyNames[];
        static std::set<std::string> mSystemPropertyNames;

        ObjectHandler::property_t Rate_;
        std::string SwapIndex_;
        ObjectHandler::property_t Spread_;
        std::string ForwardStart_;
        std::string DiscountingCurve_;
        std::string PillarDate_;
        ObjectHandler::property_t CustomPillarDate_;
        bool Permanent_;


        template<class Archive>
        void serialize(Archive& ar, const unsigned int) {
        boost::serialization::void_cast_register<qlSwapRateHelper, ObjectHandler::ValueObject>(this, this);
            ar  & boost::serialization::make_nvp("ObjectId", objectId_)
                & boost::serialization::make_nvp("ClassName", className_)
                & boost::serialization::make_nvp("Rate", Rate_)
                & boost::serialization::make_nvp("SwapIndex", SwapIndex_)
                & boost::serialization::make_nvp("Spread", Spread_)
                & boost::serialization::make_nvp("ForwardStart", ForwardStart_)
                & boost::serialization::make_nvp("DiscountingCurve", DiscountingCurve_)
                & boost::serialization::make_nvp("PillarDate", PillarDate_)
                & boost::serialization::make_nvp("CustomPillarDate", CustomPillarDate_)
                & boost::serialization::make_nvp("Permanent", Permanent_)
                & boost::serialization::make_nvp("UserProperties", userProperties);
        }
    };

    class qlSwapRateHelper2 : public ObjectHandler::ValueObject {
        friend class boost::serialization::access;
    public:
        qlSwapRateHelper2() {}
        qlSwapRateHelper2(
            const std::string& ObjectId,
            const ObjectHandler::property_t& Rate,
            long SettlDays,
            const std::string& Tenor,
            const std::string& Calendar,
            const std::string& FixedLegFrequency,
            const std::string& FixedLegConvention,
            const std::string& FixedLegDayCounter,
            const std::string& IborIndex,
            const ObjectHandler::property_t& Spread,
            const std::string& ForwardStart,
            const std::string& DiscountingCurve,
            const std::string& PillarDate,
            const ObjectHandler::property_t& CustomPillarDate,
            bool Permanent);

        const std::set<std::string>& getSystemPropertyNames() const;
        std::vector<std::string> getPropertyNamesVector() const;
        ObjectHandler::property_t getSystemProperty(const std::string&) const;
        void setSystemProperty(const std::string& name, const ObjectHandler::property_t& value);

    protected:
        static const char* mPropertyNames[];
        static std::set<std::string> mSystemPropertyNames;

        ObjectHandler::property_t Rate_;
        long SettlDays_;
        std::string Tenor_;
        std::string Calendar_;
        std::string FixedLegFrequency_;
        std::string FixedLegConvention_;
        std::string FixedLegDayCounter_;
        std::string IborIndex_;
        ObjectHandler::property_t Spread_;
        std::string ForwardStart_;
        std::string DiscountingCurve_;
        std::string PillarDate_;
        ObjectHandler::property_t CustomPillarDate_;
        bool Permanent_;


        template<class Archive>
        void serialize(Archive& ar, const unsigned int) {
        boost::serialization::void_cast_register<qlSwapRateHelper2, ObjectHandler::ValueObject>(this, this);
            ar  & boost::serialization::make_nvp("ObjectId", objectId_)
                & boost::serialization::make_nvp("ClassName", className_)
                & boost::serialization::make_nvp("Rate", Rate_)
                & boost::serialization::make_nvp("SettlDays", SettlDays_)
                & boost::serialization::make_nvp("Tenor", Tenor_)
                & boost::serialization::make_nvp("Calendar", Calendar_)
                & boost::serialization::make_nvp("FixedLegFrequency", FixedLegFrequency_)
                & boost::serialization::make_nvp("FixedLegConvention", FixedLegConvention_)
                & boost::serialization::make_nvp("FixedLegDayCounter", FixedLegDayCounter_)
                & boost::serialization::make_nvp("IborIndex", IborIndex_)
                & boost::serialization::make_nvp("Spread", Spread_)
                & boost::serialization::make_nvp("ForwardStart", ForwardStart_)
                & boost::serialization::make_nvp("DiscountingCurve", DiscountingCurve_)
                & boost::serialization::make_nvp("PillarDate", PillarDate_)
                & boost::serialization::make_nvp("CustomPillarDate", CustomPillarDate_)
                & boost::serialization::make_nvp("Permanent", Permanent_)
                & boost::serialization::make_nvp("UserProperties", userProperties);
        }
    };



} }

#endif

