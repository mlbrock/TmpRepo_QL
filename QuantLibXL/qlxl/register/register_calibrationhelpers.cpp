
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

// register functions in category Calibrationhelpers with Excel

void registerCalibrationhelpers(const XLOPER &xDll) {

        Excel(xlfRegister, 0, 17, &xDll,
            // function code name
            TempStrNoSize("\x24""qlCalibrationHelperImpliedVolatility"),
            // parameter codes
            TempStrNoSize("\x09""ECEENEEP#"),
            // function display name
            TempStrNoSize("\x24""qlCalibrationHelperImpliedVolatility"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x42""ObjectId,TargetValue,Accuracy,MaxEvaluations,MinVol,MaxVol,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x3B""Set the priging engine for the given SwaptionHelper object."),
            // parameter descriptions
            TempStrNoSize("\x31""id of existing QuantLib::CalibrationHelper object"),
            TempStrNoSize("\x0D""target value."),
            TempStrNoSize("\x09""accuracy."),
            TempStrNoSize("\x10""max evaluations."),
            TempStrNoSize("\x08""min vol."),
            TempStrNoSize("\x08""max vol."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 13, &xDll,
            // function code name
            TempStrNoSize("\x23""qlCalibrationHelperSetPricingEngine"),
            // parameter codes
            TempStrNoSize("\x05""LCCP#"),
            // function display name
            TempStrNoSize("\x23""qlCalibrationHelperSetPricingEngine"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x1E""ObjectId,PricingEngine,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x3B""Set the priging engine for the given SwaptionHelper object."),
            // parameter descriptions
            TempStrNoSize("\x31""id of existing QuantLib::CalibrationHelper object"),
            TempStrNoSize("\x18""PricingEngine object ID."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 18, &xDll,
            // function code name
            TempStrNoSize("\x12""qlModelG2Calibrate"),
            // parameter codes
            TempStrNoSize("\x0A""LCPCCCPPP#"),
            // function display name
            TempStrNoSize("\x12""qlModelG2Calibrate"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x54""ObjectId,CalibrationHelpers,Method,EndCriteria,Constraint,Weights,FixedCoeff,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x12""calibrate a model."),
            // parameter descriptions
            TempStrNoSize("\x22""id of existing QuantLib::G2 object"),
            TempStrNoSize("\x1E""vector of calibration-helpers."),
            TempStrNoSize("\x1D""OptimizationMethod object ID."),
            TempStrNoSize("\x16""EndCriteria object ID."),
            TempStrNoSize("\x0B""Constraint."),
            TempStrNoSize("\x1A""weights. Default value = ."),
            TempStrNoSize("\x69""TRUE if the i-th coefficient must be kept fixed in later calibrations, FALSE otherwise. Default value = ."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 18, &xDll,
            // function code name
            TempStrNoSize("\x1F""qlOneFactorAffineModelCalibrate"),
            // parameter codes
            TempStrNoSize("\x0A""LCPCCCPPP#"),
            // function display name
            TempStrNoSize("\x1F""qlOneFactorAffineModelCalibrate"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x54""ObjectId,CalibrationHelpers,Method,EndCriteria,Constraint,Weights,FixedCoeff,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x12""calibrate a model."),
            // parameter descriptions
            TempStrNoSize("\x34""id of existing QuantLib::OneFactorAffineModel object"),
            TempStrNoSize("\x1E""vector of calibration-helpers."),
            TempStrNoSize("\x1D""OptimizationMethod object ID."),
            TempStrNoSize("\x16""EndCriteria object ID."),
            TempStrNoSize("\x0B""Constraint."),
            TempStrNoSize("\x1A""weights. Default value = ."),
            TempStrNoSize("\x69""TRUE if the i-th coefficient must be kept fixed in later calibrations, FALSE otherwise. Default value = ."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel(xlfRegister, 0, 22, &xDll,
            // function code name
            TempStrNoSize("\x10""qlSwaptionHelper"),
            // parameter codes
            TempStrNoSize("\x0E""CCCCPCCCCCPPL#"),
            // function display name
            TempStrNoSize("\x10""qlSwaptionHelper"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x8E""ObjectId,OptionTenor,Length,Volatility,IborIndex,FixedLegTenor,FixedLegDayCounter,FloatingLegDayCounter,YieldCurve,Permanent,Trigger,Overwrite"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""1"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x3D""Construct an object of class SwaptionHelper and return its id"),
            // parameter descriptions
            TempStrNoSize("\x1A""id of object to be created"),
            TempStrNoSize("\x23""option tenor as Period (e.g. '5Y')."),
            TempStrNoSize("\x0E""option length."),
            TempStrNoSize("\x11""volatility quote."),
            TempStrNoSize("\x14""IborIndex object ID."),
            TempStrNoSize("\x10""fixed leg tenor."),
            TempStrNoSize("\x16""fixed leg day-counter."),
            TempStrNoSize("\x19""floating leg day-counter."),
            TempStrNoSize("\x1D""YieldTermStructure object ID."),
            TempStrNoSize("\x1D""object permanent/nonpermanent"),
            TempStrNoSize("\x1B""dependency tracking trigger"),
            TempStrNoSize("\x10""overwrite flag  "));

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x1A""qlSwaptionHelperModelValue"),
            // parameter codes
            TempStrNoSize("\x04""ECP#"),
            // function display name
            TempStrNoSize("\x1A""qlSwaptionHelperModelValue"),
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
            TempStrNoSize("\x3B""Set the priging engine for the given SwaptionHelper object."),
            // parameter descriptions
            TempStrNoSize("\x2E""id of existing QuantLib::SwaptionHelper object"),
            TempStrNoSize("\x1D""dependency tracking trigger  "));



}

// unregister functions in category Calibrationhelpers with Excel

void unregisterCalibrationhelpers(const XLOPER &xDll) {

    XLOPER xlRegID;

    // Unregister each function.  Due to a bug in Excel's C API this is a
    // two-step process.  Thanks to Laurent Longre for discovering the
    // workaround implemented here.

        Excel(xlfRegister, 0, 17, &xDll,
            // function code name
            TempStrNoSize("\x24""qlCalibrationHelperImpliedVolatility"),
            // parameter codes
            TempStrNoSize("\x09""ECEENEEP#"),
            // function display name
            TempStrNoSize("\x24""qlCalibrationHelperImpliedVolatility"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x42""ObjectId,TargetValue,Accuracy,MaxEvaluations,MinVol,MaxVol,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x3B""Set the priging engine for the given SwaptionHelper object."),
            // parameter descriptions
            TempStrNoSize("\x31""id of existing QuantLib::CalibrationHelper object"),
            TempStrNoSize("\x0D""target value."),
            TempStrNoSize("\x09""accuracy."),
            TempStrNoSize("\x10""max evaluations."),
            TempStrNoSize("\x08""min vol."),
            TempStrNoSize("\x08""max vol."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x24""qlCalibrationHelperImpliedVolatility"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 13, &xDll,
            // function code name
            TempStrNoSize("\x23""qlCalibrationHelperSetPricingEngine"),
            // parameter codes
            TempStrNoSize("\x05""LCCP#"),
            // function display name
            TempStrNoSize("\x23""qlCalibrationHelperSetPricingEngine"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x1E""ObjectId,PricingEngine,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x3B""Set the priging engine for the given SwaptionHelper object."),
            // parameter descriptions
            TempStrNoSize("\x31""id of existing QuantLib::CalibrationHelper object"),
            TempStrNoSize("\x18""PricingEngine object ID."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x23""qlCalibrationHelperSetPricingEngine"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 18, &xDll,
            // function code name
            TempStrNoSize("\x12""qlModelG2Calibrate"),
            // parameter codes
            TempStrNoSize("\x0A""LCPCCCPPP#"),
            // function display name
            TempStrNoSize("\x12""qlModelG2Calibrate"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x54""ObjectId,CalibrationHelpers,Method,EndCriteria,Constraint,Weights,FixedCoeff,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x12""calibrate a model."),
            // parameter descriptions
            TempStrNoSize("\x22""id of existing QuantLib::G2 object"),
            TempStrNoSize("\x1E""vector of calibration-helpers."),
            TempStrNoSize("\x1D""OptimizationMethod object ID."),
            TempStrNoSize("\x16""EndCriteria object ID."),
            TempStrNoSize("\x0B""Constraint."),
            TempStrNoSize("\x1A""weights. Default value = ."),
            TempStrNoSize("\x69""TRUE if the i-th coefficient must be kept fixed in later calibrations, FALSE otherwise. Default value = ."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x12""qlModelG2Calibrate"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 18, &xDll,
            // function code name
            TempStrNoSize("\x1F""qlOneFactorAffineModelCalibrate"),
            // parameter codes
            TempStrNoSize("\x0A""LCPCCCPPP#"),
            // function display name
            TempStrNoSize("\x1F""qlOneFactorAffineModelCalibrate"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x54""ObjectId,CalibrationHelpers,Method,EndCriteria,Constraint,Weights,FixedCoeff,Trigger"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x12""calibrate a model."),
            // parameter descriptions
            TempStrNoSize("\x34""id of existing QuantLib::OneFactorAffineModel object"),
            TempStrNoSize("\x1E""vector of calibration-helpers."),
            TempStrNoSize("\x1D""OptimizationMethod object ID."),
            TempStrNoSize("\x16""EndCriteria object ID."),
            TempStrNoSize("\x0B""Constraint."),
            TempStrNoSize("\x1A""weights. Default value = ."),
            TempStrNoSize("\x69""TRUE if the i-th coefficient must be kept fixed in later calibrations, FALSE otherwise. Default value = ."),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x1F""qlOneFactorAffineModelCalibrate"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 22, &xDll,
            // function code name
            TempStrNoSize("\x10""qlSwaptionHelper"),
            // parameter codes
            TempStrNoSize("\x0E""CCCCPCCCCCPPL#"),
            // function display name
            TempStrNoSize("\x10""qlSwaptionHelper"),
            // comma-delimited list of parameter names
            TempStrNoSize("\x8E""ObjectId,OptionTenor,Length,Volatility,IborIndex,FixedLegTenor,FixedLegDayCounter,FloatingLegDayCounter,YieldCurve,Permanent,Trigger,Overwrite"),
            // function type (0 = hidden, 1 = worksheet)
            TempStrNoSize("\x01""0"),
            // function category
            TempStrNoSize("\x14""QuantLib - Financial"),
            // shortcut text (command macros only)
            TempStrNoSize("\x00"""),
            // path to help file
            TempStrNoSize("\x00"""),
            // function description
            TempStrNoSize("\x3D""Construct an object of class SwaptionHelper and return its id"),
            // parameter descriptions
            TempStrNoSize("\x1A""id of object to be created"),
            TempStrNoSize("\x23""option tenor as Period (e.g. '5Y')."),
            TempStrNoSize("\x0E""option length."),
            TempStrNoSize("\x11""volatility quote."),
            TempStrNoSize("\x14""IborIndex object ID."),
            TempStrNoSize("\x10""fixed leg tenor."),
            TempStrNoSize("\x16""fixed leg day-counter."),
            TempStrNoSize("\x19""floating leg day-counter."),
            TempStrNoSize("\x1D""YieldTermStructure object ID."),
            TempStrNoSize("\x1D""object permanent/nonpermanent"),
            TempStrNoSize("\x1B""dependency tracking trigger"),
            TempStrNoSize("\x10""overwrite flag  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x10""qlSwaptionHelper"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);

        Excel(xlfRegister, 0, 12, &xDll,
            // function code name
            TempStrNoSize("\x1A""qlSwaptionHelperModelValue"),
            // parameter codes
            TempStrNoSize("\x04""ECP#"),
            // function display name
            TempStrNoSize("\x1A""qlSwaptionHelperModelValue"),
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
            TempStrNoSize("\x3B""Set the priging engine for the given SwaptionHelper object."),
            // parameter descriptions
            TempStrNoSize("\x2E""id of existing QuantLib::SwaptionHelper object"),
            TempStrNoSize("\x1D""dependency tracking trigger  "));

        Excel4(xlfRegisterId, &xlRegID, 2, &xDll,
            TempStrNoSize("\x1A""qlSwaptionHelperModelValue"));
        Excel4(xlfUnregister, 0, 1, &xlRegID);



}

