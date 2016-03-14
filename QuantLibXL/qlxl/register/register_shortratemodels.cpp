
/*  
 Copyright (C) 2004, 2005, 2006, 2007, 2008 Eric Ehlers
 
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
//      C:/Users/erik/Documents/repos/reposit_old/quantlib-old/gensrc/gensrc/stubs/stub.excel.register.file

#include <xlsdk/xlsdkdefines.hpp>

// register functions in category Shortratemodels with Excel

void registerShortratemodels(const XLOPER &xDll) {

        Excel(xlfRegister, 0, 16, &xDll,
            // function code name
            TempStrNoSize("\x16""qlFuturesConvexityBias"),
            // parameter codes
            TempStrNoSize("\x08""EEEEEPP#"),
            // function display name
            TempStrNoSize("\x16""qlFuturesConvexityBias"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x22""FuturesPrice,T1,T2,Sigma,A,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\xAB""Returns Futures convexity bias (ForwardRate = FuturesImpliedRate - ConvexityBias) calculated as in G. Kirikos, D. Novak, 'Convexity Conundrums', Risk Magazine, March 1997."),
            // parameter descriptions
            TempStrNoSize("\x1B""Futures price (e.g. 94.56)."),
            TempStrNoSize("\x39""Maturity date of the futures contract in years(e.g. 5.0)."),
            TempStrNoSize("\x3E""Maturity of the underlying Libor deposit in years (e.g. 5.25)."),
            TempStrNoSize("\x23""Hull-White volatility (e.g. 0.015)."),
            TempStrNoSize("\x30""Hull-White mean reversion. Default value = 0.03."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 17, &xDll,
            // function code name
            TempStrNoSize("\x0B""qlHullWhite"),
            // parameter codes
            TempStrNoSize("\x09""CCCEEPPL#"),
            // function display name
            TempStrNoSize("\x0B""qlHullWhite"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x37""ObjectId,YieldCurve,A,Sigma,Permanent,Trigger,Overwrite"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x38""Construct an object of class HullWhite and return its id"),
            // parameter descriptions
            TempStrNoSize("\x1A""id of object to be created"),
            TempStrNoSize("\x1D""YieldTermStructure object ID."),
            TempStrNoSize("\x02""a."),
            TempStrNoSize("\x0B""volatility."),
            TempStrNoSize("\x1D""object permanent/nonpermanent"),
            TempStrNoSize("\x1B""dependency tracking trigger"),
            TempStrNoSize("\x10""overwrite flag  "));

        Excel(xlfRegister, 0, 20, &xDll,
            // function code name
            TempStrNoSize("\x09""qlModelG2"),
            // parameter codes
            TempStrNoSize("\x0C""CCCPPPPPPPL#"),
            // function display name
            TempStrNoSize("\x09""qlModelG2"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x49""ObjectId,YieldCurve,A,Sigma,B,Eta,Correlation,Permanent,Trigger,Overwrite"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x31""Construct an object of class G2 and return its id"),
            // parameter descriptions
            TempStrNoSize("\x1A""id of object to be created"),
            TempStrNoSize("\x1D""YieldTermStructure object ID."),
            TempStrNoSize("\x43""drift of x(t) dynamics with r(t)= x(t) + y(t). Default value = 0.1."),
            TempStrNoSize("\x49""volatility of x(t) dynamics with r(t)= x(t) + y(t). Default value = 0.01."),
            TempStrNoSize("\x43""drift of y(t) dynamics with r(t)= x(t) + y(t). Default value = 0.1."),
            TempStrNoSize("\x49""volatility of y(t) dynamics with r(t)= x(t) + y(t). Default value = 0.01."),
            TempStrNoSize("\x38""Correlation between x(t) and y(t) Default value = -0.75."),
            TempStrNoSize("\x1D""object permanent/nonpermanent"),
            TempStrNoSize("\x1B""dependency tracking trigger"),
            TempStrNoSize("\x10""overwrite flag  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x0A""qlModelG2A"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x0A""qlModelG2A"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x3B""returns the drift of x(t) dynamics with r(t) = x(t) + y(t)."),
            // parameter descriptions
            TempStrNoSize("\x22""id of existing QuantLib::G2 object"),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x0A""qlModelG2B"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x0A""qlModelG2B"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x3B""returns the drift of y(t) dynamics with r(t) = x(t) + y(t)."),
            // parameter descriptions
            TempStrNoSize("\x22""id of existing QuantLib::G2 object"),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x0C""qlModelG2eta"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x0C""qlModelG2eta"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x40""returns the volatility of y(t) dynamics with r(t) = x(t) + y(t)."),
            // parameter descriptions
            TempStrNoSize("\x22""id of existing QuantLib::G2 object"),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x0C""qlModelG2rho"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x0C""qlModelG2rho"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x46""returns the correlation between x(t) and y(t) with r(t) = x(t) + y(t)."),
            // parameter descriptions
            TempStrNoSize("\x22""id of existing QuantLib::G2 object"),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x0E""qlModelG2sigma"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x0E""qlModelG2sigma"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x40""returns the volatility of x(t) dynamics with r(t) = x(t) + y(t)."),
            // parameter descriptions
            TempStrNoSize("\x22""id of existing QuantLib::G2 object"),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 19, &xDll,
            // function code name
            TempStrNoSize("\x09""qlVasicek"),
            // parameter codes
            TempStrNoSize("\x0B""CCPPPPPPPL#"),
            // function display name
            TempStrNoSize("\x09""qlVasicek"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x38""ObjectId,R0,A,B,Sigma,Lambda,Permanent,Trigger,Overwrite"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x36""Construct an object of class Vasicek and return its id"),
            // parameter descriptions
            TempStrNoSize("\x1A""id of object to be created"),
            TempStrNoSize("\x24""initial value. Default value = 0.05."),
            TempStrNoSize("\x2A""mean reverting speed. Default value = 0.1."),
            TempStrNoSize("\x2D""short-rate limit value. Default value = 0.05."),
            TempStrNoSize("\x21""volatility. Default value = 0.01."),
            TempStrNoSize("\x22""risk premium. Default value = 0.0."),
            TempStrNoSize("\x1D""object permanent/nonpermanent"),
            TempStrNoSize("\x1B""dependency tracking trigger"),
            TempStrNoSize("\x10""overwrite flag  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x0A""qlVasicekA"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x0A""qlVasicekA"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x47""returns mean reverting speed a, with dr(t) = a(b-r(t))dt + sigma dW(t)."),
            // parameter descriptions
            TempStrNoSize("\x27""id of existing QuantLib::Vasicek object"),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x0A""qlVasicekB"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x0A""qlVasicekB"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x49""returns short-rate limit value b, with dr(t) = a(b-r(t))dt + sigma dW(t)."),
            // parameter descriptions
            TempStrNoSize("\x27""id of existing QuantLib::Vasicek object"),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x0F""qlVasicekLambda"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x0F""qlVasicekLambda"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x19""returns the risk premium."),
            // parameter descriptions
            TempStrNoSize("\x27""id of existing QuantLib::Vasicek object"),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x0E""qlVasicekSigma"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x0E""qlVasicekSigma"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x45""returns the volatility sigma, with dr(t) = a(b-r(t))dt + sigma dW(t)."),
            // parameter descriptions
            TempStrNoSize("\x27""id of existing QuantLib::Vasicek object"),
            TempStrNoSize("\x1D""dependency tracking trigger  "));



}

// unregister functions in category Shortratemodels with Excel

void unregisterShortratemodels(const XLOPER &xDll) {

    XLOPER xlRegID;

    // Unregister each function.  Due to a bug in Excel's C API this is a
    // two-step process.  Thanks to Laurent Longre for discovering the
    // workaround implemented here.

        Excel(xlfRegister, 0, 16, &xDll,
            // function code name
            TempStrNoSize("\x16""qlFuturesConvexityBias"),
            // parameter codes
            TempStrNoSize("\x08""EEEEEPP#"),
            // function display name
            TempStrNoSize("\x16""qlFuturesConvexityBias"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x22""FuturesPrice,T1,T2,Sigma,A,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\xAB""Returns Futures convexity bias (ForwardRate = FuturesImpliedRate - ConvexityBias) calculated as in G. Kirikos, D. Novak, 'Convexity Conundrums', Risk Magazine, March 1997."),
            // parameter descriptions
            TempStrNoSize("\x1B""Futures price (e.g. 94.56)."),
            TempStrNoSize("\x39""Maturity date of the futures contract in years(e.g. 5.0)."),
            TempStrNoSize("\x3E""Maturity of the underlying Libor deposit in years (e.g. 5.25)."),
            TempStrNoSize("\x23""Hull-White volatility (e.g. 0.015)."),
            TempStrNoSize("\x30""Hull-White mean reversion. Default value = 0.03."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x16""qlFuturesConvexityBias"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 17, &xDll,
            // function code name
            TempStrNoSize("\x0B""qlHullWhite"),
            // parameter codes
            TempStrNoSize("\x09""CCCEEPPL#"),
            // function display name
            TempStrNoSize("\x0B""qlHullWhite"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x37""ObjectId,YieldCurve,A,Sigma,Permanent,Trigger,Overwrite"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x38""Construct an object of class HullWhite and return its id"),
            // parameter descriptions
            TempStrNoSize("\x1A""id of object to be created"),
            TempStrNoSize("\x1D""YieldTermStructure object ID."),
            TempStrNoSize("\x02""a."),
            TempStrNoSize("\x0B""volatility."),
            TempStrNoSize("\x1D""object permanent/nonpermanent"),
            TempStrNoSize("\x1B""dependency tracking trigger"),
            TempStrNoSize("\x10""overwrite flag  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x0B""qlHullWhite"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 20, &xDll,
            // function code name
            TempStrNoSize("\x09""qlModelG2"),
            // parameter codes
            TempStrNoSize("\x0C""CCCPPPPPPPL#"),
            // function display name
            TempStrNoSize("\x09""qlModelG2"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x49""ObjectId,YieldCurve,A,Sigma,B,Eta,Correlation,Permanent,Trigger,Overwrite"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x31""Construct an object of class G2 and return its id"),
            // parameter descriptions
            TempStrNoSize("\x1A""id of object to be created"),
            TempStrNoSize("\x1D""YieldTermStructure object ID."),
            TempStrNoSize("\x43""drift of x(t) dynamics with r(t)= x(t) + y(t). Default value = 0.1."),
            TempStrNoSize("\x49""volatility of x(t) dynamics with r(t)= x(t) + y(t). Default value = 0.01."),
            TempStrNoSize("\x43""drift of y(t) dynamics with r(t)= x(t) + y(t). Default value = 0.1."),
            TempStrNoSize("\x49""volatility of y(t) dynamics with r(t)= x(t) + y(t). Default value = 0.01."),
            TempStrNoSize("\x38""Correlation between x(t) and y(t) Default value = -0.75."),
            TempStrNoSize("\x1D""object permanent/nonpermanent"),
            TempStrNoSize("\x1B""dependency tracking trigger"),
            TempStrNoSize("\x10""overwrite flag  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x09""qlModelG2"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x0A""qlModelG2A"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x0A""qlModelG2A"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x3B""returns the drift of x(t) dynamics with r(t) = x(t) + y(t)."),
            // parameter descriptions
            TempStrNoSize("\x22""id of existing QuantLib::G2 object"),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x0A""qlModelG2A"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x0A""qlModelG2B"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x0A""qlModelG2B"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x3B""returns the drift of y(t) dynamics with r(t) = x(t) + y(t)."),
            // parameter descriptions
            TempStrNoSize("\x22""id of existing QuantLib::G2 object"),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x0A""qlModelG2B"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x0C""qlModelG2eta"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x0C""qlModelG2eta"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x40""returns the volatility of y(t) dynamics with r(t) = x(t) + y(t)."),
            // parameter descriptions
            TempStrNoSize("\x22""id of existing QuantLib::G2 object"),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x0C""qlModelG2eta"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x0C""qlModelG2rho"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x0C""qlModelG2rho"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x46""returns the correlation between x(t) and y(t) with r(t) = x(t) + y(t)."),
            // parameter descriptions
            TempStrNoSize("\x22""id of existing QuantLib::G2 object"),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x0C""qlModelG2rho"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x0E""qlModelG2sigma"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x0E""qlModelG2sigma"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x40""returns the volatility of x(t) dynamics with r(t) = x(t) + y(t)."),
            // parameter descriptions
            TempStrNoSize("\x22""id of existing QuantLib::G2 object"),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x0E""qlModelG2sigma"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 19, &xDll,
            // function code name
            TempStrNoSize("\x09""qlVasicek"),
            // parameter codes
            TempStrNoSize("\x0B""CCPPPPPPPL#"),
            // function display name
            TempStrNoSize("\x09""qlVasicek"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x38""ObjectId,R0,A,B,Sigma,Lambda,Permanent,Trigger,Overwrite"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x36""Construct an object of class Vasicek and return its id"),
            // parameter descriptions
            TempStrNoSize("\x1A""id of object to be created"),
            TempStrNoSize("\x24""initial value. Default value = 0.05."),
            TempStrNoSize("\x2A""mean reverting speed. Default value = 0.1."),
            TempStrNoSize("\x2D""short-rate limit value. Default value = 0.05."),
            TempStrNoSize("\x21""volatility. Default value = 0.01."),
            TempStrNoSize("\x22""risk premium. Default value = 0.0."),
            TempStrNoSize("\x1D""object permanent/nonpermanent"),
            TempStrNoSize("\x1B""dependency tracking trigger"),
            TempStrNoSize("\x10""overwrite flag  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x09""qlVasicek"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x0A""qlVasicekA"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x0A""qlVasicekA"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x47""returns mean reverting speed a, with dr(t) = a(b-r(t))dt + sigma dW(t)."),
            // parameter descriptions
            TempStrNoSize("\x27""id of existing QuantLib::Vasicek object"),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x0A""qlVasicekA"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x0A""qlVasicekB"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x0A""qlVasicekB"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x49""returns short-rate limit value b, with dr(t) = a(b-r(t))dt + sigma dW(t)."),
            // parameter descriptions
            TempStrNoSize("\x27""id of existing QuantLib::Vasicek object"),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x0A""qlVasicekB"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x0F""qlVasicekLambda"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x0F""qlVasicekLambda"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x19""returns the risk premium."),
            // parameter descriptions
            TempStrNoSize("\x27""id of existing QuantLib::Vasicek object"),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x0F""qlVasicekLambda"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x0E""qlVasicekSigma"),
            // parameter codes
            TempStrNoSize("\x04""PCP#"),
            // function display name
            TempStrNoSize("\x0E""qlVasicekSigma"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x10""ObjectId,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x45""returns the volatility sigma, with dr(t) = a(b-r(t))dt + sigma dW(t)."),
            // parameter descriptions
            TempStrNoSize("\x27""id of existing QuantLib::Vasicek object"),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x0E""qlVasicekSigma"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);



}

