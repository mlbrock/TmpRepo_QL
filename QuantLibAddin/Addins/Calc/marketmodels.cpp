
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
#include <qlo/marketmodels.hpp>
#include <qlo/curvestate.hpp>
#include <qlo/evolutiondescription.hpp>
#include <qlo/correlation.hpp>
#include <qlo/ctsmmcapletcalibration.hpp>
#include <qlo/yieldtermstructures.hpp>
#include <ql/models/marketmodels/models/fwdperiodadapter.hpp>
#include <ql/models/marketmodels/swapforwardmappings.hpp>
#include <ql/models/marketmodels/models/capletcoterminalalphacalibration.hpp>
#include <ql/termstructures/yieldtermstructure.hpp>
#include <qlo/valueobjects/vo_marketmodels.hpp>

#include <qladdin.hpp>
#include <conversions.hpp>

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlAbcdVol(
        const ANY &ObjectId,
        const ANY &A,
        const ANY &B,
        const ANY &C,
        const ANY &D,
        const SEQSEQ(ANY) &Ks,
        const ANY &Correlations,
        const ANY &EvolutionDescription,
        const ANY &Factors,
        const SEQSEQ(ANY) &InitialRates,
        const SEQSEQ(ANY) &Displacements,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        double ACpp;
        calcToScalar(ACpp, A);

        double BCpp;
        calcToScalar(BCpp, B);

        double CCpp;
        calcToScalar(CCpp, C);

        double DCpp;
        calcToScalar(DCpp, D);

        std::vector<double> KsCpp;
        calcToVector(KsCpp, Ks);

        std::string CorrelationsCpp;
        calcToScalar(CorrelationsCpp, Correlations);

        std::string EvolutionDescriptionCpp;
        calcToScalar(EvolutionDescriptionCpp, EvolutionDescription);

        long FactorsCpp;
        calcToScalar(FactorsCpp, Factors);

        std::vector<double> InitialRatesCpp;
        calcToVector(InitialRatesCpp, InitialRates);

        std::vector<double> DisplacementsCpp;
        calcToVector(DisplacementsCpp, Displacements);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert object IDs into library objects

        OH_GET_REFERENCE(CorrelationsLibObjPtr, CorrelationsCpp,
            QuantLibAddin::PiecewiseConstantCorrelation, QuantLib::PiecewiseConstantCorrelation)

        OH_GET_UNDERLYING(EvolutionDescriptionLibObj, EvolutionDescriptionCpp,
            QuantLibAddin::EvolutionDescription, QuantLib::EvolutionDescription)

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlAbcdVol(
                ObjectIdCpp,
                ACpp,
                BCpp,
                CCpp,
                DCpp,
                KsCpp,
                CorrelationsCpp,
                EvolutionDescriptionCpp,
                FactorsCpp,
                InitialRatesCpp,
                DisplacementsCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::AbcdVol(
                valueObject,
                ACpp,
                BCpp,
                CCpp,
                DCpp,
                KsCpp,
                CorrelationsLibObjPtr,
                EvolutionDescriptionLibObj,
                FactorsCpp,
                InitialRatesCpp,
                DisplacementsCpp,
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
            errorMsg << "ERROR: qlAbcdVol: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlAnnuity(
        const ANY &CurveState,
        const ANY &StartIndex,
        const ANY &EndIndex,
        const ANY &NumeraireIndex,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string CurveStateCpp;
        calcToScalar(CurveStateCpp, CurveState);

        long StartIndexCpp;
        calcToScalar(StartIndexCpp, StartIndex);

        long EndIndexCpp;
        calcToScalar(EndIndexCpp, EndIndex);

        long NumeraireIndexCpp;
        calcToScalar(NumeraireIndexCpp, NumeraireIndex);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Size StartIndexLib;
        calcToScalar(StartIndexLib, StartIndex);

        QuantLib::Size EndIndexLib;
        calcToScalar(EndIndexLib, EndIndex);

        QuantLib::Size NumeraireIndexLib;
        calcToScalar(NumeraireIndexLib, NumeraireIndex);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(CurveStateLibObj, CurveStateCpp,
            QuantLibAddin::CurveState, QuantLib::CurveState)

        // invoke the utility function

        QuantLib::Real returnValue = QuantLib::SwapForwardMappings::annuity(
                CurveStateLibObj,
                StartIndexLib,
                EndIndexLib,
                NumeraireIndexLib);

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
            errorMsg << "ERROR: qlAnnuity: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlCmSwapForwardJacobian(
        const ANY &CurveState,
        const ANY &SpanningForwards,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string CurveStateCpp;
        calcToScalar(CurveStateCpp, CurveState);

        long SpanningForwardsCpp;
        calcToScalar(SpanningForwardsCpp, SpanningForwards);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Size SpanningForwardsLib;
        calcToScalar(SpanningForwardsLib, SpanningForwards);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(CurveStateLibObj, CurveStateCpp,
            QuantLibAddin::CurveState, QuantLib::CurveState)

        // invoke the utility function

        QuantLib::Matrix returnValue = QuantLib::SwapForwardMappings::cmSwapForwardJacobian(
                CurveStateLibObj,
                SpanningForwardsLib);

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        matrixToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlCmSwapForwardJacobian: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlCmSwapZedMatrix(
        const ANY &CurveState,
        const ANY &SpanningForwards,
        const ANY &Displacement,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string CurveStateCpp;
        calcToScalar(CurveStateCpp, CurveState);

        long SpanningForwardsCpp;
        calcToScalar(SpanningForwardsCpp, SpanningForwards);

        double DisplacementCpp;
        if(Displacement.hasValue()) 
            calcToScalar(DisplacementCpp, Displacement);
        else
            DisplacementCpp = 0.0;

        // convert input datatypes to QuantLib datatypes

        QuantLib::Size SpanningForwardsLib;
        calcToScalar(SpanningForwardsLib, SpanningForwards);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(CurveStateLibObj, CurveStateCpp,
            QuantLibAddin::CurveState, QuantLib::CurveState)

        // invoke the utility function

        QuantLib::Matrix returnValue = QuantLib::SwapForwardMappings::cmSwapZedMatrix(
                CurveStateLibObj,
                SpanningForwardsLib,
                DisplacementCpp);

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        matrixToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlCmSwapZedMatrix: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlCoinitialSwapForwardJacobian(
        const ANY &CurveState,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string CurveStateCpp;
        calcToScalar(CurveStateCpp, CurveState);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(CurveStateLibObj, CurveStateCpp,
            QuantLibAddin::CurveState, QuantLib::CurveState)

        // invoke the utility function

        QuantLib::Matrix returnValue = QuantLib::SwapForwardMappings::coinitialSwapForwardJacobian(
                CurveStateLibObj);

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        matrixToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlCoinitialSwapForwardJacobian: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlCoinitialSwapZedMatrix(
        const ANY &CurveState,
        const ANY &Displacement,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string CurveStateCpp;
        calcToScalar(CurveStateCpp, CurveState);

        double DisplacementCpp;
        if(Displacement.hasValue()) 
            calcToScalar(DisplacementCpp, Displacement);
        else
            DisplacementCpp = 0.0;

        // convert object IDs into library objects

        OH_GET_UNDERLYING(CurveStateLibObj, CurveStateCpp,
            QuantLibAddin::CurveState, QuantLib::CurveState)

        // invoke the utility function

        QuantLib::Matrix returnValue = QuantLib::SwapForwardMappings::coinitialSwapZedMatrix(
                CurveStateLibObj,
                DisplacementCpp);

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        matrixToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlCoinitialSwapZedMatrix: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlCotSwapToFwdAdapter(
        const ANY &ObjectId,
        const ANY &CoterminalModel,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string CoterminalModelCpp;
        calcToScalar(CoterminalModelCpp, CoterminalModel);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert object IDs into library objects

        OH_GET_REFERENCE(CoterminalModelLibObjPtr, CoterminalModelCpp,
            QuantLibAddin::MarketModel, QuantLib::MarketModel)

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlCotSwapToFwdAdapter(
                ObjectIdCpp,
                CoterminalModelCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::CotSwapToFwdAdapter(
                valueObject,
                CoterminalModelLibObjPtr,
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
            errorMsg << "ERROR: qlCotSwapToFwdAdapter: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlCoterminalSwapForwardJacobian(
        const ANY &CurveState,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string CurveStateCpp;
        calcToScalar(CurveStateCpp, CurveState);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(CurveStateLibObj, CurveStateCpp,
            QuantLibAddin::CurveState, QuantLib::CurveState)

        // invoke the utility function

        QuantLib::Matrix returnValue = QuantLib::SwapForwardMappings::coterminalSwapForwardJacobian(
                CurveStateLibObj);

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        matrixToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlCoterminalSwapForwardJacobian: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlCoterminalSwapZedMatrix(
        const ANY &CurveState,
        const ANY &Displacement,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string CurveStateCpp;
        calcToScalar(CurveStateCpp, CurveState);

        double DisplacementCpp;
        if(Displacement.hasValue()) 
            calcToScalar(DisplacementCpp, Displacement);
        else
            DisplacementCpp = 0.0;

        // convert object IDs into library objects

        OH_GET_UNDERLYING(CurveStateLibObj, CurveStateCpp,
            QuantLibAddin::CurveState, QuantLib::CurveState)

        // invoke the utility function

        QuantLib::Matrix returnValue = QuantLib::SwapForwardMappings::coterminalSwapZedMatrix(
                CurveStateLibObj,
                DisplacementCpp);

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        matrixToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlCoterminalSwapZedMatrix: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlFlatVol(
        const ANY &ObjectId,
        const SEQSEQ(ANY) &Volatilities,
        const ANY &Correlations,
        const ANY &EvolutionDescription,
        const ANY &Factors,
        const SEQSEQ(ANY) &InitialRates,
        const SEQSEQ(ANY) &Displacements,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::vector<double> VolatilitiesCpp;
        calcToVector(VolatilitiesCpp, Volatilities);

        std::string CorrelationsCpp;
        calcToScalar(CorrelationsCpp, Correlations);

        std::string EvolutionDescriptionCpp;
        calcToScalar(EvolutionDescriptionCpp, EvolutionDescription);

        long FactorsCpp;
        calcToScalar(FactorsCpp, Factors);

        std::vector<double> InitialRatesCpp;
        calcToVector(InitialRatesCpp, InitialRates);

        std::vector<double> DisplacementsCpp;
        calcToVector(DisplacementsCpp, Displacements);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert object IDs into library objects

        OH_GET_REFERENCE(CorrelationsLibObjPtr, CorrelationsCpp,
            QuantLibAddin::PiecewiseConstantCorrelation, QuantLib::PiecewiseConstantCorrelation)

        OH_GET_UNDERLYING(EvolutionDescriptionLibObj, EvolutionDescriptionCpp,
            QuantLibAddin::EvolutionDescription, QuantLib::EvolutionDescription)

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlFlatVol(
                ObjectIdCpp,
                VolatilitiesCpp,
                CorrelationsCpp,
                EvolutionDescriptionCpp,
                FactorsCpp,
                InitialRatesCpp,
                DisplacementsCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::FlatVol(
                valueObject,
                VolatilitiesCpp,
                CorrelationsLibObjPtr,
                EvolutionDescriptionLibObj,
                FactorsCpp,
                InitialRatesCpp,
                DisplacementsCpp,
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
            errorMsg << "ERROR: qlFlatVol: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlFlatVolFactory(
        const ANY &ObjectId,
        const ANY &LongTermCorr,
        const ANY &Beta,
        const SEQSEQ(ANY) &Times,
        const SEQSEQ(ANY) &Volatilities,
        const ANY &YieldCurve,
        const ANY &Displacement,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        double LongTermCorrCpp;
        calcToScalar(LongTermCorrCpp, LongTermCorr);

        double BetaCpp;
        calcToScalar(BetaCpp, Beta);

        std::vector<double> TimesCpp;
        calcToVector(TimesCpp, Times);

        std::vector<double> VolatilitiesCpp;
        calcToVector(VolatilitiesCpp, Volatilities);

        std::string YieldCurveCpp;
        calcToScalar(YieldCurveCpp, YieldCurve);

        double DisplacementCpp;
        if(Displacement.hasValue()) 
            calcToScalar(DisplacementCpp, Displacement);
        else
            DisplacementCpp = 0.0;

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert object IDs into library objects

        OH_GET_OBJECT_DEFAULT(YieldCurveCoerce, YieldCurveCpp, ObjectHandler::Object)
        QuantLib::Handle<QuantLib::YieldTermStructure> YieldCurveLibObj =
            QuantLibAddin::CoerceHandle<
                QuantLibAddin::YieldTermStructure,
                QuantLib::YieldTermStructure>()(
                    YieldCurveCoerce, QuantLib::Handle<QuantLib::YieldTermStructure>());

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlFlatVolFactory(
                ObjectIdCpp,
                LongTermCorrCpp,
                BetaCpp,
                TimesCpp,
                VolatilitiesCpp,
                YieldCurveCpp,
                DisplacementCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::FlatVolFactory(
                valueObject,
                LongTermCorrCpp,
                BetaCpp,
                TimesCpp,
                VolatilitiesCpp,
                YieldCurveLibObj,
                DisplacementCpp,
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
            errorMsg << "ERROR: qlFlatVolFactory: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlFwdPeriodAdapter(
        const ANY &ObjectId,
        const ANY &LargeModel,
        const ANY &Period,
        const ANY &Offset,
        const SEQSEQ(ANY) &Displacements,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string LargeModelCpp;
        calcToScalar(LargeModelCpp, LargeModel);

        long PeriodCpp;
        calcToScalar(PeriodCpp, Period);

        long OffsetCpp;
        calcToScalar(OffsetCpp, Offset);

        std::vector<double> DisplacementsCpp;
        calcToVector(DisplacementsCpp, Displacements);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Size PeriodLib;
        calcToScalar(PeriodLib, Period);

        QuantLib::Size OffsetLib;
        calcToScalar(OffsetLib, Offset);

        // convert object IDs into library objects

        OH_GET_REFERENCE(LargeModelLibObjPtr, LargeModelCpp,
            QuantLibAddin::MarketModel, QuantLib::MarketModel)

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlFwdPeriodAdapter(
                ObjectIdCpp,
                LargeModelCpp,
                PeriodCpp,
                OffsetCpp,
                DisplacementsCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::FwdPeriodAdapter(
                valueObject,
                LargeModelLibObjPtr,
                PeriodLib,
                OffsetLib,
                DisplacementsCpp,
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
            errorMsg << "ERROR: qlFwdPeriodAdapter: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlFwdToCotSwapAdapter(
        const ANY &ObjectId,
        const ANY &ForwardModel,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string ForwardModelCpp;
        calcToScalar(ForwardModelCpp, ForwardModel);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ForwardModelLibObjPtr, ForwardModelCpp,
            QuantLibAddin::MarketModel, QuantLib::MarketModel)

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlFwdToCotSwapAdapter(
                ObjectIdCpp,
                ForwardModelCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::FwdToCotSwapAdapter(
                valueObject,
                ForwardModelLibObjPtr,
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
            errorMsg << "ERROR: qlFwdToCotSwapAdapter: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlMarketModelCovariance(
        const ANY &ObjectId,
        const ANY &Index,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        long IndexCpp;
        calcToScalar(IndexCpp, Index);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Size IndexLib;
        calcToScalar(IndexLib, Index);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::MarketModel, QuantLib::MarketModel)

        // invoke the member function

        QuantLib::Matrix returnValue = ObjectIdLibObjPtr->covariance(
                IndexLib);

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        matrixToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlMarketModelCovariance: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlMarketModelDisplacements(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::MarketModel, QuantLib::MarketModel)

        // invoke the member function

        std::vector<double> returnValue = ObjectIdLibObjPtr->displacements();

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        vectorToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlMarketModelDisplacements: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlMarketModelInitialRates(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::MarketModel, QuantLib::MarketModel)

        // invoke the member function

        std::vector<double> returnValue = ObjectIdLibObjPtr->initialRates();

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        vectorToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlMarketModelInitialRates: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlMarketModelNumberOfFactors(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::MarketModel, QuantLib::MarketModel)

        // invoke the member function

        static long returnValue;
        returnValue = ObjectIdLibObjPtr->numberOfFactors();

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
            errorMsg << "ERROR: qlMarketModelNumberOfFactors: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlMarketModelNumberOfRates(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::MarketModel, QuantLib::MarketModel)

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
            errorMsg << "ERROR: qlMarketModelNumberOfRates: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlMarketModelNumberOfSteps(
        const ANY &ObjectId,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::MarketModel, QuantLib::MarketModel)

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
            errorMsg << "ERROR: qlMarketModelNumberOfSteps: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlMarketModelPseudoRoot(
        const ANY &ObjectId,
        const ANY &Index,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        long IndexCpp;
        calcToScalar(IndexCpp, Index);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Size IndexLib;
        calcToScalar(IndexLib, Index);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::MarketModel, QuantLib::MarketModel)

        // invoke the member function

        QuantLib::Matrix returnValue = ObjectIdLibObjPtr->pseudoRoot(
                IndexLib);

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        matrixToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlMarketModelPseudoRoot: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlMarketModelTimeDependentVolatility(
        const ANY &ObjectId,
        const ANY &Index,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        long IndexCpp;
        calcToScalar(IndexCpp, Index);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Size IndexLib;
        calcToScalar(IndexLib, Index);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::MarketModel, QuantLib::MarketModel)

        // invoke the member function

        std::vector<double> returnValue = ObjectIdLibObjPtr->timeDependentVolatility(
                IndexLib);

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        vectorToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlMarketModelTimeDependentVolatility: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlMarketModelTotalCovariance(
        const ANY &ObjectId,
        const ANY &Index,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        long IndexCpp;
        calcToScalar(IndexCpp, Index);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Size IndexLib;
        calcToScalar(IndexLib, Index);

        // convert object IDs into library objects

        OH_GET_REFERENCE(ObjectIdLibObjPtr, ObjectIdCpp,
            QuantLibAddin::MarketModel, QuantLib::MarketModel)

        // invoke the member function

        QuantLib::Matrix returnValue = ObjectIdLibObjPtr->totalCovariance(
                IndexLib);

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        matrixToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlMarketModelTotalCovariance: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlPseudoRootFacade(
        const ANY &ObjectId,
        const ANY &Calibrator,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string CalibratorCpp;
        calcToScalar(CalibratorCpp, Calibrator);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert object IDs into library objects

        OH_GET_REFERENCE(CalibratorLibObjPtr, CalibratorCpp,
            QuantLibAddin::CTSMMCapletCalibration, QuantLib::CTSMMCapletCalibration)

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlPseudoRootFacade(
                ObjectIdCpp,
                CalibratorCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::PseudoRootFacade(
                valueObject,
                CalibratorLibObjPtr,
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
            errorMsg << "ERROR: qlPseudoRootFacade: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlRateInstVolDifferences(
        const ANY &MarketModel1,
        const ANY &MarketModel2,
        const ANY &Index,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string MarketModel1Cpp;
        calcToScalar(MarketModel1Cpp, MarketModel1);

        std::string MarketModel2Cpp;
        calcToScalar(MarketModel2Cpp, MarketModel2);

        long IndexCpp;
        calcToScalar(IndexCpp, Index);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Size IndexLib;
        calcToScalar(IndexLib, Index);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(MarketModel1LibObj, MarketModel1Cpp,
            QuantLibAddin::MarketModel, QuantLib::MarketModel)

        OH_GET_UNDERLYING(MarketModel2LibObj, MarketModel2Cpp,
            QuantLibAddin::MarketModel, QuantLib::MarketModel)

        // invoke the utility function

        std::vector<QuantLib::Real> returnValue = QuantLibAddin::qlRateInstVolDifferences(
                MarketModel1LibObj,
                MarketModel2LibObj,
                IndexLib);

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        vectorToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlRateInstVolDifferences: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlRateVolDifferences(
        const ANY &MarketModel1,
        const ANY &MarketModel2,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string MarketModel1Cpp;
        calcToScalar(MarketModel1Cpp, MarketModel1);

        std::string MarketModel2Cpp;
        calcToScalar(MarketModel2Cpp, MarketModel2);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(MarketModel1LibObj, MarketModel1Cpp,
            QuantLibAddin::MarketModel, QuantLib::MarketModel)

        OH_GET_UNDERLYING(MarketModel2LibObj, MarketModel2Cpp,
            QuantLibAddin::MarketModel, QuantLib::MarketModel)

        // invoke the utility function

        std::vector<QuantLib::Real> returnValue = QuantLibAddin::qlRateVolDifferences(
                MarketModel1LibObj,
                MarketModel2LibObj);

        // convert and return the return value



        SEQSEQ(ANY) returnValueCalc;
        vectorToCalc(returnValueCalc, returnValue);
        return returnValueCalc;

    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlRateVolDifferences: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlSwapDerivative(
        const ANY &CurveState,
        const ANY &StartIndex,
        const ANY &EndIndex,
        const ANY &FwdRateIndex,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string CurveStateCpp;
        calcToScalar(CurveStateCpp, CurveState);

        long StartIndexCpp;
        calcToScalar(StartIndexCpp, StartIndex);

        long EndIndexCpp;
        calcToScalar(EndIndexCpp, EndIndex);

        long FwdRateIndexCpp;
        calcToScalar(FwdRateIndexCpp, FwdRateIndex);

        // convert input datatypes to QuantLib datatypes

        QuantLib::Size StartIndexLib;
        calcToScalar(StartIndexLib, StartIndex);

        QuantLib::Size EndIndexLib;
        calcToScalar(EndIndexLib, EndIndex);

        QuantLib::Size FwdRateIndexLib;
        calcToScalar(FwdRateIndexLib, FwdRateIndex);

        // convert object IDs into library objects

        OH_GET_UNDERLYING(CurveStateLibObj, CurveStateCpp,
            QuantLibAddin::CurveState, QuantLib::CurveState)

        // invoke the utility function

        QuantLib::Real returnValue = QuantLib::SwapForwardMappings::swapDerivative(
                CurveStateLibObj,
                StartIndexLib,
                EndIndexLib,
                FwdRateIndexLib);

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
            errorMsg << "ERROR: qlSwapDerivative: " << e.what(); 
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


