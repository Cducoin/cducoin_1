// Copyright (c) 2011-2020 The Cducoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef CDUCOIN_QT_CDUCOINADDRESSVALIDATOR_H
#define CDUCOIN_QT_CDUCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class CducoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CducoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** Cducoin address widget validator, checks for a valid cducoin address.
 */
class CducoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CducoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // CDUCOIN_QT_CDUCOINADDRESSVALIDATOR_H
