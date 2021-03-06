// Copyright (c) 2011-2015 The Cryptonote developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include "cryptonote_core/cryptonote_basic.h"
#include "cryptonote_core/cryptonote_format_utils.h"

#include "single_tx_test_base.h"

class test_is_out_to_acc : public single_tx_test_base
{
public:
  static const size_t loop_count = 1000;

  bool test()
  {
    const cryptonote::TransactionOutputToKey& tx_out = boost::get<cryptonote::TransactionOutputToKey>(m_tx.vout[0].target);
    return cryptonote::is_out_to_acc(m_bob.get_keys(), tx_out, m_tx_pub_key, 0);
  }
};
