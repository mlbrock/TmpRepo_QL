
/*  
 Copyright (C) 2009, 2011 Ferdinando Ametrano
 Copyright (C) 2006, 2007, Chiara Fornarola
 
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
#include <qlo/indexes/iborindex.hpp>
#include <qlo/schedule.hpp>
#include <qlo/assetswap.hpp>
#include <qlo/termstructures.hpp>
#include <qlo/bonds.hpp>
#include <ql/instruments/assetswap.hpp>
#include <ql/indexes/iborindex.hpp>
#include <qlo/valueobjects/vo_assetswap.hpp>

#include <qladdin.hpp>
#include <conversions.hpp>

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlAssetSwap(
        const ANY &ObjectId,
        const sal_Int32 PayBondCoupon,
        const ANY &Bond,
        const ANY &CleanPrice,
        const ANY &IborIndex,
        const ANY &Spread,
        const ANY &FloatingLegSchedule,
        const ANY &FloatingLegDayCounter,
        const sal_Int32 ParAssetSwap,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        bool PayBondCouponCpp;
        calcToScalar(PayBondCouponCpp, PayBondCoupon);

        std::string BondCpp;
        calcToScalar(BondCpp, Bond);

        double CleanPriceCpp;
        calcToScalar(CleanPriceCpp, CleanPrice);

        std::string IborIndexCpp;
        calcToScalar(IborIndexCpp, IborIndex);

        double SpreadCpp;
        if(Spread.hasValue()) 
            calcToScalar(SpreadCpp, Spread);
        else
            SpreadCpp = 0.0;

        std::string FloatingLegScheduleCpp;
        if(FloatingLegSchedule.hasValue()) 
            calcToScalar(FloatingLegScheduleCpp, FloatingLegSchedule);
        else
            FloatingLegScheduleCpp = "";

        std::string FloatingLegDayCounterCpp;
        calcToScalar(FloatingLegDayCounterCpp, FloatingLegDayCounter);

        bool ParAssetSwapCpp;
        calcToScalar(ParAssetSwapCpp, ParAssetSwap);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert object IDs into library objects

        OH_GET_REFERENCE(BondLibObjPtr, BondCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        OH_GET_REFERENCE(IborIndexLibObjPtr, IborIndexCpp,
            QuantLibAddin::IborIndex, QuantLib::IborIndex)

        OH_GET_REFERENCE(FloatingLegScheduleLibObjPtr, FloatingLegScheduleCpp,
            QuantLibAddin::Schedule, QuantLib::Schedule)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::DayCounter FloatingLegDayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(FloatingLegDayCounterCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlAssetSwap(
                ObjectIdCpp,
                PayBondCouponCpp,
                BondCpp,
                CleanPriceCpp,
                IborIndexCpp,
                SpreadCpp,
                FloatingLegScheduleCpp,
                FloatingLegDayCounterCpp,
                ParAssetSwapCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::AssetSwap(
                valueObject,
                PayBondCouponCpp,
                BondLibObjPtr,
                CleanPriceCpp,
                IborIndexLibObjPtr,
                SpreadCpp,
                FloatingLegScheduleLibObjPtr,
                FloatingLegDayCounterEnum,
                ParAssetSwapCpp,
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
            errorMsg << "ERROR: qlAssetSwap: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlAssetSwap2(
        const ANY &ObjectId,
        const sal_Int32 ParAssetSwap,
        const ANY &Bond,
        const ANY &CleanPrice,
        const ANY &NonParRepayment,
        const ANY &Gearing,
        const ANY &IborIndex,
        const ANY &Spread,
        const ANY &FloatingLegDayCounter,
        const ANY &DealMaturity,
        const sal_Int32 PayBondCoupon,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        bool ParAssetSwapCpp;
        calcToScalar(ParAssetSwapCpp, ParAssetSwap);

        std::string BondCpp;
        calcToScalar(BondCpp, Bond);

        double CleanPriceCpp;
        calcToScalar(CleanPriceCpp, CleanPrice);

        double NonParRepaymentCpp;
        calcToScalar(NonParRepaymentCpp, NonParRepayment);

        double GearingCpp;
        if(Gearing.hasValue()) 
            calcToScalar(GearingCpp, Gearing);
        else
            GearingCpp = 1.0;

        std::string IborIndexCpp;
        calcToScalar(IborIndexCpp, IborIndex);

        double SpreadCpp;
        if(Spread.hasValue()) 
            calcToScalar(SpreadCpp, Spread);
        else
            SpreadCpp = 0.0;

        std::string FloatingLegDayCounterCpp;
        if(FloatingLegDayCounter.hasValue()) 
            calcToScalar(FloatingLegDayCounterCpp, FloatingLegDayCounter);
        else
            FloatingLegDayCounterCpp = "QuantLib::DayCounter()";

        ObjectHandler::property_t DealMaturityCpp;
        calcToScalar(DealMaturityCpp, DealMaturity);

        bool PayBondCouponCpp;
        calcToScalar(PayBondCouponCpp, PayBondCoupon);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Date DealMaturityLib;
        if(!DealMaturity.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            DealMaturityLib = QuantLib::Date();
        else
            calcToScalar(DealMaturityLib, DealMaturity);

        // convert object IDs into library objects

        OH_GET_REFERENCE(BondLibObjPtr, BondCpp,
            QuantLibAddin::Bond, QuantLib::Bond)

        OH_GET_REFERENCE(IborIndexLibObjPtr, IborIndexCpp,
            QuantLibAddin::IborIndex, QuantLib::IborIndex)

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::DayCounter FloatingLegDayCounterEnum =
            ObjectHandler::Create<QuantLib::DayCounter>()(FloatingLegDayCounterCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlAssetSwap2(
                ObjectIdCpp,
                ParAssetSwapCpp,
                BondCpp,
                CleanPriceCpp,
                NonParRepaymentCpp,
                GearingCpp,
                IborIndexCpp,
                SpreadCpp,
                FloatingLegDayCounterCpp,
                DealMaturityCpp,
                PayBondCouponCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::AssetSwap(
                valueObject,
                ParAssetSwapCpp,
                BondLibObjPtr,
                CleanPriceCpp,
                NonParRepaymentCpp,
                GearingCpp,
                IborIndexLibObjPtr,
                SpreadCpp,
                FloatingLegDayCounterEnum,
                DealMaturityLib,
                PayBondCouponCpp,
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
            errorMsg << "ERROR: qlAssetSwap2: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlAssetSwapFairCleanPrice(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::AssetSwap, QuantLib::AssetSwap)

        // invoke the member function

        QuantLib::Real returnValue = ObjectIdLibObjPtr->fairCleanPrice();

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
            errorMsg << "ERROR: qlAssetSwapFairCleanPrice: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlAssetSwapFairNonParRepayment(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::AssetSwap, QuantLib::AssetSwap)

        // invoke the member function

        QuantLib::Real returnValue = ObjectIdLibObjPtr->fairNonParRepayment();

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
            errorMsg << "ERROR: qlAssetSwapFairNonParRepayment: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlAssetSwapFairSpread(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::AssetSwap, QuantLib::AssetSwap)

        // invoke the member function

        static double returnValue;
        returnValue = ObjectIdLibObjPtr->fairSpread();

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
            errorMsg << "ERROR: qlAssetSwapFairSpread: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlAssetSwapFloatingLegAnalysis(
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

        OH_GET_OBJECT(ObjectIdObjPtr, ObjectIdCpp, QuantLibAddin::AssetSwap)

        // invoke the member function

        std::vector<std::vector<ObjectHandler::property_t> > returnValue = ObjectIdObjPtr->floatingLeg(
                AfterDateLib);

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        matrixToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlAssetSwapFloatingLegAnalysis: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlAssetSwapFloatingLegBPS(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::AssetSwap, QuantLib::AssetSwap)

        // invoke the member function

        static double returnValue;
        returnValue = ObjectIdLibObjPtr->floatingLegBPS();

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
            errorMsg << "ERROR: qlAssetSwapFloatingLegBPS: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlAssetSwapParSwap(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::AssetSwap, QuantLib::AssetSwap)

        // invoke the member function

        static short int returnValue;
        returnValue = ObjectIdLibObjPtr->parSwap();

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
            errorMsg << "ERROR: qlAssetSwapParSwap: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlAssetSwapPayBondCoupon(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::AssetSwap, QuantLib::AssetSwap)

        // invoke the member function

        static short int returnValue;
        returnValue = ObjectIdLibObjPtr->payBondCoupon();

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
            errorMsg << "ERROR: qlAssetSwapPayBondCoupon: " << e.what(); 
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


