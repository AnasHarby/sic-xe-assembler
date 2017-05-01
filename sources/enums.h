//
// Created by Mohammed Abdelbarry on 01-May-17.
//

#ifndef PROJECT_ENUMS_H
#define PROJECT_ENUMS_H

enum Label {
    NONE,
    OPTIONAL,
    MUST
};
enum Operand {
    NONE,
    OPTIONAL,
    MUST
};
enum OperandType {
    REGISTER,
    ADDRESS
};
enum InstructionFormat {
    ONE,
    TWO,
    THREE,
    FOUR
};
#endif //PROJECT_ENUMS_H
