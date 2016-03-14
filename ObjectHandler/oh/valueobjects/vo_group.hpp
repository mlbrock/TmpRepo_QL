
/*  
 Copyright (C) 2005, 2006 Plamen Neykov
 Copyright (C) 2007, 2008 Eric Ehlers
 
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
//      gensrc/gensrc/stubs/stub.vo.includes.inline

#ifndef oh_vo_group_hpp
#define oh_vo_group_hpp

#include <oh/valueobject.hpp>
#include <string>
#include <vector>
#include <set>
#include <boost/serialization/map.hpp>
#include <boost/algorithm/string/case_conv.hpp>

namespace ObjectHandler { namespace ValueObjects {

    class ohGroup : public ObjectHandler::ValueObject {
        friend class boost::serialization::access;
    public:
        ohGroup() {}
        ohGroup(
            const std::string& ObjectId,
            const std::vector<std::string>& ObjectIdList,
            bool Permanent);

        const std::set<std::string>& getSystemPropertyNames() const;
        std::vector<std::string> getPropertyNamesVector() const;
        ObjectHandler::property_t getSystemProperty(const std::string&) const;
        void setSystemProperty(const std::string& name, const ObjectHandler::property_t& value);

    protected:

        std::vector<std::string> ObjectIdList_;
        bool Permanent_;

        
        template<class Archive>
        void serialize(Archive& ar, const unsigned int) {
        boost::serialization::void_cast_register<ohGroup, ObjectHandler::ValueObject>(this, this);
            ar  & boost::serialization::make_nvp("ObjectId", objectId_)
                & boost::serialization::make_nvp("ClassName", className_)
                & boost::serialization::make_nvp("ObjectIdList", ObjectIdList_)
                & boost::serialization::make_nvp("Permanent", Permanent_)
                & boost::serialization::make_nvp("UserProperties", userProperties);
        }
    };



    inline const std::set<std::string> &ohGroup::getSystemPropertyNames() const {
        static std::set<std::string> ret;
        if (ret.empty()) {
        ret.insert("ObjectIdList");
        ret.insert("Permanent");
        }
        return ret;
    }

    inline std::vector<std::string> ohGroup::getPropertyNamesVector() const {
        std::vector<std::string> ret;
        ret.push_back("ObjectIdList");
        ret.push_back("Permanent");
        for (std::map<std::string, ObjectHandler::property_t>::const_iterator i = userProperties.begin();
            i != userProperties.end(); ++i)
            ret.push_back(i->first);
        return ret;
    }

    inline ObjectHandler::property_t ohGroup::getSystemProperty(const std::string& name) const {
        std::string nameUpper = boost::algorithm::to_upper_copy(name);
        if(strcmp(nameUpper.c_str(), "OBJECTID")==0)
            return objectId_;
        else if(strcmp(nameUpper.c_str(), "CLASSNAME")==0)
            return className_;
        else if(strcmp(nameUpper.c_str(), "OBJECTIDLIST")==0)
            return ObjectIdList_;
        else if(strcmp(nameUpper.c_str(), "PERMANENT")==0)
            return Permanent_;
        else
            OH_FAIL("Error: attempt to retrieve non-existent Property: '" + name + "'");
    }

    inline void ohGroup::setSystemProperty(const std::string& name, const ObjectHandler::property_t& value) {
        std::string nameUpper = boost::algorithm::to_upper_copy(name);
        if(strcmp(nameUpper.c_str(), "OBJECTID")==0)
            objectId_ = boost::get<std::string>(value);
        else if(strcmp(nameUpper.c_str(), "CLASSNAME")==0)
            className_ = boost::get<std::string>(value);
        else if(strcmp(nameUpper.c_str(), "OBJECTIDLIST")==0)
            ObjectIdList_ = ObjectHandler::vector::convert2<std::string>(value, nameUpper);
        else if(strcmp(nameUpper.c_str(), "PERMANENT")==0)
            Permanent_ = ObjectHandler::convert2<bool>(value);
        else
            OH_FAIL("Error: attempt to set non-existent Property: '" + name + "'");
    }

    inline ohGroup::ohGroup(
            const std::string& ObjectId,
            const std::vector<std::string>& ObjectIdList,
            bool Permanent) :
        ObjectHandler::ValueObject(ObjectId, "ohGroup", Permanent),
        ObjectIdList_(ObjectIdList),
        Permanent_(Permanent) {
                  

            
    }



} }

#endif

