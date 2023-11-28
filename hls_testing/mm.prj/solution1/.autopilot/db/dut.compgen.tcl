# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

set axilite_register_dict [dict create]
# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 431 \
    name A_in_V_a_0_0 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_0_0 \
    op interface \
    ports { A_in_V_a_0_0_dout { I 16 vector } A_in_V_a_0_0_empty_n { I 1 bit } A_in_V_a_0_0_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 432 \
    name A_in_V_a_0_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_0_1 \
    op interface \
    ports { A_in_V_a_0_1_dout { I 16 vector } A_in_V_a_0_1_empty_n { I 1 bit } A_in_V_a_0_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 433 \
    name A_in_V_a_0_2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_0_2 \
    op interface \
    ports { A_in_V_a_0_2_dout { I 16 vector } A_in_V_a_0_2_empty_n { I 1 bit } A_in_V_a_0_2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 434 \
    name A_in_V_a_0_3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_0_3 \
    op interface \
    ports { A_in_V_a_0_3_dout { I 16 vector } A_in_V_a_0_3_empty_n { I 1 bit } A_in_V_a_0_3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 435 \
    name A_in_V_a_0_4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_0_4 \
    op interface \
    ports { A_in_V_a_0_4_dout { I 16 vector } A_in_V_a_0_4_empty_n { I 1 bit } A_in_V_a_0_4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 436 \
    name A_in_V_a_0_5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_0_5 \
    op interface \
    ports { A_in_V_a_0_5_dout { I 16 vector } A_in_V_a_0_5_empty_n { I 1 bit } A_in_V_a_0_5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 437 \
    name A_in_V_a_0_6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_0_6 \
    op interface \
    ports { A_in_V_a_0_6_dout { I 16 vector } A_in_V_a_0_6_empty_n { I 1 bit } A_in_V_a_0_6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 438 \
    name A_in_V_a_0_7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_0_7 \
    op interface \
    ports { A_in_V_a_0_7_dout { I 16 vector } A_in_V_a_0_7_empty_n { I 1 bit } A_in_V_a_0_7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 439 \
    name A_in_V_a_0_8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_0_8 \
    op interface \
    ports { A_in_V_a_0_8_dout { I 16 vector } A_in_V_a_0_8_empty_n { I 1 bit } A_in_V_a_0_8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 440 \
    name A_in_V_a_0_9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_0_9 \
    op interface \
    ports { A_in_V_a_0_9_dout { I 16 vector } A_in_V_a_0_9_empty_n { I 1 bit } A_in_V_a_0_9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 441 \
    name A_in_V_a_1_0 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_1_0 \
    op interface \
    ports { A_in_V_a_1_0_dout { I 16 vector } A_in_V_a_1_0_empty_n { I 1 bit } A_in_V_a_1_0_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 442 \
    name A_in_V_a_1_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_1_1 \
    op interface \
    ports { A_in_V_a_1_1_dout { I 16 vector } A_in_V_a_1_1_empty_n { I 1 bit } A_in_V_a_1_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 443 \
    name A_in_V_a_1_2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_1_2 \
    op interface \
    ports { A_in_V_a_1_2_dout { I 16 vector } A_in_V_a_1_2_empty_n { I 1 bit } A_in_V_a_1_2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 444 \
    name A_in_V_a_1_3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_1_3 \
    op interface \
    ports { A_in_V_a_1_3_dout { I 16 vector } A_in_V_a_1_3_empty_n { I 1 bit } A_in_V_a_1_3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 445 \
    name A_in_V_a_1_4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_1_4 \
    op interface \
    ports { A_in_V_a_1_4_dout { I 16 vector } A_in_V_a_1_4_empty_n { I 1 bit } A_in_V_a_1_4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 446 \
    name A_in_V_a_1_5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_1_5 \
    op interface \
    ports { A_in_V_a_1_5_dout { I 16 vector } A_in_V_a_1_5_empty_n { I 1 bit } A_in_V_a_1_5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 447 \
    name A_in_V_a_1_6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_1_6 \
    op interface \
    ports { A_in_V_a_1_6_dout { I 16 vector } A_in_V_a_1_6_empty_n { I 1 bit } A_in_V_a_1_6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 448 \
    name A_in_V_a_1_7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_1_7 \
    op interface \
    ports { A_in_V_a_1_7_dout { I 16 vector } A_in_V_a_1_7_empty_n { I 1 bit } A_in_V_a_1_7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 449 \
    name A_in_V_a_1_8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_1_8 \
    op interface \
    ports { A_in_V_a_1_8_dout { I 16 vector } A_in_V_a_1_8_empty_n { I 1 bit } A_in_V_a_1_8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 450 \
    name A_in_V_a_1_9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_1_9 \
    op interface \
    ports { A_in_V_a_1_9_dout { I 16 vector } A_in_V_a_1_9_empty_n { I 1 bit } A_in_V_a_1_9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 451 \
    name A_in_V_a_2_0 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_2_0 \
    op interface \
    ports { A_in_V_a_2_0_dout { I 16 vector } A_in_V_a_2_0_empty_n { I 1 bit } A_in_V_a_2_0_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 452 \
    name A_in_V_a_2_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_2_1 \
    op interface \
    ports { A_in_V_a_2_1_dout { I 16 vector } A_in_V_a_2_1_empty_n { I 1 bit } A_in_V_a_2_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 453 \
    name A_in_V_a_2_2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_2_2 \
    op interface \
    ports { A_in_V_a_2_2_dout { I 16 vector } A_in_V_a_2_2_empty_n { I 1 bit } A_in_V_a_2_2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 454 \
    name A_in_V_a_2_3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_2_3 \
    op interface \
    ports { A_in_V_a_2_3_dout { I 16 vector } A_in_V_a_2_3_empty_n { I 1 bit } A_in_V_a_2_3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 455 \
    name A_in_V_a_2_4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_2_4 \
    op interface \
    ports { A_in_V_a_2_4_dout { I 16 vector } A_in_V_a_2_4_empty_n { I 1 bit } A_in_V_a_2_4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 456 \
    name A_in_V_a_2_5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_2_5 \
    op interface \
    ports { A_in_V_a_2_5_dout { I 16 vector } A_in_V_a_2_5_empty_n { I 1 bit } A_in_V_a_2_5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 457 \
    name A_in_V_a_2_6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_2_6 \
    op interface \
    ports { A_in_V_a_2_6_dout { I 16 vector } A_in_V_a_2_6_empty_n { I 1 bit } A_in_V_a_2_6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 458 \
    name A_in_V_a_2_7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_2_7 \
    op interface \
    ports { A_in_V_a_2_7_dout { I 16 vector } A_in_V_a_2_7_empty_n { I 1 bit } A_in_V_a_2_7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 459 \
    name A_in_V_a_2_8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_2_8 \
    op interface \
    ports { A_in_V_a_2_8_dout { I 16 vector } A_in_V_a_2_8_empty_n { I 1 bit } A_in_V_a_2_8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 460 \
    name A_in_V_a_2_9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_2_9 \
    op interface \
    ports { A_in_V_a_2_9_dout { I 16 vector } A_in_V_a_2_9_empty_n { I 1 bit } A_in_V_a_2_9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 461 \
    name A_in_V_a_3_0 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_3_0 \
    op interface \
    ports { A_in_V_a_3_0_dout { I 16 vector } A_in_V_a_3_0_empty_n { I 1 bit } A_in_V_a_3_0_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 462 \
    name A_in_V_a_3_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_3_1 \
    op interface \
    ports { A_in_V_a_3_1_dout { I 16 vector } A_in_V_a_3_1_empty_n { I 1 bit } A_in_V_a_3_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 463 \
    name A_in_V_a_3_2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_3_2 \
    op interface \
    ports { A_in_V_a_3_2_dout { I 16 vector } A_in_V_a_3_2_empty_n { I 1 bit } A_in_V_a_3_2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 464 \
    name A_in_V_a_3_3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_3_3 \
    op interface \
    ports { A_in_V_a_3_3_dout { I 16 vector } A_in_V_a_3_3_empty_n { I 1 bit } A_in_V_a_3_3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 465 \
    name A_in_V_a_3_4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_3_4 \
    op interface \
    ports { A_in_V_a_3_4_dout { I 16 vector } A_in_V_a_3_4_empty_n { I 1 bit } A_in_V_a_3_4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 466 \
    name A_in_V_a_3_5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_3_5 \
    op interface \
    ports { A_in_V_a_3_5_dout { I 16 vector } A_in_V_a_3_5_empty_n { I 1 bit } A_in_V_a_3_5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 467 \
    name A_in_V_a_3_6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_3_6 \
    op interface \
    ports { A_in_V_a_3_6_dout { I 16 vector } A_in_V_a_3_6_empty_n { I 1 bit } A_in_V_a_3_6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 468 \
    name A_in_V_a_3_7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_3_7 \
    op interface \
    ports { A_in_V_a_3_7_dout { I 16 vector } A_in_V_a_3_7_empty_n { I 1 bit } A_in_V_a_3_7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 469 \
    name A_in_V_a_3_8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_3_8 \
    op interface \
    ports { A_in_V_a_3_8_dout { I 16 vector } A_in_V_a_3_8_empty_n { I 1 bit } A_in_V_a_3_8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 470 \
    name A_in_V_a_3_9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_3_9 \
    op interface \
    ports { A_in_V_a_3_9_dout { I 16 vector } A_in_V_a_3_9_empty_n { I 1 bit } A_in_V_a_3_9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 471 \
    name A_in_V_a_4_0 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_4_0 \
    op interface \
    ports { A_in_V_a_4_0_dout { I 16 vector } A_in_V_a_4_0_empty_n { I 1 bit } A_in_V_a_4_0_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 472 \
    name A_in_V_a_4_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_4_1 \
    op interface \
    ports { A_in_V_a_4_1_dout { I 16 vector } A_in_V_a_4_1_empty_n { I 1 bit } A_in_V_a_4_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 473 \
    name A_in_V_a_4_2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_4_2 \
    op interface \
    ports { A_in_V_a_4_2_dout { I 16 vector } A_in_V_a_4_2_empty_n { I 1 bit } A_in_V_a_4_2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 474 \
    name A_in_V_a_4_3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_4_3 \
    op interface \
    ports { A_in_V_a_4_3_dout { I 16 vector } A_in_V_a_4_3_empty_n { I 1 bit } A_in_V_a_4_3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 475 \
    name A_in_V_a_4_4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_4_4 \
    op interface \
    ports { A_in_V_a_4_4_dout { I 16 vector } A_in_V_a_4_4_empty_n { I 1 bit } A_in_V_a_4_4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 476 \
    name A_in_V_a_4_5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_4_5 \
    op interface \
    ports { A_in_V_a_4_5_dout { I 16 vector } A_in_V_a_4_5_empty_n { I 1 bit } A_in_V_a_4_5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 477 \
    name A_in_V_a_4_6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_4_6 \
    op interface \
    ports { A_in_V_a_4_6_dout { I 16 vector } A_in_V_a_4_6_empty_n { I 1 bit } A_in_V_a_4_6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 478 \
    name A_in_V_a_4_7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_4_7 \
    op interface \
    ports { A_in_V_a_4_7_dout { I 16 vector } A_in_V_a_4_7_empty_n { I 1 bit } A_in_V_a_4_7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 479 \
    name A_in_V_a_4_8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_4_8 \
    op interface \
    ports { A_in_V_a_4_8_dout { I 16 vector } A_in_V_a_4_8_empty_n { I 1 bit } A_in_V_a_4_8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 480 \
    name A_in_V_a_4_9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_4_9 \
    op interface \
    ports { A_in_V_a_4_9_dout { I 16 vector } A_in_V_a_4_9_empty_n { I 1 bit } A_in_V_a_4_9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 481 \
    name A_in_V_a_5_0 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_5_0 \
    op interface \
    ports { A_in_V_a_5_0_dout { I 16 vector } A_in_V_a_5_0_empty_n { I 1 bit } A_in_V_a_5_0_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 482 \
    name A_in_V_a_5_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_5_1 \
    op interface \
    ports { A_in_V_a_5_1_dout { I 16 vector } A_in_V_a_5_1_empty_n { I 1 bit } A_in_V_a_5_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 483 \
    name A_in_V_a_5_2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_5_2 \
    op interface \
    ports { A_in_V_a_5_2_dout { I 16 vector } A_in_V_a_5_2_empty_n { I 1 bit } A_in_V_a_5_2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 484 \
    name A_in_V_a_5_3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_5_3 \
    op interface \
    ports { A_in_V_a_5_3_dout { I 16 vector } A_in_V_a_5_3_empty_n { I 1 bit } A_in_V_a_5_3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 485 \
    name A_in_V_a_5_4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_5_4 \
    op interface \
    ports { A_in_V_a_5_4_dout { I 16 vector } A_in_V_a_5_4_empty_n { I 1 bit } A_in_V_a_5_4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 486 \
    name A_in_V_a_5_5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_5_5 \
    op interface \
    ports { A_in_V_a_5_5_dout { I 16 vector } A_in_V_a_5_5_empty_n { I 1 bit } A_in_V_a_5_5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 487 \
    name A_in_V_a_5_6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_5_6 \
    op interface \
    ports { A_in_V_a_5_6_dout { I 16 vector } A_in_V_a_5_6_empty_n { I 1 bit } A_in_V_a_5_6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 488 \
    name A_in_V_a_5_7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_5_7 \
    op interface \
    ports { A_in_V_a_5_7_dout { I 16 vector } A_in_V_a_5_7_empty_n { I 1 bit } A_in_V_a_5_7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 489 \
    name A_in_V_a_5_8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_5_8 \
    op interface \
    ports { A_in_V_a_5_8_dout { I 16 vector } A_in_V_a_5_8_empty_n { I 1 bit } A_in_V_a_5_8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 490 \
    name A_in_V_a_5_9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_5_9 \
    op interface \
    ports { A_in_V_a_5_9_dout { I 16 vector } A_in_V_a_5_9_empty_n { I 1 bit } A_in_V_a_5_9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 491 \
    name A_in_V_a_6_0 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_6_0 \
    op interface \
    ports { A_in_V_a_6_0_dout { I 16 vector } A_in_V_a_6_0_empty_n { I 1 bit } A_in_V_a_6_0_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 492 \
    name A_in_V_a_6_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_6_1 \
    op interface \
    ports { A_in_V_a_6_1_dout { I 16 vector } A_in_V_a_6_1_empty_n { I 1 bit } A_in_V_a_6_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 493 \
    name A_in_V_a_6_2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_6_2 \
    op interface \
    ports { A_in_V_a_6_2_dout { I 16 vector } A_in_V_a_6_2_empty_n { I 1 bit } A_in_V_a_6_2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 494 \
    name A_in_V_a_6_3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_6_3 \
    op interface \
    ports { A_in_V_a_6_3_dout { I 16 vector } A_in_V_a_6_3_empty_n { I 1 bit } A_in_V_a_6_3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 495 \
    name A_in_V_a_6_4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_6_4 \
    op interface \
    ports { A_in_V_a_6_4_dout { I 16 vector } A_in_V_a_6_4_empty_n { I 1 bit } A_in_V_a_6_4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 496 \
    name A_in_V_a_6_5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_6_5 \
    op interface \
    ports { A_in_V_a_6_5_dout { I 16 vector } A_in_V_a_6_5_empty_n { I 1 bit } A_in_V_a_6_5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 497 \
    name A_in_V_a_6_6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_6_6 \
    op interface \
    ports { A_in_V_a_6_6_dout { I 16 vector } A_in_V_a_6_6_empty_n { I 1 bit } A_in_V_a_6_6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 498 \
    name A_in_V_a_6_7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_6_7 \
    op interface \
    ports { A_in_V_a_6_7_dout { I 16 vector } A_in_V_a_6_7_empty_n { I 1 bit } A_in_V_a_6_7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 499 \
    name A_in_V_a_6_8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_6_8 \
    op interface \
    ports { A_in_V_a_6_8_dout { I 16 vector } A_in_V_a_6_8_empty_n { I 1 bit } A_in_V_a_6_8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 500 \
    name A_in_V_a_6_9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_6_9 \
    op interface \
    ports { A_in_V_a_6_9_dout { I 16 vector } A_in_V_a_6_9_empty_n { I 1 bit } A_in_V_a_6_9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 501 \
    name A_in_V_a_7_0 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_7_0 \
    op interface \
    ports { A_in_V_a_7_0_dout { I 16 vector } A_in_V_a_7_0_empty_n { I 1 bit } A_in_V_a_7_0_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 502 \
    name A_in_V_a_7_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_7_1 \
    op interface \
    ports { A_in_V_a_7_1_dout { I 16 vector } A_in_V_a_7_1_empty_n { I 1 bit } A_in_V_a_7_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 503 \
    name A_in_V_a_7_2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_7_2 \
    op interface \
    ports { A_in_V_a_7_2_dout { I 16 vector } A_in_V_a_7_2_empty_n { I 1 bit } A_in_V_a_7_2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 504 \
    name A_in_V_a_7_3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_7_3 \
    op interface \
    ports { A_in_V_a_7_3_dout { I 16 vector } A_in_V_a_7_3_empty_n { I 1 bit } A_in_V_a_7_3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 505 \
    name A_in_V_a_7_4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_7_4 \
    op interface \
    ports { A_in_V_a_7_4_dout { I 16 vector } A_in_V_a_7_4_empty_n { I 1 bit } A_in_V_a_7_4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 506 \
    name A_in_V_a_7_5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_7_5 \
    op interface \
    ports { A_in_V_a_7_5_dout { I 16 vector } A_in_V_a_7_5_empty_n { I 1 bit } A_in_V_a_7_5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 507 \
    name A_in_V_a_7_6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_7_6 \
    op interface \
    ports { A_in_V_a_7_6_dout { I 16 vector } A_in_V_a_7_6_empty_n { I 1 bit } A_in_V_a_7_6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 508 \
    name A_in_V_a_7_7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_7_7 \
    op interface \
    ports { A_in_V_a_7_7_dout { I 16 vector } A_in_V_a_7_7_empty_n { I 1 bit } A_in_V_a_7_7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 509 \
    name A_in_V_a_7_8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_7_8 \
    op interface \
    ports { A_in_V_a_7_8_dout { I 16 vector } A_in_V_a_7_8_empty_n { I 1 bit } A_in_V_a_7_8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 510 \
    name A_in_V_a_7_9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_7_9 \
    op interface \
    ports { A_in_V_a_7_9_dout { I 16 vector } A_in_V_a_7_9_empty_n { I 1 bit } A_in_V_a_7_9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 511 \
    name A_in_V_a_8_0 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_8_0 \
    op interface \
    ports { A_in_V_a_8_0_dout { I 16 vector } A_in_V_a_8_0_empty_n { I 1 bit } A_in_V_a_8_0_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 512 \
    name A_in_V_a_8_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_8_1 \
    op interface \
    ports { A_in_V_a_8_1_dout { I 16 vector } A_in_V_a_8_1_empty_n { I 1 bit } A_in_V_a_8_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 513 \
    name A_in_V_a_8_2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_8_2 \
    op interface \
    ports { A_in_V_a_8_2_dout { I 16 vector } A_in_V_a_8_2_empty_n { I 1 bit } A_in_V_a_8_2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 514 \
    name A_in_V_a_8_3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_8_3 \
    op interface \
    ports { A_in_V_a_8_3_dout { I 16 vector } A_in_V_a_8_3_empty_n { I 1 bit } A_in_V_a_8_3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 515 \
    name A_in_V_a_8_4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_8_4 \
    op interface \
    ports { A_in_V_a_8_4_dout { I 16 vector } A_in_V_a_8_4_empty_n { I 1 bit } A_in_V_a_8_4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 516 \
    name A_in_V_a_8_5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_8_5 \
    op interface \
    ports { A_in_V_a_8_5_dout { I 16 vector } A_in_V_a_8_5_empty_n { I 1 bit } A_in_V_a_8_5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 517 \
    name A_in_V_a_8_6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_8_6 \
    op interface \
    ports { A_in_V_a_8_6_dout { I 16 vector } A_in_V_a_8_6_empty_n { I 1 bit } A_in_V_a_8_6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 518 \
    name A_in_V_a_8_7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_8_7 \
    op interface \
    ports { A_in_V_a_8_7_dout { I 16 vector } A_in_V_a_8_7_empty_n { I 1 bit } A_in_V_a_8_7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 519 \
    name A_in_V_a_8_8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_8_8 \
    op interface \
    ports { A_in_V_a_8_8_dout { I 16 vector } A_in_V_a_8_8_empty_n { I 1 bit } A_in_V_a_8_8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 520 \
    name A_in_V_a_8_9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_8_9 \
    op interface \
    ports { A_in_V_a_8_9_dout { I 16 vector } A_in_V_a_8_9_empty_n { I 1 bit } A_in_V_a_8_9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 521 \
    name A_in_V_a_9_0 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_9_0 \
    op interface \
    ports { A_in_V_a_9_0_dout { I 16 vector } A_in_V_a_9_0_empty_n { I 1 bit } A_in_V_a_9_0_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 522 \
    name A_in_V_a_9_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_9_1 \
    op interface \
    ports { A_in_V_a_9_1_dout { I 16 vector } A_in_V_a_9_1_empty_n { I 1 bit } A_in_V_a_9_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 523 \
    name A_in_V_a_9_2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_9_2 \
    op interface \
    ports { A_in_V_a_9_2_dout { I 16 vector } A_in_V_a_9_2_empty_n { I 1 bit } A_in_V_a_9_2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 524 \
    name A_in_V_a_9_3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_9_3 \
    op interface \
    ports { A_in_V_a_9_3_dout { I 16 vector } A_in_V_a_9_3_empty_n { I 1 bit } A_in_V_a_9_3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 525 \
    name A_in_V_a_9_4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_9_4 \
    op interface \
    ports { A_in_V_a_9_4_dout { I 16 vector } A_in_V_a_9_4_empty_n { I 1 bit } A_in_V_a_9_4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 526 \
    name A_in_V_a_9_5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_9_5 \
    op interface \
    ports { A_in_V_a_9_5_dout { I 16 vector } A_in_V_a_9_5_empty_n { I 1 bit } A_in_V_a_9_5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 527 \
    name A_in_V_a_9_6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_9_6 \
    op interface \
    ports { A_in_V_a_9_6_dout { I 16 vector } A_in_V_a_9_6_empty_n { I 1 bit } A_in_V_a_9_6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 528 \
    name A_in_V_a_9_7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_9_7 \
    op interface \
    ports { A_in_V_a_9_7_dout { I 16 vector } A_in_V_a_9_7_empty_n { I 1 bit } A_in_V_a_9_7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 529 \
    name A_in_V_a_9_8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_9_8 \
    op interface \
    ports { A_in_V_a_9_8_dout { I 16 vector } A_in_V_a_9_8_empty_n { I 1 bit } A_in_V_a_9_8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 530 \
    name A_in_V_a_9_9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_A_in_V_a_9_9 \
    op interface \
    ports { A_in_V_a_9_9_dout { I 16 vector } A_in_V_a_9_9_empty_n { I 1 bit } A_in_V_a_9_9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 531 \
    name B_in_V_b_0_0 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_0_0 \
    op interface \
    ports { B_in_V_b_0_0_dout { I 16 vector } B_in_V_b_0_0_empty_n { I 1 bit } B_in_V_b_0_0_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 532 \
    name B_in_V_b_0_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_0_1 \
    op interface \
    ports { B_in_V_b_0_1_dout { I 16 vector } B_in_V_b_0_1_empty_n { I 1 bit } B_in_V_b_0_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 533 \
    name B_in_V_b_0_2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_0_2 \
    op interface \
    ports { B_in_V_b_0_2_dout { I 16 vector } B_in_V_b_0_2_empty_n { I 1 bit } B_in_V_b_0_2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 534 \
    name B_in_V_b_0_3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_0_3 \
    op interface \
    ports { B_in_V_b_0_3_dout { I 16 vector } B_in_V_b_0_3_empty_n { I 1 bit } B_in_V_b_0_3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 535 \
    name B_in_V_b_0_4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_0_4 \
    op interface \
    ports { B_in_V_b_0_4_dout { I 16 vector } B_in_V_b_0_4_empty_n { I 1 bit } B_in_V_b_0_4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 536 \
    name B_in_V_b_0_5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_0_5 \
    op interface \
    ports { B_in_V_b_0_5_dout { I 16 vector } B_in_V_b_0_5_empty_n { I 1 bit } B_in_V_b_0_5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 537 \
    name B_in_V_b_0_6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_0_6 \
    op interface \
    ports { B_in_V_b_0_6_dout { I 16 vector } B_in_V_b_0_6_empty_n { I 1 bit } B_in_V_b_0_6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 538 \
    name B_in_V_b_0_7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_0_7 \
    op interface \
    ports { B_in_V_b_0_7_dout { I 16 vector } B_in_V_b_0_7_empty_n { I 1 bit } B_in_V_b_0_7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 539 \
    name B_in_V_b_0_8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_0_8 \
    op interface \
    ports { B_in_V_b_0_8_dout { I 16 vector } B_in_V_b_0_8_empty_n { I 1 bit } B_in_V_b_0_8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 540 \
    name B_in_V_b_0_9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_0_9 \
    op interface \
    ports { B_in_V_b_0_9_dout { I 16 vector } B_in_V_b_0_9_empty_n { I 1 bit } B_in_V_b_0_9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 541 \
    name B_in_V_b_1_0 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_1_0 \
    op interface \
    ports { B_in_V_b_1_0_dout { I 16 vector } B_in_V_b_1_0_empty_n { I 1 bit } B_in_V_b_1_0_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 542 \
    name B_in_V_b_1_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_1_1 \
    op interface \
    ports { B_in_V_b_1_1_dout { I 16 vector } B_in_V_b_1_1_empty_n { I 1 bit } B_in_V_b_1_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 543 \
    name B_in_V_b_1_2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_1_2 \
    op interface \
    ports { B_in_V_b_1_2_dout { I 16 vector } B_in_V_b_1_2_empty_n { I 1 bit } B_in_V_b_1_2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 544 \
    name B_in_V_b_1_3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_1_3 \
    op interface \
    ports { B_in_V_b_1_3_dout { I 16 vector } B_in_V_b_1_3_empty_n { I 1 bit } B_in_V_b_1_3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 545 \
    name B_in_V_b_1_4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_1_4 \
    op interface \
    ports { B_in_V_b_1_4_dout { I 16 vector } B_in_V_b_1_4_empty_n { I 1 bit } B_in_V_b_1_4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 546 \
    name B_in_V_b_1_5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_1_5 \
    op interface \
    ports { B_in_V_b_1_5_dout { I 16 vector } B_in_V_b_1_5_empty_n { I 1 bit } B_in_V_b_1_5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 547 \
    name B_in_V_b_1_6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_1_6 \
    op interface \
    ports { B_in_V_b_1_6_dout { I 16 vector } B_in_V_b_1_6_empty_n { I 1 bit } B_in_V_b_1_6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 548 \
    name B_in_V_b_1_7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_1_7 \
    op interface \
    ports { B_in_V_b_1_7_dout { I 16 vector } B_in_V_b_1_7_empty_n { I 1 bit } B_in_V_b_1_7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 549 \
    name B_in_V_b_1_8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_1_8 \
    op interface \
    ports { B_in_V_b_1_8_dout { I 16 vector } B_in_V_b_1_8_empty_n { I 1 bit } B_in_V_b_1_8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 550 \
    name B_in_V_b_1_9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_1_9 \
    op interface \
    ports { B_in_V_b_1_9_dout { I 16 vector } B_in_V_b_1_9_empty_n { I 1 bit } B_in_V_b_1_9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 551 \
    name B_in_V_b_2_0 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_2_0 \
    op interface \
    ports { B_in_V_b_2_0_dout { I 16 vector } B_in_V_b_2_0_empty_n { I 1 bit } B_in_V_b_2_0_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 552 \
    name B_in_V_b_2_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_2_1 \
    op interface \
    ports { B_in_V_b_2_1_dout { I 16 vector } B_in_V_b_2_1_empty_n { I 1 bit } B_in_V_b_2_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 553 \
    name B_in_V_b_2_2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_2_2 \
    op interface \
    ports { B_in_V_b_2_2_dout { I 16 vector } B_in_V_b_2_2_empty_n { I 1 bit } B_in_V_b_2_2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 554 \
    name B_in_V_b_2_3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_2_3 \
    op interface \
    ports { B_in_V_b_2_3_dout { I 16 vector } B_in_V_b_2_3_empty_n { I 1 bit } B_in_V_b_2_3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 555 \
    name B_in_V_b_2_4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_2_4 \
    op interface \
    ports { B_in_V_b_2_4_dout { I 16 vector } B_in_V_b_2_4_empty_n { I 1 bit } B_in_V_b_2_4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 556 \
    name B_in_V_b_2_5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_2_5 \
    op interface \
    ports { B_in_V_b_2_5_dout { I 16 vector } B_in_V_b_2_5_empty_n { I 1 bit } B_in_V_b_2_5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 557 \
    name B_in_V_b_2_6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_2_6 \
    op interface \
    ports { B_in_V_b_2_6_dout { I 16 vector } B_in_V_b_2_6_empty_n { I 1 bit } B_in_V_b_2_6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 558 \
    name B_in_V_b_2_7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_2_7 \
    op interface \
    ports { B_in_V_b_2_7_dout { I 16 vector } B_in_V_b_2_7_empty_n { I 1 bit } B_in_V_b_2_7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 559 \
    name B_in_V_b_2_8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_2_8 \
    op interface \
    ports { B_in_V_b_2_8_dout { I 16 vector } B_in_V_b_2_8_empty_n { I 1 bit } B_in_V_b_2_8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 560 \
    name B_in_V_b_2_9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_2_9 \
    op interface \
    ports { B_in_V_b_2_9_dout { I 16 vector } B_in_V_b_2_9_empty_n { I 1 bit } B_in_V_b_2_9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 561 \
    name B_in_V_b_3_0 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_3_0 \
    op interface \
    ports { B_in_V_b_3_0_dout { I 16 vector } B_in_V_b_3_0_empty_n { I 1 bit } B_in_V_b_3_0_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 562 \
    name B_in_V_b_3_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_3_1 \
    op interface \
    ports { B_in_V_b_3_1_dout { I 16 vector } B_in_V_b_3_1_empty_n { I 1 bit } B_in_V_b_3_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 563 \
    name B_in_V_b_3_2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_3_2 \
    op interface \
    ports { B_in_V_b_3_2_dout { I 16 vector } B_in_V_b_3_2_empty_n { I 1 bit } B_in_V_b_3_2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 564 \
    name B_in_V_b_3_3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_3_3 \
    op interface \
    ports { B_in_V_b_3_3_dout { I 16 vector } B_in_V_b_3_3_empty_n { I 1 bit } B_in_V_b_3_3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 565 \
    name B_in_V_b_3_4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_3_4 \
    op interface \
    ports { B_in_V_b_3_4_dout { I 16 vector } B_in_V_b_3_4_empty_n { I 1 bit } B_in_V_b_3_4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 566 \
    name B_in_V_b_3_5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_3_5 \
    op interface \
    ports { B_in_V_b_3_5_dout { I 16 vector } B_in_V_b_3_5_empty_n { I 1 bit } B_in_V_b_3_5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 567 \
    name B_in_V_b_3_6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_3_6 \
    op interface \
    ports { B_in_V_b_3_6_dout { I 16 vector } B_in_V_b_3_6_empty_n { I 1 bit } B_in_V_b_3_6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 568 \
    name B_in_V_b_3_7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_3_7 \
    op interface \
    ports { B_in_V_b_3_7_dout { I 16 vector } B_in_V_b_3_7_empty_n { I 1 bit } B_in_V_b_3_7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 569 \
    name B_in_V_b_3_8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_3_8 \
    op interface \
    ports { B_in_V_b_3_8_dout { I 16 vector } B_in_V_b_3_8_empty_n { I 1 bit } B_in_V_b_3_8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 570 \
    name B_in_V_b_3_9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_3_9 \
    op interface \
    ports { B_in_V_b_3_9_dout { I 16 vector } B_in_V_b_3_9_empty_n { I 1 bit } B_in_V_b_3_9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 571 \
    name B_in_V_b_4_0 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_4_0 \
    op interface \
    ports { B_in_V_b_4_0_dout { I 16 vector } B_in_V_b_4_0_empty_n { I 1 bit } B_in_V_b_4_0_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 572 \
    name B_in_V_b_4_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_4_1 \
    op interface \
    ports { B_in_V_b_4_1_dout { I 16 vector } B_in_V_b_4_1_empty_n { I 1 bit } B_in_V_b_4_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 573 \
    name B_in_V_b_4_2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_4_2 \
    op interface \
    ports { B_in_V_b_4_2_dout { I 16 vector } B_in_V_b_4_2_empty_n { I 1 bit } B_in_V_b_4_2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 574 \
    name B_in_V_b_4_3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_4_3 \
    op interface \
    ports { B_in_V_b_4_3_dout { I 16 vector } B_in_V_b_4_3_empty_n { I 1 bit } B_in_V_b_4_3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 575 \
    name B_in_V_b_4_4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_4_4 \
    op interface \
    ports { B_in_V_b_4_4_dout { I 16 vector } B_in_V_b_4_4_empty_n { I 1 bit } B_in_V_b_4_4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 576 \
    name B_in_V_b_4_5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_4_5 \
    op interface \
    ports { B_in_V_b_4_5_dout { I 16 vector } B_in_V_b_4_5_empty_n { I 1 bit } B_in_V_b_4_5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 577 \
    name B_in_V_b_4_6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_4_6 \
    op interface \
    ports { B_in_V_b_4_6_dout { I 16 vector } B_in_V_b_4_6_empty_n { I 1 bit } B_in_V_b_4_6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 578 \
    name B_in_V_b_4_7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_4_7 \
    op interface \
    ports { B_in_V_b_4_7_dout { I 16 vector } B_in_V_b_4_7_empty_n { I 1 bit } B_in_V_b_4_7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 579 \
    name B_in_V_b_4_8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_4_8 \
    op interface \
    ports { B_in_V_b_4_8_dout { I 16 vector } B_in_V_b_4_8_empty_n { I 1 bit } B_in_V_b_4_8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 580 \
    name B_in_V_b_4_9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_4_9 \
    op interface \
    ports { B_in_V_b_4_9_dout { I 16 vector } B_in_V_b_4_9_empty_n { I 1 bit } B_in_V_b_4_9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 581 \
    name B_in_V_b_5_0 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_5_0 \
    op interface \
    ports { B_in_V_b_5_0_dout { I 16 vector } B_in_V_b_5_0_empty_n { I 1 bit } B_in_V_b_5_0_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 582 \
    name B_in_V_b_5_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_5_1 \
    op interface \
    ports { B_in_V_b_5_1_dout { I 16 vector } B_in_V_b_5_1_empty_n { I 1 bit } B_in_V_b_5_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 583 \
    name B_in_V_b_5_2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_5_2 \
    op interface \
    ports { B_in_V_b_5_2_dout { I 16 vector } B_in_V_b_5_2_empty_n { I 1 bit } B_in_V_b_5_2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 584 \
    name B_in_V_b_5_3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_5_3 \
    op interface \
    ports { B_in_V_b_5_3_dout { I 16 vector } B_in_V_b_5_3_empty_n { I 1 bit } B_in_V_b_5_3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 585 \
    name B_in_V_b_5_4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_5_4 \
    op interface \
    ports { B_in_V_b_5_4_dout { I 16 vector } B_in_V_b_5_4_empty_n { I 1 bit } B_in_V_b_5_4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 586 \
    name B_in_V_b_5_5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_5_5 \
    op interface \
    ports { B_in_V_b_5_5_dout { I 16 vector } B_in_V_b_5_5_empty_n { I 1 bit } B_in_V_b_5_5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 587 \
    name B_in_V_b_5_6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_5_6 \
    op interface \
    ports { B_in_V_b_5_6_dout { I 16 vector } B_in_V_b_5_6_empty_n { I 1 bit } B_in_V_b_5_6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 588 \
    name B_in_V_b_5_7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_5_7 \
    op interface \
    ports { B_in_V_b_5_7_dout { I 16 vector } B_in_V_b_5_7_empty_n { I 1 bit } B_in_V_b_5_7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 589 \
    name B_in_V_b_5_8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_5_8 \
    op interface \
    ports { B_in_V_b_5_8_dout { I 16 vector } B_in_V_b_5_8_empty_n { I 1 bit } B_in_V_b_5_8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 590 \
    name B_in_V_b_5_9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_5_9 \
    op interface \
    ports { B_in_V_b_5_9_dout { I 16 vector } B_in_V_b_5_9_empty_n { I 1 bit } B_in_V_b_5_9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 591 \
    name B_in_V_b_6_0 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_6_0 \
    op interface \
    ports { B_in_V_b_6_0_dout { I 16 vector } B_in_V_b_6_0_empty_n { I 1 bit } B_in_V_b_6_0_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 592 \
    name B_in_V_b_6_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_6_1 \
    op interface \
    ports { B_in_V_b_6_1_dout { I 16 vector } B_in_V_b_6_1_empty_n { I 1 bit } B_in_V_b_6_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 593 \
    name B_in_V_b_6_2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_6_2 \
    op interface \
    ports { B_in_V_b_6_2_dout { I 16 vector } B_in_V_b_6_2_empty_n { I 1 bit } B_in_V_b_6_2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 594 \
    name B_in_V_b_6_3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_6_3 \
    op interface \
    ports { B_in_V_b_6_3_dout { I 16 vector } B_in_V_b_6_3_empty_n { I 1 bit } B_in_V_b_6_3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 595 \
    name B_in_V_b_6_4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_6_4 \
    op interface \
    ports { B_in_V_b_6_4_dout { I 16 vector } B_in_V_b_6_4_empty_n { I 1 bit } B_in_V_b_6_4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 596 \
    name B_in_V_b_6_5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_6_5 \
    op interface \
    ports { B_in_V_b_6_5_dout { I 16 vector } B_in_V_b_6_5_empty_n { I 1 bit } B_in_V_b_6_5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 597 \
    name B_in_V_b_6_6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_6_6 \
    op interface \
    ports { B_in_V_b_6_6_dout { I 16 vector } B_in_V_b_6_6_empty_n { I 1 bit } B_in_V_b_6_6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 598 \
    name B_in_V_b_6_7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_6_7 \
    op interface \
    ports { B_in_V_b_6_7_dout { I 16 vector } B_in_V_b_6_7_empty_n { I 1 bit } B_in_V_b_6_7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 599 \
    name B_in_V_b_6_8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_6_8 \
    op interface \
    ports { B_in_V_b_6_8_dout { I 16 vector } B_in_V_b_6_8_empty_n { I 1 bit } B_in_V_b_6_8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 600 \
    name B_in_V_b_6_9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_6_9 \
    op interface \
    ports { B_in_V_b_6_9_dout { I 16 vector } B_in_V_b_6_9_empty_n { I 1 bit } B_in_V_b_6_9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 601 \
    name B_in_V_b_7_0 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_7_0 \
    op interface \
    ports { B_in_V_b_7_0_dout { I 16 vector } B_in_V_b_7_0_empty_n { I 1 bit } B_in_V_b_7_0_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 602 \
    name B_in_V_b_7_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_7_1 \
    op interface \
    ports { B_in_V_b_7_1_dout { I 16 vector } B_in_V_b_7_1_empty_n { I 1 bit } B_in_V_b_7_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 603 \
    name B_in_V_b_7_2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_7_2 \
    op interface \
    ports { B_in_V_b_7_2_dout { I 16 vector } B_in_V_b_7_2_empty_n { I 1 bit } B_in_V_b_7_2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 604 \
    name B_in_V_b_7_3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_7_3 \
    op interface \
    ports { B_in_V_b_7_3_dout { I 16 vector } B_in_V_b_7_3_empty_n { I 1 bit } B_in_V_b_7_3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 605 \
    name B_in_V_b_7_4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_7_4 \
    op interface \
    ports { B_in_V_b_7_4_dout { I 16 vector } B_in_V_b_7_4_empty_n { I 1 bit } B_in_V_b_7_4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 606 \
    name B_in_V_b_7_5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_7_5 \
    op interface \
    ports { B_in_V_b_7_5_dout { I 16 vector } B_in_V_b_7_5_empty_n { I 1 bit } B_in_V_b_7_5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 607 \
    name B_in_V_b_7_6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_7_6 \
    op interface \
    ports { B_in_V_b_7_6_dout { I 16 vector } B_in_V_b_7_6_empty_n { I 1 bit } B_in_V_b_7_6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 608 \
    name B_in_V_b_7_7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_7_7 \
    op interface \
    ports { B_in_V_b_7_7_dout { I 16 vector } B_in_V_b_7_7_empty_n { I 1 bit } B_in_V_b_7_7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 609 \
    name B_in_V_b_7_8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_7_8 \
    op interface \
    ports { B_in_V_b_7_8_dout { I 16 vector } B_in_V_b_7_8_empty_n { I 1 bit } B_in_V_b_7_8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 610 \
    name B_in_V_b_7_9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_7_9 \
    op interface \
    ports { B_in_V_b_7_9_dout { I 16 vector } B_in_V_b_7_9_empty_n { I 1 bit } B_in_V_b_7_9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 611 \
    name B_in_V_b_8_0 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_8_0 \
    op interface \
    ports { B_in_V_b_8_0_dout { I 16 vector } B_in_V_b_8_0_empty_n { I 1 bit } B_in_V_b_8_0_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 612 \
    name B_in_V_b_8_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_8_1 \
    op interface \
    ports { B_in_V_b_8_1_dout { I 16 vector } B_in_V_b_8_1_empty_n { I 1 bit } B_in_V_b_8_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 613 \
    name B_in_V_b_8_2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_8_2 \
    op interface \
    ports { B_in_V_b_8_2_dout { I 16 vector } B_in_V_b_8_2_empty_n { I 1 bit } B_in_V_b_8_2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 614 \
    name B_in_V_b_8_3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_8_3 \
    op interface \
    ports { B_in_V_b_8_3_dout { I 16 vector } B_in_V_b_8_3_empty_n { I 1 bit } B_in_V_b_8_3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 615 \
    name B_in_V_b_8_4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_8_4 \
    op interface \
    ports { B_in_V_b_8_4_dout { I 16 vector } B_in_V_b_8_4_empty_n { I 1 bit } B_in_V_b_8_4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 616 \
    name B_in_V_b_8_5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_8_5 \
    op interface \
    ports { B_in_V_b_8_5_dout { I 16 vector } B_in_V_b_8_5_empty_n { I 1 bit } B_in_V_b_8_5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 617 \
    name B_in_V_b_8_6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_8_6 \
    op interface \
    ports { B_in_V_b_8_6_dout { I 16 vector } B_in_V_b_8_6_empty_n { I 1 bit } B_in_V_b_8_6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 618 \
    name B_in_V_b_8_7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_8_7 \
    op interface \
    ports { B_in_V_b_8_7_dout { I 16 vector } B_in_V_b_8_7_empty_n { I 1 bit } B_in_V_b_8_7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 619 \
    name B_in_V_b_8_8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_8_8 \
    op interface \
    ports { B_in_V_b_8_8_dout { I 16 vector } B_in_V_b_8_8_empty_n { I 1 bit } B_in_V_b_8_8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 620 \
    name B_in_V_b_8_9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_8_9 \
    op interface \
    ports { B_in_V_b_8_9_dout { I 16 vector } B_in_V_b_8_9_empty_n { I 1 bit } B_in_V_b_8_9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 621 \
    name B_in_V_b_9_0 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_9_0 \
    op interface \
    ports { B_in_V_b_9_0_dout { I 16 vector } B_in_V_b_9_0_empty_n { I 1 bit } B_in_V_b_9_0_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 622 \
    name B_in_V_b_9_1 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_9_1 \
    op interface \
    ports { B_in_V_b_9_1_dout { I 16 vector } B_in_V_b_9_1_empty_n { I 1 bit } B_in_V_b_9_1_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 623 \
    name B_in_V_b_9_2 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_9_2 \
    op interface \
    ports { B_in_V_b_9_2_dout { I 16 vector } B_in_V_b_9_2_empty_n { I 1 bit } B_in_V_b_9_2_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 624 \
    name B_in_V_b_9_3 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_9_3 \
    op interface \
    ports { B_in_V_b_9_3_dout { I 16 vector } B_in_V_b_9_3_empty_n { I 1 bit } B_in_V_b_9_3_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 625 \
    name B_in_V_b_9_4 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_9_4 \
    op interface \
    ports { B_in_V_b_9_4_dout { I 16 vector } B_in_V_b_9_4_empty_n { I 1 bit } B_in_V_b_9_4_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 626 \
    name B_in_V_b_9_5 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_9_5 \
    op interface \
    ports { B_in_V_b_9_5_dout { I 16 vector } B_in_V_b_9_5_empty_n { I 1 bit } B_in_V_b_9_5_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 627 \
    name B_in_V_b_9_6 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_9_6 \
    op interface \
    ports { B_in_V_b_9_6_dout { I 16 vector } B_in_V_b_9_6_empty_n { I 1 bit } B_in_V_b_9_6_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 628 \
    name B_in_V_b_9_7 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_9_7 \
    op interface \
    ports { B_in_V_b_9_7_dout { I 16 vector } B_in_V_b_9_7_empty_n { I 1 bit } B_in_V_b_9_7_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 629 \
    name B_in_V_b_9_8 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_9_8 \
    op interface \
    ports { B_in_V_b_9_8_dout { I 16 vector } B_in_V_b_9_8_empty_n { I 1 bit } B_in_V_b_9_8_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 630 \
    name B_in_V_b_9_9 \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_B_in_V_b_9_9 \
    op interface \
    ports { B_in_V_b_9_9_dout { I 16 vector } B_in_V_b_9_9_empty_n { I 1 bit } B_in_V_b_9_9_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 631 \
    name Out_out_V_out_0_0 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_0_0 \
    op interface \
    ports { Out_out_V_out_0_0_din { O 16 vector } Out_out_V_out_0_0_full_n { I 1 bit } Out_out_V_out_0_0_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 632 \
    name Out_out_V_out_0_1 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_0_1 \
    op interface \
    ports { Out_out_V_out_0_1_din { O 16 vector } Out_out_V_out_0_1_full_n { I 1 bit } Out_out_V_out_0_1_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 633 \
    name Out_out_V_out_0_2 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_0_2 \
    op interface \
    ports { Out_out_V_out_0_2_din { O 16 vector } Out_out_V_out_0_2_full_n { I 1 bit } Out_out_V_out_0_2_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 634 \
    name Out_out_V_out_0_3 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_0_3 \
    op interface \
    ports { Out_out_V_out_0_3_din { O 16 vector } Out_out_V_out_0_3_full_n { I 1 bit } Out_out_V_out_0_3_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 635 \
    name Out_out_V_out_0_4 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_0_4 \
    op interface \
    ports { Out_out_V_out_0_4_din { O 16 vector } Out_out_V_out_0_4_full_n { I 1 bit } Out_out_V_out_0_4_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 636 \
    name Out_out_V_out_0_5 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_0_5 \
    op interface \
    ports { Out_out_V_out_0_5_din { O 16 vector } Out_out_V_out_0_5_full_n { I 1 bit } Out_out_V_out_0_5_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 637 \
    name Out_out_V_out_0_6 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_0_6 \
    op interface \
    ports { Out_out_V_out_0_6_din { O 16 vector } Out_out_V_out_0_6_full_n { I 1 bit } Out_out_V_out_0_6_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 638 \
    name Out_out_V_out_0_7 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_0_7 \
    op interface \
    ports { Out_out_V_out_0_7_din { O 16 vector } Out_out_V_out_0_7_full_n { I 1 bit } Out_out_V_out_0_7_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 639 \
    name Out_out_V_out_0_8 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_0_8 \
    op interface \
    ports { Out_out_V_out_0_8_din { O 16 vector } Out_out_V_out_0_8_full_n { I 1 bit } Out_out_V_out_0_8_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 640 \
    name Out_out_V_out_0_9 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_0_9 \
    op interface \
    ports { Out_out_V_out_0_9_din { O 16 vector } Out_out_V_out_0_9_full_n { I 1 bit } Out_out_V_out_0_9_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 641 \
    name Out_out_V_out_1_0 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_1_0 \
    op interface \
    ports { Out_out_V_out_1_0_din { O 16 vector } Out_out_V_out_1_0_full_n { I 1 bit } Out_out_V_out_1_0_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 642 \
    name Out_out_V_out_1_1 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_1_1 \
    op interface \
    ports { Out_out_V_out_1_1_din { O 16 vector } Out_out_V_out_1_1_full_n { I 1 bit } Out_out_V_out_1_1_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 643 \
    name Out_out_V_out_1_2 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_1_2 \
    op interface \
    ports { Out_out_V_out_1_2_din { O 16 vector } Out_out_V_out_1_2_full_n { I 1 bit } Out_out_V_out_1_2_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 644 \
    name Out_out_V_out_1_3 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_1_3 \
    op interface \
    ports { Out_out_V_out_1_3_din { O 16 vector } Out_out_V_out_1_3_full_n { I 1 bit } Out_out_V_out_1_3_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 645 \
    name Out_out_V_out_1_4 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_1_4 \
    op interface \
    ports { Out_out_V_out_1_4_din { O 16 vector } Out_out_V_out_1_4_full_n { I 1 bit } Out_out_V_out_1_4_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 646 \
    name Out_out_V_out_1_5 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_1_5 \
    op interface \
    ports { Out_out_V_out_1_5_din { O 16 vector } Out_out_V_out_1_5_full_n { I 1 bit } Out_out_V_out_1_5_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 647 \
    name Out_out_V_out_1_6 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_1_6 \
    op interface \
    ports { Out_out_V_out_1_6_din { O 16 vector } Out_out_V_out_1_6_full_n { I 1 bit } Out_out_V_out_1_6_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 648 \
    name Out_out_V_out_1_7 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_1_7 \
    op interface \
    ports { Out_out_V_out_1_7_din { O 16 vector } Out_out_V_out_1_7_full_n { I 1 bit } Out_out_V_out_1_7_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 649 \
    name Out_out_V_out_1_8 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_1_8 \
    op interface \
    ports { Out_out_V_out_1_8_din { O 16 vector } Out_out_V_out_1_8_full_n { I 1 bit } Out_out_V_out_1_8_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 650 \
    name Out_out_V_out_1_9 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_1_9 \
    op interface \
    ports { Out_out_V_out_1_9_din { O 16 vector } Out_out_V_out_1_9_full_n { I 1 bit } Out_out_V_out_1_9_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 651 \
    name Out_out_V_out_2_0 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_2_0 \
    op interface \
    ports { Out_out_V_out_2_0_din { O 16 vector } Out_out_V_out_2_0_full_n { I 1 bit } Out_out_V_out_2_0_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 652 \
    name Out_out_V_out_2_1 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_2_1 \
    op interface \
    ports { Out_out_V_out_2_1_din { O 16 vector } Out_out_V_out_2_1_full_n { I 1 bit } Out_out_V_out_2_1_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 653 \
    name Out_out_V_out_2_2 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_2_2 \
    op interface \
    ports { Out_out_V_out_2_2_din { O 16 vector } Out_out_V_out_2_2_full_n { I 1 bit } Out_out_V_out_2_2_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 654 \
    name Out_out_V_out_2_3 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_2_3 \
    op interface \
    ports { Out_out_V_out_2_3_din { O 16 vector } Out_out_V_out_2_3_full_n { I 1 bit } Out_out_V_out_2_3_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 655 \
    name Out_out_V_out_2_4 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_2_4 \
    op interface \
    ports { Out_out_V_out_2_4_din { O 16 vector } Out_out_V_out_2_4_full_n { I 1 bit } Out_out_V_out_2_4_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 656 \
    name Out_out_V_out_2_5 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_2_5 \
    op interface \
    ports { Out_out_V_out_2_5_din { O 16 vector } Out_out_V_out_2_5_full_n { I 1 bit } Out_out_V_out_2_5_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 657 \
    name Out_out_V_out_2_6 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_2_6 \
    op interface \
    ports { Out_out_V_out_2_6_din { O 16 vector } Out_out_V_out_2_6_full_n { I 1 bit } Out_out_V_out_2_6_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 658 \
    name Out_out_V_out_2_7 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_2_7 \
    op interface \
    ports { Out_out_V_out_2_7_din { O 16 vector } Out_out_V_out_2_7_full_n { I 1 bit } Out_out_V_out_2_7_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 659 \
    name Out_out_V_out_2_8 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_2_8 \
    op interface \
    ports { Out_out_V_out_2_8_din { O 16 vector } Out_out_V_out_2_8_full_n { I 1 bit } Out_out_V_out_2_8_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 660 \
    name Out_out_V_out_2_9 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_2_9 \
    op interface \
    ports { Out_out_V_out_2_9_din { O 16 vector } Out_out_V_out_2_9_full_n { I 1 bit } Out_out_V_out_2_9_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 661 \
    name Out_out_V_out_3_0 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_3_0 \
    op interface \
    ports { Out_out_V_out_3_0_din { O 16 vector } Out_out_V_out_3_0_full_n { I 1 bit } Out_out_V_out_3_0_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 662 \
    name Out_out_V_out_3_1 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_3_1 \
    op interface \
    ports { Out_out_V_out_3_1_din { O 16 vector } Out_out_V_out_3_1_full_n { I 1 bit } Out_out_V_out_3_1_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 663 \
    name Out_out_V_out_3_2 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_3_2 \
    op interface \
    ports { Out_out_V_out_3_2_din { O 16 vector } Out_out_V_out_3_2_full_n { I 1 bit } Out_out_V_out_3_2_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 664 \
    name Out_out_V_out_3_3 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_3_3 \
    op interface \
    ports { Out_out_V_out_3_3_din { O 16 vector } Out_out_V_out_3_3_full_n { I 1 bit } Out_out_V_out_3_3_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 665 \
    name Out_out_V_out_3_4 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_3_4 \
    op interface \
    ports { Out_out_V_out_3_4_din { O 16 vector } Out_out_V_out_3_4_full_n { I 1 bit } Out_out_V_out_3_4_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 666 \
    name Out_out_V_out_3_5 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_3_5 \
    op interface \
    ports { Out_out_V_out_3_5_din { O 16 vector } Out_out_V_out_3_5_full_n { I 1 bit } Out_out_V_out_3_5_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 667 \
    name Out_out_V_out_3_6 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_3_6 \
    op interface \
    ports { Out_out_V_out_3_6_din { O 16 vector } Out_out_V_out_3_6_full_n { I 1 bit } Out_out_V_out_3_6_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 668 \
    name Out_out_V_out_3_7 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_3_7 \
    op interface \
    ports { Out_out_V_out_3_7_din { O 16 vector } Out_out_V_out_3_7_full_n { I 1 bit } Out_out_V_out_3_7_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 669 \
    name Out_out_V_out_3_8 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_3_8 \
    op interface \
    ports { Out_out_V_out_3_8_din { O 16 vector } Out_out_V_out_3_8_full_n { I 1 bit } Out_out_V_out_3_8_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 670 \
    name Out_out_V_out_3_9 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_3_9 \
    op interface \
    ports { Out_out_V_out_3_9_din { O 16 vector } Out_out_V_out_3_9_full_n { I 1 bit } Out_out_V_out_3_9_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 671 \
    name Out_out_V_out_4_0 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_4_0 \
    op interface \
    ports { Out_out_V_out_4_0_din { O 16 vector } Out_out_V_out_4_0_full_n { I 1 bit } Out_out_V_out_4_0_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 672 \
    name Out_out_V_out_4_1 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_4_1 \
    op interface \
    ports { Out_out_V_out_4_1_din { O 16 vector } Out_out_V_out_4_1_full_n { I 1 bit } Out_out_V_out_4_1_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 673 \
    name Out_out_V_out_4_2 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_4_2 \
    op interface \
    ports { Out_out_V_out_4_2_din { O 16 vector } Out_out_V_out_4_2_full_n { I 1 bit } Out_out_V_out_4_2_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 674 \
    name Out_out_V_out_4_3 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_4_3 \
    op interface \
    ports { Out_out_V_out_4_3_din { O 16 vector } Out_out_V_out_4_3_full_n { I 1 bit } Out_out_V_out_4_3_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 675 \
    name Out_out_V_out_4_4 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_4_4 \
    op interface \
    ports { Out_out_V_out_4_4_din { O 16 vector } Out_out_V_out_4_4_full_n { I 1 bit } Out_out_V_out_4_4_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 676 \
    name Out_out_V_out_4_5 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_4_5 \
    op interface \
    ports { Out_out_V_out_4_5_din { O 16 vector } Out_out_V_out_4_5_full_n { I 1 bit } Out_out_V_out_4_5_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 677 \
    name Out_out_V_out_4_6 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_4_6 \
    op interface \
    ports { Out_out_V_out_4_6_din { O 16 vector } Out_out_V_out_4_6_full_n { I 1 bit } Out_out_V_out_4_6_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 678 \
    name Out_out_V_out_4_7 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_4_7 \
    op interface \
    ports { Out_out_V_out_4_7_din { O 16 vector } Out_out_V_out_4_7_full_n { I 1 bit } Out_out_V_out_4_7_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 679 \
    name Out_out_V_out_4_8 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_4_8 \
    op interface \
    ports { Out_out_V_out_4_8_din { O 16 vector } Out_out_V_out_4_8_full_n { I 1 bit } Out_out_V_out_4_8_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 680 \
    name Out_out_V_out_4_9 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_4_9 \
    op interface \
    ports { Out_out_V_out_4_9_din { O 16 vector } Out_out_V_out_4_9_full_n { I 1 bit } Out_out_V_out_4_9_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 681 \
    name Out_out_V_out_5_0 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_5_0 \
    op interface \
    ports { Out_out_V_out_5_0_din { O 16 vector } Out_out_V_out_5_0_full_n { I 1 bit } Out_out_V_out_5_0_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 682 \
    name Out_out_V_out_5_1 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_5_1 \
    op interface \
    ports { Out_out_V_out_5_1_din { O 16 vector } Out_out_V_out_5_1_full_n { I 1 bit } Out_out_V_out_5_1_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 683 \
    name Out_out_V_out_5_2 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_5_2 \
    op interface \
    ports { Out_out_V_out_5_2_din { O 16 vector } Out_out_V_out_5_2_full_n { I 1 bit } Out_out_V_out_5_2_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 684 \
    name Out_out_V_out_5_3 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_5_3 \
    op interface \
    ports { Out_out_V_out_5_3_din { O 16 vector } Out_out_V_out_5_3_full_n { I 1 bit } Out_out_V_out_5_3_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 685 \
    name Out_out_V_out_5_4 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_5_4 \
    op interface \
    ports { Out_out_V_out_5_4_din { O 16 vector } Out_out_V_out_5_4_full_n { I 1 bit } Out_out_V_out_5_4_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 686 \
    name Out_out_V_out_5_5 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_5_5 \
    op interface \
    ports { Out_out_V_out_5_5_din { O 16 vector } Out_out_V_out_5_5_full_n { I 1 bit } Out_out_V_out_5_5_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 687 \
    name Out_out_V_out_5_6 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_5_6 \
    op interface \
    ports { Out_out_V_out_5_6_din { O 16 vector } Out_out_V_out_5_6_full_n { I 1 bit } Out_out_V_out_5_6_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 688 \
    name Out_out_V_out_5_7 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_5_7 \
    op interface \
    ports { Out_out_V_out_5_7_din { O 16 vector } Out_out_V_out_5_7_full_n { I 1 bit } Out_out_V_out_5_7_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 689 \
    name Out_out_V_out_5_8 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_5_8 \
    op interface \
    ports { Out_out_V_out_5_8_din { O 16 vector } Out_out_V_out_5_8_full_n { I 1 bit } Out_out_V_out_5_8_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 690 \
    name Out_out_V_out_5_9 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_5_9 \
    op interface \
    ports { Out_out_V_out_5_9_din { O 16 vector } Out_out_V_out_5_9_full_n { I 1 bit } Out_out_V_out_5_9_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 691 \
    name Out_out_V_out_6_0 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_6_0 \
    op interface \
    ports { Out_out_V_out_6_0_din { O 16 vector } Out_out_V_out_6_0_full_n { I 1 bit } Out_out_V_out_6_0_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 692 \
    name Out_out_V_out_6_1 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_6_1 \
    op interface \
    ports { Out_out_V_out_6_1_din { O 16 vector } Out_out_V_out_6_1_full_n { I 1 bit } Out_out_V_out_6_1_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 693 \
    name Out_out_V_out_6_2 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_6_2 \
    op interface \
    ports { Out_out_V_out_6_2_din { O 16 vector } Out_out_V_out_6_2_full_n { I 1 bit } Out_out_V_out_6_2_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 694 \
    name Out_out_V_out_6_3 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_6_3 \
    op interface \
    ports { Out_out_V_out_6_3_din { O 16 vector } Out_out_V_out_6_3_full_n { I 1 bit } Out_out_V_out_6_3_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 695 \
    name Out_out_V_out_6_4 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_6_4 \
    op interface \
    ports { Out_out_V_out_6_4_din { O 16 vector } Out_out_V_out_6_4_full_n { I 1 bit } Out_out_V_out_6_4_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 696 \
    name Out_out_V_out_6_5 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_6_5 \
    op interface \
    ports { Out_out_V_out_6_5_din { O 16 vector } Out_out_V_out_6_5_full_n { I 1 bit } Out_out_V_out_6_5_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 697 \
    name Out_out_V_out_6_6 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_6_6 \
    op interface \
    ports { Out_out_V_out_6_6_din { O 16 vector } Out_out_V_out_6_6_full_n { I 1 bit } Out_out_V_out_6_6_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 698 \
    name Out_out_V_out_6_7 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_6_7 \
    op interface \
    ports { Out_out_V_out_6_7_din { O 16 vector } Out_out_V_out_6_7_full_n { I 1 bit } Out_out_V_out_6_7_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 699 \
    name Out_out_V_out_6_8 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_6_8 \
    op interface \
    ports { Out_out_V_out_6_8_din { O 16 vector } Out_out_V_out_6_8_full_n { I 1 bit } Out_out_V_out_6_8_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 700 \
    name Out_out_V_out_6_9 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_6_9 \
    op interface \
    ports { Out_out_V_out_6_9_din { O 16 vector } Out_out_V_out_6_9_full_n { I 1 bit } Out_out_V_out_6_9_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 701 \
    name Out_out_V_out_7_0 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_7_0 \
    op interface \
    ports { Out_out_V_out_7_0_din { O 16 vector } Out_out_V_out_7_0_full_n { I 1 bit } Out_out_V_out_7_0_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 702 \
    name Out_out_V_out_7_1 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_7_1 \
    op interface \
    ports { Out_out_V_out_7_1_din { O 16 vector } Out_out_V_out_7_1_full_n { I 1 bit } Out_out_V_out_7_1_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 703 \
    name Out_out_V_out_7_2 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_7_2 \
    op interface \
    ports { Out_out_V_out_7_2_din { O 16 vector } Out_out_V_out_7_2_full_n { I 1 bit } Out_out_V_out_7_2_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 704 \
    name Out_out_V_out_7_3 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_7_3 \
    op interface \
    ports { Out_out_V_out_7_3_din { O 16 vector } Out_out_V_out_7_3_full_n { I 1 bit } Out_out_V_out_7_3_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 705 \
    name Out_out_V_out_7_4 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_7_4 \
    op interface \
    ports { Out_out_V_out_7_4_din { O 16 vector } Out_out_V_out_7_4_full_n { I 1 bit } Out_out_V_out_7_4_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 706 \
    name Out_out_V_out_7_5 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_7_5 \
    op interface \
    ports { Out_out_V_out_7_5_din { O 16 vector } Out_out_V_out_7_5_full_n { I 1 bit } Out_out_V_out_7_5_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 707 \
    name Out_out_V_out_7_6 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_7_6 \
    op interface \
    ports { Out_out_V_out_7_6_din { O 16 vector } Out_out_V_out_7_6_full_n { I 1 bit } Out_out_V_out_7_6_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 708 \
    name Out_out_V_out_7_7 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_7_7 \
    op interface \
    ports { Out_out_V_out_7_7_din { O 16 vector } Out_out_V_out_7_7_full_n { I 1 bit } Out_out_V_out_7_7_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 709 \
    name Out_out_V_out_7_8 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_7_8 \
    op interface \
    ports { Out_out_V_out_7_8_din { O 16 vector } Out_out_V_out_7_8_full_n { I 1 bit } Out_out_V_out_7_8_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 710 \
    name Out_out_V_out_7_9 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_7_9 \
    op interface \
    ports { Out_out_V_out_7_9_din { O 16 vector } Out_out_V_out_7_9_full_n { I 1 bit } Out_out_V_out_7_9_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 711 \
    name Out_out_V_out_8_0 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_8_0 \
    op interface \
    ports { Out_out_V_out_8_0_din { O 16 vector } Out_out_V_out_8_0_full_n { I 1 bit } Out_out_V_out_8_0_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 712 \
    name Out_out_V_out_8_1 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_8_1 \
    op interface \
    ports { Out_out_V_out_8_1_din { O 16 vector } Out_out_V_out_8_1_full_n { I 1 bit } Out_out_V_out_8_1_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 713 \
    name Out_out_V_out_8_2 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_8_2 \
    op interface \
    ports { Out_out_V_out_8_2_din { O 16 vector } Out_out_V_out_8_2_full_n { I 1 bit } Out_out_V_out_8_2_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 714 \
    name Out_out_V_out_8_3 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_8_3 \
    op interface \
    ports { Out_out_V_out_8_3_din { O 16 vector } Out_out_V_out_8_3_full_n { I 1 bit } Out_out_V_out_8_3_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 715 \
    name Out_out_V_out_8_4 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_8_4 \
    op interface \
    ports { Out_out_V_out_8_4_din { O 16 vector } Out_out_V_out_8_4_full_n { I 1 bit } Out_out_V_out_8_4_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 716 \
    name Out_out_V_out_8_5 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_8_5 \
    op interface \
    ports { Out_out_V_out_8_5_din { O 16 vector } Out_out_V_out_8_5_full_n { I 1 bit } Out_out_V_out_8_5_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 717 \
    name Out_out_V_out_8_6 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_8_6 \
    op interface \
    ports { Out_out_V_out_8_6_din { O 16 vector } Out_out_V_out_8_6_full_n { I 1 bit } Out_out_V_out_8_6_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 718 \
    name Out_out_V_out_8_7 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_8_7 \
    op interface \
    ports { Out_out_V_out_8_7_din { O 16 vector } Out_out_V_out_8_7_full_n { I 1 bit } Out_out_V_out_8_7_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 719 \
    name Out_out_V_out_8_8 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_8_8 \
    op interface \
    ports { Out_out_V_out_8_8_din { O 16 vector } Out_out_V_out_8_8_full_n { I 1 bit } Out_out_V_out_8_8_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 720 \
    name Out_out_V_out_8_9 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_8_9 \
    op interface \
    ports { Out_out_V_out_8_9_din { O 16 vector } Out_out_V_out_8_9_full_n { I 1 bit } Out_out_V_out_8_9_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 721 \
    name Out_out_V_out_9_0 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_9_0 \
    op interface \
    ports { Out_out_V_out_9_0_din { O 16 vector } Out_out_V_out_9_0_full_n { I 1 bit } Out_out_V_out_9_0_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 722 \
    name Out_out_V_out_9_1 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_9_1 \
    op interface \
    ports { Out_out_V_out_9_1_din { O 16 vector } Out_out_V_out_9_1_full_n { I 1 bit } Out_out_V_out_9_1_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 723 \
    name Out_out_V_out_9_2 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_9_2 \
    op interface \
    ports { Out_out_V_out_9_2_din { O 16 vector } Out_out_V_out_9_2_full_n { I 1 bit } Out_out_V_out_9_2_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 724 \
    name Out_out_V_out_9_3 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_9_3 \
    op interface \
    ports { Out_out_V_out_9_3_din { O 16 vector } Out_out_V_out_9_3_full_n { I 1 bit } Out_out_V_out_9_3_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 725 \
    name Out_out_V_out_9_4 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_9_4 \
    op interface \
    ports { Out_out_V_out_9_4_din { O 16 vector } Out_out_V_out_9_4_full_n { I 1 bit } Out_out_V_out_9_4_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 726 \
    name Out_out_V_out_9_5 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_9_5 \
    op interface \
    ports { Out_out_V_out_9_5_din { O 16 vector } Out_out_V_out_9_5_full_n { I 1 bit } Out_out_V_out_9_5_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 727 \
    name Out_out_V_out_9_6 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_9_6 \
    op interface \
    ports { Out_out_V_out_9_6_din { O 16 vector } Out_out_V_out_9_6_full_n { I 1 bit } Out_out_V_out_9_6_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 728 \
    name Out_out_V_out_9_7 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_9_7 \
    op interface \
    ports { Out_out_V_out_9_7_din { O 16 vector } Out_out_V_out_9_7_full_n { I 1 bit } Out_out_V_out_9_7_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 729 \
    name Out_out_V_out_9_8 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_9_8 \
    op interface \
    ports { Out_out_V_out_9_8_din { O 16 vector } Out_out_V_out_9_8_full_n { I 1 bit } Out_out_V_out_9_8_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 730 \
    name Out_out_V_out_9_9 \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_Out_out_V_out_9_9 \
    op interface \
    ports { Out_out_V_out_9_9_din { O 16 vector } Out_out_V_out_9_9_full_n { I 1 bit } Out_out_V_out_9_9_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


