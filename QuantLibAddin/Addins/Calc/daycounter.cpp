
/*  
 Copyright (C) 2006 Ferdinando Ametrano
 
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
#include <ql/time/date.hpp>
#include <ql/time/daycounter.hpp>
#include <qlo/loop/loop_daycounter.hpp>
#include <loop.hpp>
#include <qladdin.hpp>
#include <conversions.hpp>

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlDayCounterDayCount(
        const ANY &daycounter,
        const ANY &StartDate,
        const SEQSEQ(ANY) &EndDate,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string daycounterCpp;
        calcToScalar(daycounterCpp, daycounter);

        ObjectHandler::property_t StartDateCpp;
        calcToScalar(StartDateCpp, StartDate);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date StartDateLib;
        calcToScalar(StartDateLib, StartDate);

        std::vector<QuantLib::Date> EndDateLib;
        calcToVector(EndDateLib, EndDate);

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::DayCounter daycounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(daycounterCpp);

        // loop on the input parameter and populate the return vector

        SEQSEQ(ANY) returnValue;

        QuantLibAddin::qlDayCounterDayCountBind bindObject = 
            boost::bind((QuantLibAddin::qlDayCounterDayCountSignature)
                    &QuantLib::DayCounter::dayCount, 
                daycounterEnum,
                StartDateLib,
                _1);
                    
        {
            returnValue.realloc(EndDateLib.size());
            for (unsigned int i=0; i<EndDateLib.size(); ++i) {
                SEQ(ANY) s(1);
                scalarToCalc(s[0], bindObject( EndDateLib[i] ) );
                returnValue[i] = s;
            }
        }
     	  
        /* ObjectHandler::loop
            <QuantLibAddin::qlDayCounterDayCountBind, QuantLib::Date, long>
            (functionCall, bindObject, EndDateLib, returnValue); */



        return returnValue;
    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlDayCounterDayCount: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlDayCounterName(
        const ANY &daycounter,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string daycounterCpp;
        calcToScalar(daycounterCpp, daycounter);

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::DayCounter daycounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(daycounterCpp);

        // invoke the member function

        std::string returnValue = daycounterEnum.name();

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
            errorMsg << "ERROR: qlDayCounterName: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlDayCounterYearFraction(
        const ANY &daycounter,
        const ANY &StartDate,
        const SEQSEQ(ANY) &EndDate,
        const ANY &RefPeriodStart,
        const ANY &RefPeriodEnd,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string daycounterCpp;
        calcToScalar(daycounterCpp, daycounter);

        ObjectHandler::property_t StartDateCpp;
        calcToScalar(StartDateCpp, StartDate);

        ObjectHandler::property_t RefPeriodStartCpp;
        calcToScalar(RefPeriodStartCpp, RefPeriodStart);

        ObjectHandler::property_t RefPeriodEndCpp;
        calcToScalar(RefPeriodEndCpp, RefPeriodEnd);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date StartDateLib;
        calcToScalar(StartDateLib, StartDate);

        std::vector<QuantLib::Date> EndDateLib;
        calcToVector(EndDateLib, EndDate);

        QuantLib::Date RefPeriodStartLib;
        if(!RefPeriodStart.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            RefPeriodStartLib = QuantLib::Date();
        else
            calcToScalar(RefPeriodStartLib, RefPeriodStart);

        QuantLib::Date RefPeriodEndLib;
        if(!RefPeriodEnd.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            RefPeriodEndLib = QuantLib::Date();
        else
            calcToScalar(RefPeriodEndLib, RefPeriodEnd);

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::DayCounter daycounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(daycounterCpp);

        // loop on the input parameter and populate the return vector

        SEQSEQ(ANY) returnValue;

        QuantLibAddin::qlDayCounterYearFractionBind bindObject = 
            boost::bind((QuantLibAddin::qlDayCounterYearFractionSignature)
                    &QuantLib::DayCounter::yearFraction, 
                daycounterEnum,
                StartDateLib,
                _1,
                RefPeriodStartLib,
                RefPeriodEndLib);
                    
        {
            returnValue.realloc(EndDateLib.size());
            for (unsigned int i=0; i<EndDateLib.size(); ++i) {
                SEQ(ANY) s(1);
                scalarToCalc(s[0], bindObject( EndDateLib[i] ) );
                returnValue[i] = s;
            }
        }
     	  
        /* ObjectHandler::loop
            <QuantLibAddin::qlDayCounterYearFractionBind, QuantLib::Date, double>
            (functionCall, bindObject, EndDateLib, returnValue); */



        return returnValue;
    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlDayCounterYearFraction: " << e.what(); 
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


