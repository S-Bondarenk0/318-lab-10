#ifndef BOOLEAN_MODULE_H
#define BOOLEAN_MODULE_H

struct BoolCheck {
    int A, B;
    bool result;

    bool InputAndValidate();
    void Compute();
    void Print();
};

#endif
