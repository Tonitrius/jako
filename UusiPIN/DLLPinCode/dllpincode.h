#ifndef DLLPINCODE_H
#define DLLPINCODE_H

#include "DLLPinCode_global.h"
#include "pindialog.h"
#include <QString>
#include <QDebug>

class DLLPINCODE_EXPORT DLLPinCode
{

public:
    void PINInterface();
    QString returnPINValue();

private:
    PINDialog* objectPINDialog;
    QString PINValue;
};

#endif // DLLPINCODE_H
