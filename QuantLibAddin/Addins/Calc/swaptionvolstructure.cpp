
/*  
 Copyright (C) 2006, 2007, 2008 Ferdinando Ametrano
 Copyright (C) 2006 Silvia Frasson
 Copyright (C) 2006 Mario Pucci
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
#include <qlo/enumerations/factories/calendarfactory.hpp>
#include <qlo/handleimpl.hpp>
#include <qlo/conversions/coercetermstructure.hpp>
#include <qlo/indexes/swapindex.hpp>
#include <qlo/optimization.hpp>
#include <ql/indexes/swapindex.hpp>
#include <ql/termstructures/volatility/swaption/swaptionvolcube.hpp>
#include <qlo/valueobjects/vo_swaptionvolstructure.hpp>
#include <qlo/loop/loop_swaptionvolstructure.hpp>
#include <loop.hpp>
#include <qladdin.hpp>
#include <conversions.hpp>

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlConstantSwaptionVolatility(
        const ANY &ObjectId,
        const ANY &NDays,
        const ANY &Calendar,
        const ANY &BusinessDayConvention,
        const ANY &Volatility,
        const ANY &DayCounter,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        long NDaysCpp;
        calcToScalar(NDaysCpp, NDays);

        std::string CalendarCpp;
        calcToScalar(CalendarCpp, Calendar);

        std::string BusinessDayConventionCpp;
        calcToScalar(BusinessDayConventionCpp, BusinessDayConvention);

        std::string VolatilityCpp;
        calcToScalar(VolatilityCpp, Volatility);

        std::string DayCounterCpp;
        if(DayCounter.hasValue()) 
            calcToScalar(DayCounterCpp, DayCounter);
        else
            DayCounterCpp = "Actual/365 (Fixed)";

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Size NDaysLib;
        calcToScalar(NDaysLib, NDays);

        // convert object IDs into library objects

        OH_GET_OBJECT_DEFAULT(VolatilityCoerce, VolatilityCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::Quote> VolatilityLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::Quote,
                QuantLib::Quote>()(
                    VolatilityCoerce, QuantLib::Handle<QuantLib::Quote>());

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::Calendar CalendarEnum =
            ObjectHandler::Create<QuantLib::Calendar>()(CalendarCpp);

        QuantLib::BusinessDayConvention BusinessDayConventionEnum =
            ObjectHandler::Create<QuantLib::BusinessDayConvention>()(BusinessDayConventionCpp);

        QuantLib::DayCounter DayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(DayCounterCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlConstantSwaptionVolatility(
                ObjectIdCpp,
                NDaysCpp,
                CalendarCpp,
                BusinessDayConventionCpp,
                VolatilityCpp,
                DayCounterCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::ConstantSwaptionVolatility(
                valueObject,
                NDaysLib,
                CalendarEnum,
                BusinessDayConventionEnum,
                VolatilityLibObj,
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
            errorMsg << "ERROR: qlConstantSwaptionVolatility: " << e.what(); 
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


