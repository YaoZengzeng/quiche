// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef QUICHE_QUIC_CORE_CRYPTO_QUIC_CRYPTO_PROOF_H_
#define QUICHE_QUIC_CORE_CRYPTO_QUIC_CRYPTO_PROOF_H_

#include "net/third_party/quiche/src/quic/platform/api/quic_export.h"
#include "net/third_party/quiche/src/quic/platform/api/quic_string.h"

namespace quic {

// Contains the crypto-related data provided by ProofSource
struct QUIC_EXPORT_PRIVATE QuicCryptoProof {
  QuicCryptoProof();

  // Signature generated by ProofSource
  std::string signature;
  // SCTList (RFC6962) to be sent to the client, if it supports receiving it.
  std::string leaf_cert_scts;
  // Should the Expect-CT header be sent on the connection where the
  // certificate is used.
  bool send_expect_ct_header;
};

}  // namespace quic

#endif  // QUICHE_QUIC_CORE_CRYPTO_QUIC_CRYPTO_PROOF_H_
