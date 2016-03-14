
/*  
 Copyright (C) 2006, 2007, 2008, 2010 Ferdinando Ametrano
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
//      gensrc/gensrc/stubs/stub.calc.includes

#include <oh/utilities.hpp>
#include <oh/ohdefines.hpp>
#include <qlo/qladdindefines.hpp>
#include <qlo/enumerations/factories/all.hpp>
#include <qlo/conversions/all.hpp>
#include <oh/enumerations/typefactory.hpp>
#include <qlo/interpolation.hpp>
#include <qlo/interpolation2D.hpp>
#include <qlo/optimization.hpp>
#include <ql/math/interpolations/sabrinterpolation.hpp>
#include <ql/math/interpolations/abcdinterpolation.hpp>
#include <ql/math/interpolations/interpolation2d.hpp>
#include <qlo/valueobjects/vo_interpolation.hpp>
#include <qlo/loop/loop_interpolation.hpp>
#include <loop.hpp>
#include <qladdin.hpp>
#include <conversions.hpp>

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlCubicInterpolation(
        const ANY &ObjectId,
        const SEQSEQ(ANY) &XArray,
        const SEQSEQ(ANY) &YArray,
        const ANY &DerApprox,
        const sal_Int32 Monotonic,
        const ANY &LeftConditionType,
        const ANY &LeftConditionValue,
        const ANY &RightConditionType,
        const ANY &RightConditionValue,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::vector<double> XArrayCpp;
        calcToVector(XArrayCpp, XArray);

        std::vector<ObjectHandler::property_t> YArrayCpp;
        calcToVector(YArrayCpp, YArray);

        std::string DerApproxCpp;
        if(DerApprox.hasValue()) 
            calcToScalar(DerApproxCpp, DerApprox);
        else
            DerApproxCpp = "Kruger";

        bool MonotonicCpp;
        calcToScalar(MonotonicCpp, Monotonic);

        std::string LeftConditionTypeCpp;
        if(LeftConditionType.hasValue()) 
            calcToScalar(LeftConditionTypeCpp, LeftConditionType);
        else
            LeftConditionTypeCpp = "SecondDerivative";

        double LeftConditionValueCpp;
        if(LeftConditionValue.hasValue()) 
            calcToScalar(LeftConditionValueCpp, LeftConditionValue);
        else
            LeftConditionValueCpp = 0.0;

        std::string RightConditionTypeCpp;
        if(RightConditionType.hasValue()) 
            calcToScalar(RightConditionTypeCpp, RightConditionType);
        else
            RightConditionTypeCpp = "SecondDerivative";

        double RightConditionValueCpp;
        if(RightConditionValue.hasValue()) 
            calcToScalar(RightConditionValueCpp, RightConditionValue);
        else
            RightConditionValueCpp = 0.0;

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        std::vector<QuantLib::Real> XArrayLib;
        calcToVector(XArrayLib, XArray);

        std::vector<QuantLib::Handle<QuantLib::Quote> > YArrayLibObj =
            ObjectHandler::vector::convert2<QuantLib::Handle<QuantLib::Quote> >(YArrayCpp, "YArray");

        QuantLib::Real LeftConditionValueLib;
        calcToScalar(LeftConditionValueLib, LeftConditionValue);

        QuantLib::Real RightConditionValueLib;
        calcToScalar(RightConditionValueLib, RightConditionValue);

        // convert input datatypes to QuantLib enumerated datatypes

        QuantLib::CubicInterpolation::DerivativeApprox DerApproxEnum =
            ObjectHandler::Create<QuantLib::CubicInterpolation::DerivativeApprox>()(DerApproxCpp);

        QuantLib::CubicInterpolation::BoundaryCondition LeftConditionTypeEnum =
            ObjectHandler::Create<QuantLib::CubicInterpolation::BoundaryCondition>()(LeftConditionTypeCpp);

        QuantLib::CubicInterpolation::BoundaryCondition RightConditionTypeEnum =
            ObjectHandler::Create<QuantLib::CubicInterpolation::BoundaryCondition>()(RightConditionTypeCpp);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlCubicInterpolation(
                ObjectIdCpp,
                XArrayCpp,
                YArrayCpp,
                DerApproxCpp,
                MonotonicCpp,
                LeftConditionTypeCpp,
                LeftConditionValueCpp,
                RightConditionTypeCpp,
                RightConditionValueCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::CubicInterpolation(
                valueObject,
                XArrayLib,
                YArrayLibObj,
                DerApproxEnum,
                MonotonicCpp,
                LeftConditionTypeEnum,
                LeftConditionValueLib,
                RightConditionTypeEnum,
                RightConditionValueLib,
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
            errorMsg << "ERROR: qlCubicInterpolation: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlInterpolation(
        const ANY &ObjectId,
        const ANY &InterpolationType,
        const SEQSEQ(ANY) &XArray,
        const SEQSEQ(ANY) &YArray,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::string InterpolationTypeCpp;
        if(InterpolationType.hasValue()) 
            calcToScalar(InterpolationTypeCpp, InterpolationType);
        else
            InterpolationTypeCpp = "MonotonicNaturalCubicSpline";

        std::vector<double> XArrayCpp;
        calcToVector(XArrayCpp, XArray);

        std::vector<ObjectHandler::property_t> YArrayCpp;
        calcToVector(YArrayCpp, YArray);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        std::vector<QuantLib::Real> XArrayLib;
        calcToVector(XArrayLib, XArray);

        std::vector<QuantLib::Handle<QuantLib::Quote> > YArrayLibObj =
            ObjectHandler::vector::convert2<QuantLib::Handle<QuantLib::Quote> >(YArrayCpp, "YArray");

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlInterpolation(
                ObjectIdCpp,
                InterpolationTypeCpp,
                XArrayCpp,
                YArrayCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::GenericInterp(
                valueObject,
                InterpolationTypeCpp,
                XArrayLib,
                YArrayLibObj,
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
            errorMsg << "ERROR: qlInterpolation: " << e.what(); 
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

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlInterpolationInterpolate(
        const ANY &ObjectId,
        const SEQSEQ(ANY) &XValues,
        const sal_Int32 AllowExtrapolation,
        const ANY &Trigger) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        bool AllowExtrapolationCpp;
        calcToScalar(AllowExtrapolationCpp, AllowExtrapolation);

        // convert input datatypes to QuantLib datatypes

        std::vector<QuantLib::Real> XValuesLib;
        calcToVector(XValuesLib, XValues);

        // convert object IDs into library objects

        OH_GET_OBJECT(ObjectIdObjPtr, ObjectIdCpp, QuantLibAddin::Interpolation)

        // loop on the input parameter and populate the return vector

        SEQSEQ(ANY) returnValue;

        QuantLibAddin::qlInterpolationInterpolateBind bindObject = 
            boost::bind((QuantLibAddin::qlInterpolationInterpolateSignature)
                    &QuantLibAddin::Interpolation::operator(), 
                ObjectIdObjPtr,
                _1,
                AllowExtrapolationCpp);
                    
        {
            returnValue.realloc(XValuesLib.size());
            for (unsigned int i=0; i<XValuesLib.size(); ++i) {
                SEQ(ANY) s(1);
                scalarToCalc(s[0], bindObject( XValuesLib[i] ) );
                returnValue[i] = s;
            }
        }
     	  
        /* ObjectHandler::loop
            <QuantLibAddin::qlInterpolationInterpolateBind, QuantLib::Real, QuantLib::Real>
            (functionCall, bindObject, XValuesLib, returnValue); */



        return returnValue;
    } catch (const std::exception &e) {
        do { 
            std::ostringstream errorMsg; 
            errorMsg << "ERROR: qlInterpolationInterpolate: " << e.what(); 
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


