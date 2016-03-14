
/*  
 Copyright (C) 2007 Eric Ehlers
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
//      gensrc/gensrc/stubs/stub.calc.includes

#include <oh/utilities.hpp>
#include <oh/ohdefines.hpp>
#include <qlo/qladdindefines.hpp>
#include <qlo/enumerations/factories/all.hpp>
#include <qlo/conversions/all.hpp>
#include <oh/serializationfactory.hpp>

#include <qladdin.hpp>
#include <conversions.hpp>

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::ohObjectLoad(
        const ANY &Directory,
        const ANY &Pattern,
        const sal_Int32 Recurse,
        const sal_Int32 Overwrite,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string DirectoryCpp;
        calcToScalar(DirectoryCpp, Directory);

        std::string PatternCpp;
        if(Pattern.hasValue()) 
            calcToScalar(PatternCpp, Pattern);
        else
            PatternCpp = ".*\\.xml";

        bool RecurseCpp;
        calcToScalar(RecurseCpp, Recurse);

        bool OverwriteCpp;
        calcToScalar(OverwriteCpp, Overwrite);

        // invoke the utility function

        std::vector<std::string> returnValue = ObjectHandler::SerializationFactory::instance().loadObject(
                DirectoryCpp,
                PatternCpp,
                RecurseCpp,
                OverwriteCpp);

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        vectorToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: ohObjectLoad: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::ohObjectSave(
        const SEQSEQ(ANY) &ObjectList,
        const ANY &Filename,
        const sal_Int32 Overwrite,
        const sal_Int32 IncludeGroups,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::vector<std::string> ObjectListCpp;
        calcToVector(ObjectListCpp, ObjectList);

        std::string FilenameCpp;
        calcToScalar(FilenameCpp, Filename);

        bool OverwriteCpp;
        calcToScalar(OverwriteCpp, Overwrite);

        bool IncludeGroupsCpp;
        calcToScalar(IncludeGroupsCpp, IncludeGroups);

        // invoke the utility function

        static long returnValue;
        returnValue = ObjectHandler::SerializationFactory::instance().saveObject(
                ObjectListCpp,
                FilenameCpp,
                OverwriteCpp,
                IncludeGroupsCpp);

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
            errorMsg << "ERROR: ohObjectSave: " << e.what(); 
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


