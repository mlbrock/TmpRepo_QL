
/*  
 Copyright (C) 2006, 2007 Ferdinando Ametrano
 Copyright (C) 2007 Chiara Fornarola
 Copyright (C) 2006, 2007 Marco Bianchetti
 Copyright (C) 2006, 2007 Cristina Duminuco
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
#include <qlo/evolutiondescription.hpp>
#include <qlo/products.hpp>
#include <ql/models/marketmodels/multiproduct.hpp>
#include <ql/models/marketmodels/evolutiondescription.hpp>
#include <qlo/valueobjects/vo_evolutiondescription.hpp>

#include <qladdin.hpp>
#include <conversions.hpp>

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlEvolutionDescription(
        const ANY &ObjectId,
        const SEQSEQ(ANY) &RateTimes,
        const SEQSEQ(ANY) &EvolutionTimes,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::vector<double> RateTimesCpp;
        calcToVector(RateTimesCpp, RateTimes);

        std::vector<double> EvolutionTimesCpp;
        calcToVector(EvolutionTimesCpp, EvolutionTimes);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlEvolutionDescription(
                ObjectIdCpp,
                RateTimesCpp,
                EvolutionTimesCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::EvolutionDescription(
                valueObject,
                RateTimesCpp,
                EvolutionTimesCpp,
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
            errorMsg << "ERROR: qlEvolutionDescription: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlEvolutionDescriptionEvolutionTimes(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::EvolutionDescription, QuantLib::EvolutionDescription)

        // invoke the member function

        std::vector<double> returnValue = ObjectIdLibObjPtr->evolutionTimes();

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        vectorToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlEvolutionDescriptionEvolutionTimes: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlEvolutionDescriptionFirstAliveRate(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::EvolutionDescription, QuantLib::EvolutionDescription)

        // invoke the member function

        std::vector<QuantLib::Size> returnValue = ObjectIdLibObjPtr->firstAliveRate();

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        vectorToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlEvolutionDescriptionFirstAliveRate: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlEvolutionDescriptionFromProduct(
        const ANY &ObjectId,
        const ANY &Product,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string ProductCpp;
        calcToScalar(ProductCpp, Product);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(ProductLibObj, ProductCpp,
            QuantLibAddin::MarketModelMultiProduct, QuantLib::MarketModelMultiProduct)

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlEvolutionDescriptionFromProduct(
                ObjectIdCpp,
                ProductCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::EvolutionDescription(
                valueObject,
                ProductLibObj,
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
            errorMsg << "ERROR: qlEvolutionDescriptionFromProduct: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlEvolutionDescriptionNumberOfRates(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::EvolutionDescription, QuantLib::EvolutionDescription)

        // invoke the member function

        static long returnValue;
        returnValue = ObjectIdLibObjPtr->numberOfRates();

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
            errorMsg << "ERROR: qlEvolutionDescriptionNumberOfRates: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlEvolutionDescriptionNumberOfSteps(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::EvolutionDescription, QuantLib::EvolutionDescription)

        // invoke the member function

        static long returnValue;
        returnValue = ObjectIdLibObjPtr->numberOfSteps();

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
            errorMsg << "ERROR: qlEvolutionDescriptionNumberOfSteps: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlEvolutionDescriptionRateTimes(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::EvolutionDescription, QuantLib::EvolutionDescription)

        // invoke the member function

        std::vector<double> returnValue = ObjectIdLibObjPtr->rateTimes();

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        vectorToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlEvolutionDescriptionRateTimes: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlIsInMoneyMarketMeasure(
        const ANY &EvolutionDescription,
        const SEQSEQ(ANY) &Numeraires,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string EvolutionDescriptionCpp;
        calcToScalar(EvolutionDescriptionCpp, EvolutionDescription);

        std::vector<long> NumerairesCpp;
        calcToVector(NumerairesCpp, Numeraires);

        // convert input datatypes to QuantLib datatypes

        std::vector<QuantLib::Size> NumerairesLib;
        calcToVector(NumerairesLib, Numeraires);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(EvolutionDescriptionLibObj, EvolutionDescriptionCpp,
            QuantLibAddin::EvolutionDescription, QuantLib::EvolutionDescription)

        // invoke the utility function

        static short int returnValue;
        returnValue = QuantLib::isInMoneyMarketMeasure(
                EvolutionDescriptionLibObj,
                NumerairesLib);

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
            errorMsg << "ERROR: qlIsInMoneyMarketMeasure: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlIsInMoneyMarketPlusMeasure(
        const ANY &EvolutionDescription,
        const SEQSEQ(ANY) &Numeraires,
        const ANY &Offset,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string EvolutionDescriptionCpp;
        calcToScalar(EvolutionDescriptionCpp, EvolutionDescription);

        std::vector<long> NumerairesCpp;
        calcToVector(NumerairesCpp, Numeraires);

        long OffsetCpp;
        calcToScalar(OffsetCpp, Offset);

        // convert input datatypes to QuantLib datatypes

        std::vector<QuantLib::Size> NumerairesLib;
        calcToVector(NumerairesLib, Numeraires);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(EvolutionDescriptionLibObj, EvolutionDescriptionCpp,
            QuantLibAddin::EvolutionDescription, QuantLib::EvolutionDescription)

        // invoke the utility function

        static short int returnValue;
        returnValue = QuantLib::isInMoneyMarketPlusMeasure(
                EvolutionDescriptionLibObj,
                NumerairesLib,
                OffsetCpp);

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
            errorMsg << "ERROR: qlIsInMoneyMarketPlusMeasure: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlIsInTerminalMeasure(
        const ANY &EvolutionDescription,
        const SEQSEQ(ANY) &Numeraires,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string EvolutionDescriptionCpp;
        calcToScalar(EvolutionDescriptionCpp, EvolutionDescription);

        std::vector<long> NumerairesCpp;
        calcToVector(NumerairesCpp, Numeraires);

        // convert input datatypes to QuantLib datatypes

        std::vector<QuantLib::Size> NumerairesLib;
        calcToVector(NumerairesLib, Numeraires);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(EvolutionDescriptionLibObj, EvolutionDescriptionCpp,
            QuantLibAddin::EvolutionDescription, QuantLib::EvolutionDescription)

        // invoke the utility function

        static short int returnValue;
        returnValue = QuantLib::isInTerminalMeasure(
                EvolutionDescriptionLibObj,
                NumerairesLib);

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
            errorMsg << "ERROR: qlIsInTerminalMeasure: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlMoneyMarketMeasure(
        const ANY &EvolutionDescription,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string EvolutionDescriptionCpp;
        calcToScalar(EvolutionDescriptionCpp, EvolutionDescription);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(EvolutionDescriptionLibObj, EvolutionDescriptionCpp,
            QuantLibAddin::EvolutionDescription, QuantLib::EvolutionDescription)

        // invoke the utility function

        std::vector<QuantLib::Size> returnValue = QuantLib::moneyMarketMeasure(
                EvolutionDescriptionLibObj);

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        vectorToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlMoneyMarketMeasure: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlMoneyMarketPlusMeasure(
        const ANY &EvolutionDescription,
        const ANY &Offset,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string EvolutionDescriptionCpp;
        calcToScalar(EvolutionDescriptionCpp, EvolutionDescription);

        long OffsetCpp;
        calcToScalar(OffsetCpp, Offset);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Size OffsetLib;
        calcToScalar(OffsetLib, Offset);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(EvolutionDescriptionLibObj, EvolutionDescriptionCpp,
            QuantLibAddin::EvolutionDescription, QuantLib::EvolutionDescription)

        // invoke the utility function

        std::vector<QuantLib::Size> returnValue = QuantLib::moneyMarketPlusMeasure(
                EvolutionDescriptionLibObj,
                OffsetLib);

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        vectorToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlMoneyMarketPlusMeasure: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlTerminalMeasure(
        const ANY &EvolutionDescription,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string EvolutionDescriptionCpp;
        calcToScalar(EvolutionDescriptionCpp, EvolutionDescription);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(EvolutionDescriptionLibObj, EvolutionDescriptionCpp,
            QuantLibAddin::EvolutionDescription, QuantLib::EvolutionDescription)

        // invoke the utility function

        std::vector<QuantLib::Size> returnValue = QuantLib::terminalMeasure(
                EvolutionDescriptionLibObj);

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        vectorToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlTerminalMeasure: " << e.what(); 
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


