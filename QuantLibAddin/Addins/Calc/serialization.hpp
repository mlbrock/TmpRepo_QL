
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
//      gensrc/gensrc/stubs/stub.calc.category

#ifndef ql_calc_serialization_hpp
#define ql_calc_serialization_hpp

    SEQSEQ(ANY) SAL_CALL ohObjectLoad(
        const ANY &Directory,
        const ANY &Pattern,
        const sal_Int32 Recurse,
        const sal_Int32 Overwrite,
        const ANY &Trigger) throw(RuntimeException);

    SEQSEQ(ANY) SAL_CALL ohObjectSave(
        const SEQSEQ(ANY) &ObjectList,
        const ANY &Filename,
        const sal_Int32 Overwrite,
        const sal_Int32 IncludeGroups,
        const ANY &Trigger) throw(RuntimeException);



#endif

