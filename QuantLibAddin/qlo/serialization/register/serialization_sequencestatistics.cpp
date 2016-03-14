
/*  
 Copyright (C) 2007, 2008 Eric Ehlers
 Copyright (C) 2006 Plamen Neykov
 
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
//      gensrc/gensrc/stubs/stub.serialization.body

#include <oh/ohdefines.hpp>
#include <qlo/serialization/register/serialization_sequencestatistics.hpp>
#include <qlo/valueobjects/vo_sequencestatistics.hpp>
#include <boost/serialization/shared_ptr.hpp>
#include <boost/serialization/variant.hpp>
#include <boost/serialization/vector.hpp>


namespace QuantLibAddin {

    void register_sequencestatistics(boost::archive::xml_oarchive &ar) {
    
        // class ID 227 in the boost serialization framework
        ar.register_type<QuantLibAddin::ValueObjects::qlSequenceStatistics>();
        // class ID 228 in the boost serialization framework
        ar.register_type<QuantLibAddin::ValueObjects::qlSequenceStatistics2>();
        // class ID 229 in the boost serialization framework
        ar.register_type<QuantLibAddin::ValueObjects::qlSequenceStatisticsInc>();
        // class ID 230 in the boost serialization framework
        ar.register_type<QuantLibAddin::ValueObjects::qlSequenceStatisticsInc2>();

    }
    
    void register_sequencestatistics(boost::archive::xml_iarchive &ar) {
    
        // class ID 227 in the boost serialization framework
        ar.register_type<QuantLibAddin::ValueObjects::qlSequenceStatistics>();
        // class ID 228 in the boost serialization framework
        ar.register_type<QuantLibAddin::ValueObjects::qlSequenceStatistics2>();
        // class ID 229 in the boost serialization framework
        ar.register_type<QuantLibAddin::ValueObjects::qlSequenceStatisticsInc>();
        // class ID 230 in the boost serialization framework
        ar.register_type<QuantLibAddin::ValueObjects::qlSequenceStatisticsInc2>();

    }
    
}

