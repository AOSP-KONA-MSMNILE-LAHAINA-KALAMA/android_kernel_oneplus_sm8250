/*
 * Copyright (c) 2023-2024 Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */


#ifndef _TX_FES_STATUS_USER_RESPONSE_H_
#define _TX_FES_STATUS_USER_RESPONSE_H_

#include "phytx_abort_request_info.h"
#define NUM_OF_DWORDS_TX_FES_STATUS_USER_RESPONSE 2

struct tx_fes_status_user_response {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t fes_transmit_result                                     :  4,
                      reserved_0                                              : 28;
             struct   phytx_abort_request_info                                  phytx_abort_request_info_details;
             uint16_t reserved_after_struct16                                 : 16;
#else
             uint32_t reserved_0                                              : 28,
                      fes_transmit_result                                     :  4;
             uint32_t reserved_after_struct16                                 : 16;
             struct   phytx_abort_request_info                                  phytx_abort_request_info_details;
#endif
};

#define TX_FES_STATUS_USER_RESPONSE_FES_TRANSMIT_RESULT_OFFSET                      0x00000000
#define TX_FES_STATUS_USER_RESPONSE_FES_TRANSMIT_RESULT_LSB                         0
#define TX_FES_STATUS_USER_RESPONSE_FES_TRANSMIT_RESULT_MSB                         3
#define TX_FES_STATUS_USER_RESPONSE_FES_TRANSMIT_RESULT_MASK                        0x0000000f

#define TX_FES_STATUS_USER_RESPONSE_RESERVED_0_OFFSET                               0x00000000
#define TX_FES_STATUS_USER_RESPONSE_RESERVED_0_LSB                                  4
#define TX_FES_STATUS_USER_RESPONSE_RESERVED_0_MSB                                  31
#define TX_FES_STATUS_USER_RESPONSE_RESERVED_0_MASK                                 0xfffffff0

#define TX_FES_STATUS_USER_RESPONSE_PHYTX_ABORT_REQUEST_INFO_DETAILS_PHYTX_ABORT_REASON_OFFSET 0x00000004
#define TX_FES_STATUS_USER_RESPONSE_PHYTX_ABORT_REQUEST_INFO_DETAILS_PHYTX_ABORT_REASON_LSB 0
#define TX_FES_STATUS_USER_RESPONSE_PHYTX_ABORT_REQUEST_INFO_DETAILS_PHYTX_ABORT_REASON_MSB 7
#define TX_FES_STATUS_USER_RESPONSE_PHYTX_ABORT_REQUEST_INFO_DETAILS_PHYTX_ABORT_REASON_MASK 0x000000ff

#define TX_FES_STATUS_USER_RESPONSE_PHYTX_ABORT_REQUEST_INFO_DETAILS_USER_NUMBER_OFFSET 0x00000004
#define TX_FES_STATUS_USER_RESPONSE_PHYTX_ABORT_REQUEST_INFO_DETAILS_USER_NUMBER_LSB 8
#define TX_FES_STATUS_USER_RESPONSE_PHYTX_ABORT_REQUEST_INFO_DETAILS_USER_NUMBER_MSB 13
#define TX_FES_STATUS_USER_RESPONSE_PHYTX_ABORT_REQUEST_INFO_DETAILS_USER_NUMBER_MASK 0x00003f00

#define TX_FES_STATUS_USER_RESPONSE_PHYTX_ABORT_REQUEST_INFO_DETAILS_RESERVED_OFFSET 0x00000004
#define TX_FES_STATUS_USER_RESPONSE_PHYTX_ABORT_REQUEST_INFO_DETAILS_RESERVED_LSB   14
#define TX_FES_STATUS_USER_RESPONSE_PHYTX_ABORT_REQUEST_INFO_DETAILS_RESERVED_MSB   15
#define TX_FES_STATUS_USER_RESPONSE_PHYTX_ABORT_REQUEST_INFO_DETAILS_RESERVED_MASK  0x0000c000

#define TX_FES_STATUS_USER_RESPONSE_RESERVED_AFTER_STRUCT16_OFFSET                  0x00000004
#define TX_FES_STATUS_USER_RESPONSE_RESERVED_AFTER_STRUCT16_LSB                     16
#define TX_FES_STATUS_USER_RESPONSE_RESERVED_AFTER_STRUCT16_MSB                     31
#define TX_FES_STATUS_USER_RESPONSE_RESERVED_AFTER_STRUCT16_MASK                    0xffff0000

#endif
