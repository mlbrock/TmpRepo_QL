
/*  
 Copyright (C) 2014 Jose Aparicio
 
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
#include <ql/experimental/credit/basket.hpp>
#include <qlo/credit.hpp>
#include <qlo/defaultbasket.hpp>
#include <qlo/basketlossmodels.hpp>
#include <qlo/valueobjects/vo_defaultbasket.hpp>

#include <qladdin.hpp>
#include <conversions.hpp>

SEQSEQ(ANY) SAL_CALL CalcAddins_impl::qlCreditBasket(
        const ANY &ObjectId,
        const SEQSEQ(ANY) &IssuerNames,
        const SEQSEQ(ANY) &Issuers,
        const SEQSEQ(ANY) &Notionals,
        const ANY &ReferenceDate,
        const ANY &AttachmentRatio,
        const ANY &DettachmentRatio,
        const sal_Int32 Amortizing,
        const sal_Int32 Permanent,
        const ANY &Trigger,
        const sal_Int32 Overwrite) throw(RuntimeException) {
    try {

        // convert input datatypes to C++ datatypes

        std::string ObjectIdCpp;
        calcToScalar(ObjectIdCpp, ObjectId);

        std::vector<std::string> IssuerNamesCpp;
        calcToVector(IssuerNamesCpp, IssuerNames);

        std::vector<std::string> IssuersCpp;
        calcToVector(IssuersCpp, Issuers);

        std::vector<double> NotionalsCpp;
        calcToVector(NotionalsCpp, Notionals);

        ObjectHandler::property_t ReferenceDateCpp;
        calcToScalar(ReferenceDateCpp, ReferenceDate);

        double AttachmentRatioCpp;
        calcToScalar(AttachmentRatioCpp, AttachmentRatio);

        double DettachmentRatioCpp;
        calcToScalar(DettachmentRatioCpp, DettachmentRatio);

        bool AmortizingCpp;
        calcToScalar(AmortizingCpp, Amortizing);

        bool PermanentCpp;
        calcToScalar(PermanentCpp, Permanent);

        // convert input datatypes to QuantLib datatypes

        std::vector<boost::shared_ptr<QuantLib::Issuer> > IssuersLibObjPtr =
            ObjectHandler::getLibraryObjectVector<QuantLibAddin::Issuer, QuantLib::Issuer>(IssuersCpp);

        QuantLib::Date ReferenceDateLib;
        if(!ReferenceDate.hasValue() and typeid(QuantLib::Date())==typeid(QuantLib::Date())) 
            ReferenceDateLib = QuantLib::Date();
        else
            calcToScalar(ReferenceDateLib, ReferenceDate);

        // Construct the Value Object

        boost::shared_ptr<ObjectHandler::ValueObject> valueObject(
            new QuantLibAddin::ValueObjects::qlCreditBasket(
                ObjectIdCpp,
                IssuerNamesCpp,
                IssuersCpp,
                NotionalsCpp,
                ReferenceDateCpp,
                AttachmentRatioCpp,
                DettachmentRatioCpp,
                AmortizingCpp,
                PermanentCpp));

        // Construct the Object
        
        boost::shared_ptr<ObjectHandler::Object> object(
            new QuantLibAddin::Basket(
                valueObject,
                IssuerNamesCpp,
                IssuersLibObjPtr,
                NotionalsCpp,
                ReferenceDateLib,
                AttachmentRatioCpp,
                DettachmentRatioCpp,
                AmortizingCpp,
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
            errorMsg << "ERROR: qlCreditBasket: " << e.what(); 
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


