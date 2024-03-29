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


#ifndef _TX_FES_STATUS_START_H_
#define _TX_FES_STATUS_START_H_

#define NUM_OF_DWORDS_TX_FES_STATUS_START 4

struct tx_fes_status_start {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t schedule_id                                             : 32;
             uint32_t reserved_1a                                             :  8,
                      transmit_start_reason                                   :  3,
                      disabled_user_bitmap_36_32                              :  5,
                      schedule_cmd_ring_id                                    :  5,
                      fes_control_mode                                        :  2,
                      schedule_try                                            :  4,
                      medium_prot_type                                        :  3,
                      reserved_1b                                             :  2;
             uint32_t optimal_bw_try_count                                    :  4,
                      number_of_users                                         :  7,
                      coex_nack_count                                         :  5,
                      cca_ed0                                                 : 16;
             uint32_t disabled_user_bitmap_31_0                               : 32;
#else
             uint32_t schedule_id                                             : 32;
             uint32_t reserved_1b                                             :  2,
                      medium_prot_type                                        :  3,
                      schedule_try                                            :  4,
                      fes_control_mode                                        :  2,
                      schedule_cmd_ring_id                                    :  5,
                      disabled_user_bitmap_36_32                              :  5,
                      transmit_start_reason                                   :  3,
                      reserved_1a                                             :  8;
             uint32_t cca_ed0                                                 : 16,
                      coex_nack_count                                         :  5,
                      number_of_users                                         :  7,
                      optimal_bw_try_count                                    :  4;
             uint32_t disabled_user_bitmap_31_0                               : 32;
#endif
};

#define TX_FES_STATUS_START_SCHEDULE_ID_OFFSET                                      0x00000000
#define TX_FES_STATUS_START_SCHEDULE_ID_LSB                                         0
#define TX_FES_STATUS_START_SCHEDULE_ID_MSB                                         31
#define TX_FES_STATUS_START_SCHEDULE_ID_MASK                                        0xffffffff

#define TX_FES_STATUS_START_RESERVED_1A_OFFSET                                      0x00000004
#define TX_FES_STATUS_START_RESERVED_1A_LSB                                         0
#define TX_FES_STATUS_START_RESERVED_1A_MSB                                         7
#define TX_FES_STATUS_START_RESERVED_1A_MASK                                        0x000000ff

#define TX_FES_STATUS_START_TRANSMIT_START_REASON_OFFSET                            0x00000004
#define TX_FES_STATUS_START_TRANSMIT_START_REASON_LSB                               8
#define TX_FES_STATUS_START_TRANSMIT_START_REASON_MSB                               10
#define TX_FES_STATUS_START_TRANSMIT_START_REASON_MASK                              0x00000700

#define TX_FES_STATUS_START_DISABLED_USER_BITMAP_36_32_OFFSET                       0x00000004
#define TX_FES_STATUS_START_DISABLED_USER_BITMAP_36_32_LSB                          11
#define TX_FES_STATUS_START_DISABLED_USER_BITMAP_36_32_MSB                          15
#define TX_FES_STATUS_START_DISABLED_USER_BITMAP_36_32_MASK                         0x0000f800

#define TX_FES_STATUS_START_SCHEDULE_CMD_RING_ID_OFFSET                             0x00000004
#define TX_FES_STATUS_START_SCHEDULE_CMD_RING_ID_LSB                                16
#define TX_FES_STATUS_START_SCHEDULE_CMD_RING_ID_MSB                                20
#define TX_FES_STATUS_START_SCHEDULE_CMD_RING_ID_MASK                               0x001f0000

#define TX_FES_STATUS_START_FES_CONTROL_MODE_OFFSET                                 0x00000004
#define TX_FES_STATUS_START_FES_CONTROL_MODE_LSB                                    21
#define TX_FES_STATUS_START_FES_CONTROL_MODE_MSB                                    22
#define TX_FES_STATUS_START_FES_CONTROL_MODE_MASK                                   0x00600000

#define TX_FES_STATUS_START_SCHEDULE_TRY_OFFSET                                     0x00000004
#define TX_FES_STATUS_START_SCHEDULE_TRY_LSB                                        23
#define TX_FES_STATUS_START_SCHEDULE_TRY_MSB                                        26
#define TX_FES_STATUS_START_SCHEDULE_TRY_MASK                                       0x07800000

#define TX_FES_STATUS_START_MEDIUM_PROT_TYPE_OFFSET                                 0x00000004
#define TX_FES_STATUS_START_MEDIUM_PROT_TYPE_LSB                                    27
#define TX_FES_STATUS_START_MEDIUM_PROT_TYPE_MSB                                    29
#define TX_FES_STATUS_START_MEDIUM_PROT_TYPE_MASK                                   0x38000000

#define TX_FES_STATUS_START_RESERVED_1B_OFFSET                                      0x00000004
#define TX_FES_STATUS_START_RESERVED_1B_LSB                                         30
#define TX_FES_STATUS_START_RESERVED_1B_MSB                                         31
#define TX_FES_STATUS_START_RESERVED_1B_MASK                                        0xc0000000

#define TX_FES_STATUS_START_OPTIMAL_BW_TRY_COUNT_OFFSET                             0x00000008
#define TX_FES_STATUS_START_OPTIMAL_BW_TRY_COUNT_LSB                                0
#define TX_FES_STATUS_START_OPTIMAL_BW_TRY_COUNT_MSB                                3
#define TX_FES_STATUS_START_OPTIMAL_BW_TRY_COUNT_MASK                               0x0000000f

#define TX_FES_STATUS_START_NUMBER_OF_USERS_OFFSET                                  0x00000008
#define TX_FES_STATUS_START_NUMBER_OF_USERS_LSB                                     4
#define TX_FES_STATUS_START_NUMBER_OF_USERS_MSB                                     10
#define TX_FES_STATUS_START_NUMBER_OF_USERS_MASK                                    0x000007f0

#define TX_FES_STATUS_START_COEX_NACK_COUNT_OFFSET                                  0x00000008
#define TX_FES_STATUS_START_COEX_NACK_COUNT_LSB                                     11
#define TX_FES_STATUS_START_COEX_NACK_COUNT_MSB                                     15
#define TX_FES_STATUS_START_COEX_NACK_COUNT_MASK                                    0x0000f800

#define TX_FES_STATUS_START_CCA_ED0_OFFSET                                          0x00000008
#define TX_FES_STATUS_START_CCA_ED0_LSB                                             16
#define TX_FES_STATUS_START_CCA_ED0_MSB                                             31
#define TX_FES_STATUS_START_CCA_ED0_MASK                                            0xffff0000

#define TX_FES_STATUS_START_DISABLED_USER_BITMAP_31_0_OFFSET                        0x0000000c
#define TX_FES_STATUS_START_DISABLED_USER_BITMAP_31_0_LSB                           0
#define TX_FES_STATUS_START_DISABLED_USER_BITMAP_31_0_MSB                           31
#define TX_FES_STATUS_START_DISABLED_USER_BITMAP_31_0_MASK                          0xffffffff

#endif
