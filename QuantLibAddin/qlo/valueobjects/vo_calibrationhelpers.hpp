
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

#ifndef qlo_vo_calibrationhelpers_hpp
#define qlo_vo_calibrationhelpers_hpp

#include <oh/valueobject.hpp>
#include <string>
#include <vector>
#include <set>
#include <boost/serialization/map.hpp>
#include <boost/algorithm/string/case_conv.hpp>

namespace QuantLibAddin { namespace ValueObjects {

    class qlSwaptionHelper : public ObjectHandler::ValueObject {
        friend class boost::serialization::access;
    public:
        qlSwaptionHelper() {}
        qlSwaptionHelper(
            const std::string& ObjectId,
            const std::string& OptionTenor,
            const std::string& Length,
            const ObjectHandler::property_t& Volatility,
            const std::string& IborIndex,
            const std::string& FixedLegTenor,
            const std::string& FixedLegDayCounter,
            const std::string& FloatingLegDayCounter,
            const std::string& YieldCurve,
            bool Permanent);

        const std::set<std::string>& getSystemPropertyNames() const;
        std::vector<std::string> getPropertyNamesVector() const;
        ObjectHandler::property_t getSystemProperty(const std::string&) const;
        void setSystemProperty(const std::string& name, const ObjectHandler::property_t& value);

    protected:
        static const char* mPropertyNames[];
        static std::set<std::string> mSystemPropertyNames;

        std::string OptionTenor_;
        std::string Length_;
        ObjectHandler::property_t Volatility_;
        std::string IborIndex_;
        std::string FixedLegTenor_;
        std::string FixedLegDayCounter_;
        std::string FloatingLegDayCounter_;
        std::string YieldCurve_;
        bool Permanent_;


        template<class Archive>
        void serialize(Archive& ar, const unsigned int) {
        boost::serialization::void_cast_register<qlSwaptionHelper, ObjectHandler::ValueObject>(this, this);
            ar  & boost::serialization::make_nvp("ObjectId", objectId_)
                & boost::serialization::make_nvp("ClassName", className_)
                & boost::serialization::make_nvp("OptionTenor", OptionTenor_)
                & boost::serialization::make_nvp("Length", Length_)
                & boost::serialization::make_nvp("Volatility", Volatility_)
                & boost::serialization::make_nvp("IborIndex", IborIndex_)
                & boost::serialization::make_nvp("FixedLegTenor", FixedLegTenor_)
                & boost::serialization::make_nvp("FixedLegDayCounter", FixedLegDayCounter_)
                & boost::serialization::make_nvp("FloatingLegDayCounter", FloatingLegDayCounter_)
                & boost::serialization::make_nvp("YieldCurve", YieldCurve_)
                & boost::serialization::make_nvp("Permanent", Permanent_)
                & boost::serialization::make_nvp("UserProperties", userProperties);
        }
    };



} }

#endif

