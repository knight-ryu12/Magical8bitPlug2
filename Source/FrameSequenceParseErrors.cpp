/*
  ==============================================================================

    FrameSequenceParseErrors.cpp
    Created: 11 Dec 2019 7:16:17pm
    Author:  除村 武志

  ==============================================================================
*/

#include "FrameSequenceParseErrors.h"

String getParseErrorString (ParseError err, int minValue, int maxValue)
{
    switch (err)
    {
        case kParseErrorDuplicatedReleaseDelimiter:
            return TRANS ("You cannot use \"|\" more than once");
            break;

        case kParseErrorDuplicatedOpenBracket:
            return TRANS ("You cannot use \"[\" more than once");
            break;

        case kParseErrorDuplicatedCloseBracket:
            return TRANS ("You cannot use \"]\" more than once");
            break;

        case kParseErrorRepeatingInReleaseBlock:
            return TRANS ("You cannot use repeat in release phase");
            break;

        case kParseErrorUnmatchingOpenBracket:
            return TRANS ("Unmatching \"[\"");
            break;

        case kParseErrorUnmatchingCloseBracket:
            return TRANS ("Unmatching \"]\"");
            break;

        case kParseErrorUnmatchingBracketNumber:
            return TRANS ("Number of brackets not matching");
            break;

        case kParseErrorMissingSlopeValueDelimiter:
            return TRANS ("\"to\" must be speccified in slope description");
            break;

        case kParseErrorMissingSlopeLengthDelimiter:
            return TRANS ("\"in\" must be speccified in slope description");
            break;

        case kParseErrorMissingSlopeInitialValue:
            return TRANS ("Missing initial value before \"to\"");
            break;

        case kParseErrorMissingSlopeFinalValue:
            return TRANS ("Missing destination value before \"in\"");
            break;

        case kParseErrorNotANumber:
            return TRANS ("Number parse failed.");
            break;

        case kParseErrorValueOutOfRange:
            return String::formatted (TRANS ("Value should be between %d and %d."), minValue, maxValue);
            break;

        case kParseErrorFrameLengthTooShort:
            return TRANS ("Frame count should be more than 2");
            break;

        case kParseErrorMissingValueForRepeatDelimiter:
            return TRANS ("Operator x should be followed by a number.");
            break;

        case kParseErrorMissingFrameCountForRepeatDelimiter:
            return TRANS ("A number should be specified after operator x.");
            break;

        default:
            return "";
    }
}
