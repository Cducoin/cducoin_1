// Copyright (c) 2021 The Cducoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef CDUCOIN_WALLET_RECEIVE_H
#define CDUCOIN_WALLET_RECEIVE_H

#include <amount.h>
#include <wallet/ismine.h>
#include <wallet/transaction.h>
#include <wallet/wallet.h>

struct COutputEntry
{
    CTxDestination destination;
    CAmount amount;
    int vout;
};

#endif // CDUCOIN_WALLET_RECEIVE_H
