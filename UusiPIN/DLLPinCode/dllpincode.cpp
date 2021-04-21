#include "dllpincode.h"


void DLLPinCode::PINInterface()
{
    objectPINDialog = new PINDialog;
    objectPINDialog -> show();
    objectPINDialog -> exec();

    PINValue = objectPINDialog -> returnPIN();

    delete objectPINDialog;
    objectPINDialog = NULL;

    qDebug() << "DLLPINCODE suljettu";
}

QString DLLPinCode::returnPINValue()
{
    return PINValue;
}

