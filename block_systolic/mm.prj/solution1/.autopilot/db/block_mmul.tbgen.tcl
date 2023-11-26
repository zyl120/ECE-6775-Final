set moduleName block_mmul
set isTopModule 1
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {block_mmul}
set C_modelType { void 0 }
set C_modelArgList {
	{ ARows_V_a_0 int 16 regular {fifo 0 volatile }  }
	{ ARows_V_a_1 int 16 regular {fifo 0 volatile }  }
	{ ARows_V_a_2 int 16 regular {fifo 0 volatile }  }
	{ ARows_V_a_3 int 16 regular {fifo 0 volatile }  }
	{ ARows_V_a_4 int 16 regular {fifo 0 volatile }  }
	{ ARows_V_a_5 int 16 regular {fifo 0 volatile }  }
	{ ARows_V_a_6 int 16 regular {fifo 0 volatile }  }
	{ ARows_V_a_7 int 16 regular {fifo 0 volatile }  }
	{ ARows_V_a_8 int 16 regular {fifo 0 volatile }  }
	{ ARows_V_a_9 int 16 regular {fifo 0 volatile }  }
	{ BCols_V_a_0 int 16 regular {fifo 0 volatile }  }
	{ BCols_V_a_1 int 16 regular {fifo 0 volatile }  }
	{ BCols_V_a_2 int 16 regular {fifo 0 volatile }  }
	{ BCols_V_a_3 int 16 regular {fifo 0 volatile }  }
	{ BCols_V_a_4 int 16 regular {fifo 0 volatile }  }
	{ BCols_V_a_5 int 16 regular {fifo 0 volatile }  }
	{ BCols_V_a_6 int 16 regular {fifo 0 volatile }  }
	{ BCols_V_a_7 int 16 regular {fifo 0 volatile }  }
	{ BCols_V_a_8 int 16 regular {fifo 0 volatile }  }
	{ BCols_V_a_9 int 16 regular {fifo 0 volatile }  }
	{ abPartialSum_out int 16 regular {array 100 { 0 0 } 0 1 }  }
	{ iteration int 16 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "ARows_V_a_0", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "ARows.V.a","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_1", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "ARows.V.a","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_2", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "ARows.V.a","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_3", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "ARows.V.a","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_4", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "ARows.V.a","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_5", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "ARows.V.a","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_6", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "ARows.V.a","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_7", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "ARows.V.a","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_8", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "ARows.V.a","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 8,"up" : 8,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_9", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "ARows.V.a","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 9,"up" : 9,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_0", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "BCols.V.a","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_1", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "BCols.V.a","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_2", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "BCols.V.a","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_3", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "BCols.V.a","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_4", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "BCols.V.a","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_5", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "BCols.V.a","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_6", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "BCols.V.a","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_7", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "BCols.V.a","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_8", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "BCols.V.a","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 8,"up" : 8,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_9", "interface" : "fifo", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "BCols.V.a","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 9,"up" : 9,"step" : 2}]}]}]} , 
 	{ "Name" : "abPartialSum_out", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "abPartialSum.out","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}]} , 
 	{ "Name" : "iteration", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "iteration","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 75
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ARows_V_a_0_dout sc_in sc_lv 16 signal 0 } 
	{ ARows_V_a_0_empty_n sc_in sc_logic 1 signal 0 } 
	{ ARows_V_a_0_read sc_out sc_logic 1 signal 0 } 
	{ ARows_V_a_1_dout sc_in sc_lv 16 signal 1 } 
	{ ARows_V_a_1_empty_n sc_in sc_logic 1 signal 1 } 
	{ ARows_V_a_1_read sc_out sc_logic 1 signal 1 } 
	{ ARows_V_a_2_dout sc_in sc_lv 16 signal 2 } 
	{ ARows_V_a_2_empty_n sc_in sc_logic 1 signal 2 } 
	{ ARows_V_a_2_read sc_out sc_logic 1 signal 2 } 
	{ ARows_V_a_3_dout sc_in sc_lv 16 signal 3 } 
	{ ARows_V_a_3_empty_n sc_in sc_logic 1 signal 3 } 
	{ ARows_V_a_3_read sc_out sc_logic 1 signal 3 } 
	{ ARows_V_a_4_dout sc_in sc_lv 16 signal 4 } 
	{ ARows_V_a_4_empty_n sc_in sc_logic 1 signal 4 } 
	{ ARows_V_a_4_read sc_out sc_logic 1 signal 4 } 
	{ ARows_V_a_5_dout sc_in sc_lv 16 signal 5 } 
	{ ARows_V_a_5_empty_n sc_in sc_logic 1 signal 5 } 
	{ ARows_V_a_5_read sc_out sc_logic 1 signal 5 } 
	{ ARows_V_a_6_dout sc_in sc_lv 16 signal 6 } 
	{ ARows_V_a_6_empty_n sc_in sc_logic 1 signal 6 } 
	{ ARows_V_a_6_read sc_out sc_logic 1 signal 6 } 
	{ ARows_V_a_7_dout sc_in sc_lv 16 signal 7 } 
	{ ARows_V_a_7_empty_n sc_in sc_logic 1 signal 7 } 
	{ ARows_V_a_7_read sc_out sc_logic 1 signal 7 } 
	{ ARows_V_a_8_dout sc_in sc_lv 16 signal 8 } 
	{ ARows_V_a_8_empty_n sc_in sc_logic 1 signal 8 } 
	{ ARows_V_a_8_read sc_out sc_logic 1 signal 8 } 
	{ ARows_V_a_9_dout sc_in sc_lv 16 signal 9 } 
	{ ARows_V_a_9_empty_n sc_in sc_logic 1 signal 9 } 
	{ ARows_V_a_9_read sc_out sc_logic 1 signal 9 } 
	{ BCols_V_a_0_dout sc_in sc_lv 16 signal 10 } 
	{ BCols_V_a_0_empty_n sc_in sc_logic 1 signal 10 } 
	{ BCols_V_a_0_read sc_out sc_logic 1 signal 10 } 
	{ BCols_V_a_1_dout sc_in sc_lv 16 signal 11 } 
	{ BCols_V_a_1_empty_n sc_in sc_logic 1 signal 11 } 
	{ BCols_V_a_1_read sc_out sc_logic 1 signal 11 } 
	{ BCols_V_a_2_dout sc_in sc_lv 16 signal 12 } 
	{ BCols_V_a_2_empty_n sc_in sc_logic 1 signal 12 } 
	{ BCols_V_a_2_read sc_out sc_logic 1 signal 12 } 
	{ BCols_V_a_3_dout sc_in sc_lv 16 signal 13 } 
	{ BCols_V_a_3_empty_n sc_in sc_logic 1 signal 13 } 
	{ BCols_V_a_3_read sc_out sc_logic 1 signal 13 } 
	{ BCols_V_a_4_dout sc_in sc_lv 16 signal 14 } 
	{ BCols_V_a_4_empty_n sc_in sc_logic 1 signal 14 } 
	{ BCols_V_a_4_read sc_out sc_logic 1 signal 14 } 
	{ BCols_V_a_5_dout sc_in sc_lv 16 signal 15 } 
	{ BCols_V_a_5_empty_n sc_in sc_logic 1 signal 15 } 
	{ BCols_V_a_5_read sc_out sc_logic 1 signal 15 } 
	{ BCols_V_a_6_dout sc_in sc_lv 16 signal 16 } 
	{ BCols_V_a_6_empty_n sc_in sc_logic 1 signal 16 } 
	{ BCols_V_a_6_read sc_out sc_logic 1 signal 16 } 
	{ BCols_V_a_7_dout sc_in sc_lv 16 signal 17 } 
	{ BCols_V_a_7_empty_n sc_in sc_logic 1 signal 17 } 
	{ BCols_V_a_7_read sc_out sc_logic 1 signal 17 } 
	{ BCols_V_a_8_dout sc_in sc_lv 16 signal 18 } 
	{ BCols_V_a_8_empty_n sc_in sc_logic 1 signal 18 } 
	{ BCols_V_a_8_read sc_out sc_logic 1 signal 18 } 
	{ BCols_V_a_9_dout sc_in sc_lv 16 signal 19 } 
	{ BCols_V_a_9_empty_n sc_in sc_logic 1 signal 19 } 
	{ BCols_V_a_9_read sc_out sc_logic 1 signal 19 } 
	{ abPartialSum_out_address0 sc_out sc_lv 7 signal 20 } 
	{ abPartialSum_out_ce0 sc_out sc_logic 1 signal 20 } 
	{ abPartialSum_out_we0 sc_out sc_logic 1 signal 20 } 
	{ abPartialSum_out_d0 sc_out sc_lv 16 signal 20 } 
	{ abPartialSum_out_address1 sc_out sc_lv 7 signal 20 } 
	{ abPartialSum_out_ce1 sc_out sc_logic 1 signal 20 } 
	{ abPartialSum_out_we1 sc_out sc_logic 1 signal 20 } 
	{ abPartialSum_out_d1 sc_out sc_lv 16 signal 20 } 
	{ iteration sc_in sc_lv 16 signal 21 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ARows_V_a_0_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ARows_V_a_0", "role": "dout" }} , 
 	{ "name": "ARows_V_a_0_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_0", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_0_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_0", "role": "read" }} , 
 	{ "name": "ARows_V_a_1_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ARows_V_a_1", "role": "dout" }} , 
 	{ "name": "ARows_V_a_1_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_1", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_1_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_1", "role": "read" }} , 
 	{ "name": "ARows_V_a_2_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ARows_V_a_2", "role": "dout" }} , 
 	{ "name": "ARows_V_a_2_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_2", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_2_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_2", "role": "read" }} , 
 	{ "name": "ARows_V_a_3_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ARows_V_a_3", "role": "dout" }} , 
 	{ "name": "ARows_V_a_3_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_3", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_3_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_3", "role": "read" }} , 
 	{ "name": "ARows_V_a_4_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ARows_V_a_4", "role": "dout" }} , 
 	{ "name": "ARows_V_a_4_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_4", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_4_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_4", "role": "read" }} , 
 	{ "name": "ARows_V_a_5_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ARows_V_a_5", "role": "dout" }} , 
 	{ "name": "ARows_V_a_5_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_5", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_5_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_5", "role": "read" }} , 
 	{ "name": "ARows_V_a_6_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ARows_V_a_6", "role": "dout" }} , 
 	{ "name": "ARows_V_a_6_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_6", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_6_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_6", "role": "read" }} , 
 	{ "name": "ARows_V_a_7_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ARows_V_a_7", "role": "dout" }} , 
 	{ "name": "ARows_V_a_7_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_7", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_7_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_7", "role": "read" }} , 
 	{ "name": "ARows_V_a_8_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ARows_V_a_8", "role": "dout" }} , 
 	{ "name": "ARows_V_a_8_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_8", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_8_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_8", "role": "read" }} , 
 	{ "name": "ARows_V_a_9_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "ARows_V_a_9", "role": "dout" }} , 
 	{ "name": "ARows_V_a_9_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_9", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_9_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_9", "role": "read" }} , 
 	{ "name": "BCols_V_a_0_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "BCols_V_a_0", "role": "dout" }} , 
 	{ "name": "BCols_V_a_0_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_0", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_0_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_0", "role": "read" }} , 
 	{ "name": "BCols_V_a_1_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "BCols_V_a_1", "role": "dout" }} , 
 	{ "name": "BCols_V_a_1_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_1", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_1_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_1", "role": "read" }} , 
 	{ "name": "BCols_V_a_2_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "BCols_V_a_2", "role": "dout" }} , 
 	{ "name": "BCols_V_a_2_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_2", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_2_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_2", "role": "read" }} , 
 	{ "name": "BCols_V_a_3_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "BCols_V_a_3", "role": "dout" }} , 
 	{ "name": "BCols_V_a_3_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_3", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_3_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_3", "role": "read" }} , 
 	{ "name": "BCols_V_a_4_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "BCols_V_a_4", "role": "dout" }} , 
 	{ "name": "BCols_V_a_4_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_4", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_4_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_4", "role": "read" }} , 
 	{ "name": "BCols_V_a_5_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "BCols_V_a_5", "role": "dout" }} , 
 	{ "name": "BCols_V_a_5_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_5", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_5_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_5", "role": "read" }} , 
 	{ "name": "BCols_V_a_6_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "BCols_V_a_6", "role": "dout" }} , 
 	{ "name": "BCols_V_a_6_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_6", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_6_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_6", "role": "read" }} , 
 	{ "name": "BCols_V_a_7_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "BCols_V_a_7", "role": "dout" }} , 
 	{ "name": "BCols_V_a_7_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_7", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_7_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_7", "role": "read" }} , 
 	{ "name": "BCols_V_a_8_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "BCols_V_a_8", "role": "dout" }} , 
 	{ "name": "BCols_V_a_8_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_8", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_8_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_8", "role": "read" }} , 
 	{ "name": "BCols_V_a_9_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "BCols_V_a_9", "role": "dout" }} , 
 	{ "name": "BCols_V_a_9_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_9", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_9_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_9", "role": "read" }} , 
 	{ "name": "abPartialSum_out_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "abPartialSum_out", "role": "address0" }} , 
 	{ "name": "abPartialSum_out_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "abPartialSum_out", "role": "ce0" }} , 
 	{ "name": "abPartialSum_out_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "abPartialSum_out", "role": "we0" }} , 
 	{ "name": "abPartialSum_out_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "abPartialSum_out", "role": "d0" }} , 
 	{ "name": "abPartialSum_out_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "abPartialSum_out", "role": "address1" }} , 
 	{ "name": "abPartialSum_out_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "abPartialSum_out", "role": "ce1" }} , 
 	{ "name": "abPartialSum_out_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "abPartialSum_out", "role": "we1" }} , 
 	{ "name": "abPartialSum_out_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "abPartialSum_out", "role": "d1" }} , 
 	{ "name": "iteration", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "iteration", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131"],
		"CDFG" : "block_mmul",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "10189", "EstimateLatencyMax" : "11190",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "ARows_V_a_0", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "ARows_V_a_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ARows_V_a_1", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "ARows_V_a_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ARows_V_a_2", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "ARows_V_a_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ARows_V_a_3", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "ARows_V_a_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ARows_V_a_4", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "ARows_V_a_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ARows_V_a_5", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "ARows_V_a_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ARows_V_a_6", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "ARows_V_a_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ARows_V_a_7", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "ARows_V_a_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ARows_V_a_8", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "ARows_V_a_8_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ARows_V_a_9", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "ARows_V_a_9_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "BCols_V_a_0", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "BCols_V_a_0_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "BCols_V_a_1", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "BCols_V_a_1_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "BCols_V_a_2", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "BCols_V_a_2_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "BCols_V_a_3", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "BCols_V_a_3_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "BCols_V_a_4", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "BCols_V_a_4_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "BCols_V_a_5", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "BCols_V_a_5_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "BCols_V_a_6", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "BCols_V_a_6_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "BCols_V_a_7", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "BCols_V_a_7_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "BCols_V_a_8", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "BCols_V_a_8_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "BCols_V_a_9", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "BCols_V_a_9_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "abPartialSum_out", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "iteration", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_9", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_1_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_2_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_3_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_4_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_5_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_6_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_7_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_8_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_9_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_0_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_1_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_2_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_3_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_4_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_5_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_6_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_7_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_8_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_9_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_srem_1bkb_U1", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mux_10cud_U2", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mux_10cud_U3", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mux_10cud_U4", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mux_10cud_U5", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mux_10cud_U6", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mux_10cud_U7", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mux_10cud_U8", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mux_10cud_U9", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mux_10cud_U10", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mux_10cud_U11", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U12", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U13", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U14", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U15", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U16", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U17", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U18", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U19", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U20", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U21", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U22", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U23", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U24", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U25", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U26", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U27", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U28", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U29", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U30", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U31", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U32", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U33", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U34", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U35", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U36", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U37", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U38", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U39", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U40", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U41", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U42", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U43", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U44", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U45", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U46", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U47", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U48", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U49", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U50", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U51", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U52", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U53", "Parent" : "0"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U54", "Parent" : "0"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U55", "Parent" : "0"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U56", "Parent" : "0"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U57", "Parent" : "0"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U58", "Parent" : "0"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U59", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U60", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U61", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U62", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U63", "Parent" : "0"},
	{"ID" : "84", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U64", "Parent" : "0"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U65", "Parent" : "0"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U66", "Parent" : "0"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U67", "Parent" : "0"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U68", "Parent" : "0"},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U69", "Parent" : "0"},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U70", "Parent" : "0"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U71", "Parent" : "0"},
	{"ID" : "92", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U72", "Parent" : "0"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U73", "Parent" : "0"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U74", "Parent" : "0"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U75", "Parent" : "0"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U76", "Parent" : "0"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U77", "Parent" : "0"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U78", "Parent" : "0"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U79", "Parent" : "0"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U80", "Parent" : "0"},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U81", "Parent" : "0"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U82", "Parent" : "0"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U83", "Parent" : "0"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U84", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U85", "Parent" : "0"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U86", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U87", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U88", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U89", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U90", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U91", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U92", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U93", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U94", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U95", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U96", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U97", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U98", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U99", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U100", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U101", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U102", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U103", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U104", "Parent" : "0"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U105", "Parent" : "0"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U106", "Parent" : "0"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U107", "Parent" : "0"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U108", "Parent" : "0"},
	{"ID" : "129", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U109", "Parent" : "0"},
	{"ID" : "130", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U110", "Parent" : "0"},
	{"ID" : "131", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mac_mudEe_U111", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	block_mmul {
		ARows_V_a_0 {Type I LastRead 21 FirstWrite -1}
		ARows_V_a_1 {Type I LastRead 21 FirstWrite -1}
		ARows_V_a_2 {Type I LastRead 21 FirstWrite -1}
		ARows_V_a_3 {Type I LastRead 21 FirstWrite -1}
		ARows_V_a_4 {Type I LastRead 21 FirstWrite -1}
		ARows_V_a_5 {Type I LastRead 21 FirstWrite -1}
		ARows_V_a_6 {Type I LastRead 21 FirstWrite -1}
		ARows_V_a_7 {Type I LastRead 21 FirstWrite -1}
		ARows_V_a_8 {Type I LastRead 21 FirstWrite -1}
		ARows_V_a_9 {Type I LastRead 21 FirstWrite -1}
		BCols_V_a_0 {Type I LastRead 25 FirstWrite -1}
		BCols_V_a_1 {Type I LastRead 25 FirstWrite -1}
		BCols_V_a_2 {Type I LastRead 25 FirstWrite -1}
		BCols_V_a_3 {Type I LastRead 25 FirstWrite -1}
		BCols_V_a_4 {Type I LastRead 25 FirstWrite -1}
		BCols_V_a_5 {Type I LastRead 25 FirstWrite -1}
		BCols_V_a_6 {Type I LastRead 25 FirstWrite -1}
		BCols_V_a_7 {Type I LastRead 25 FirstWrite -1}
		BCols_V_a_8 {Type I LastRead 25 FirstWrite -1}
		BCols_V_a_9 {Type I LastRead 25 FirstWrite -1}
		abPartialSum_out {Type O LastRead -1 FirstWrite 31}
		iteration {Type I LastRead 0 FirstWrite -1}
		A_0 {Type IO LastRead -1 FirstWrite -1}
		A_1 {Type IO LastRead -1 FirstWrite -1}
		A_2 {Type IO LastRead -1 FirstWrite -1}
		A_3 {Type IO LastRead -1 FirstWrite -1}
		A_4 {Type IO LastRead -1 FirstWrite -1}
		A_5 {Type IO LastRead -1 FirstWrite -1}
		A_6 {Type IO LastRead -1 FirstWrite -1}
		A_7 {Type IO LastRead -1 FirstWrite -1}
		A_8 {Type IO LastRead -1 FirstWrite -1}
		A_9 {Type IO LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "10189", "Max" : "11190"}
	, {"Name" : "Interval", "Min" : "10190", "Max" : "11191"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	ARows_V_a_0 { ap_fifo {  { ARows_V_a_0_dout fifo_data 0 16 }  { ARows_V_a_0_empty_n fifo_status 0 1 }  { ARows_V_a_0_read fifo_update 1 1 } } }
	ARows_V_a_1 { ap_fifo {  { ARows_V_a_1_dout fifo_data 0 16 }  { ARows_V_a_1_empty_n fifo_status 0 1 }  { ARows_V_a_1_read fifo_update 1 1 } } }
	ARows_V_a_2 { ap_fifo {  { ARows_V_a_2_dout fifo_data 0 16 }  { ARows_V_a_2_empty_n fifo_status 0 1 }  { ARows_V_a_2_read fifo_update 1 1 } } }
	ARows_V_a_3 { ap_fifo {  { ARows_V_a_3_dout fifo_data 0 16 }  { ARows_V_a_3_empty_n fifo_status 0 1 }  { ARows_V_a_3_read fifo_update 1 1 } } }
	ARows_V_a_4 { ap_fifo {  { ARows_V_a_4_dout fifo_data 0 16 }  { ARows_V_a_4_empty_n fifo_status 0 1 }  { ARows_V_a_4_read fifo_update 1 1 } } }
	ARows_V_a_5 { ap_fifo {  { ARows_V_a_5_dout fifo_data 0 16 }  { ARows_V_a_5_empty_n fifo_status 0 1 }  { ARows_V_a_5_read fifo_update 1 1 } } }
	ARows_V_a_6 { ap_fifo {  { ARows_V_a_6_dout fifo_data 0 16 }  { ARows_V_a_6_empty_n fifo_status 0 1 }  { ARows_V_a_6_read fifo_update 1 1 } } }
	ARows_V_a_7 { ap_fifo {  { ARows_V_a_7_dout fifo_data 0 16 }  { ARows_V_a_7_empty_n fifo_status 0 1 }  { ARows_V_a_7_read fifo_update 1 1 } } }
	ARows_V_a_8 { ap_fifo {  { ARows_V_a_8_dout fifo_data 0 16 }  { ARows_V_a_8_empty_n fifo_status 0 1 }  { ARows_V_a_8_read fifo_update 1 1 } } }
	ARows_V_a_9 { ap_fifo {  { ARows_V_a_9_dout fifo_data 0 16 }  { ARows_V_a_9_empty_n fifo_status 0 1 }  { ARows_V_a_9_read fifo_update 1 1 } } }
	BCols_V_a_0 { ap_fifo {  { BCols_V_a_0_dout fifo_data 0 16 }  { BCols_V_a_0_empty_n fifo_status 0 1 }  { BCols_V_a_0_read fifo_update 1 1 } } }
	BCols_V_a_1 { ap_fifo {  { BCols_V_a_1_dout fifo_data 0 16 }  { BCols_V_a_1_empty_n fifo_status 0 1 }  { BCols_V_a_1_read fifo_update 1 1 } } }
	BCols_V_a_2 { ap_fifo {  { BCols_V_a_2_dout fifo_data 0 16 }  { BCols_V_a_2_empty_n fifo_status 0 1 }  { BCols_V_a_2_read fifo_update 1 1 } } }
	BCols_V_a_3 { ap_fifo {  { BCols_V_a_3_dout fifo_data 0 16 }  { BCols_V_a_3_empty_n fifo_status 0 1 }  { BCols_V_a_3_read fifo_update 1 1 } } }
	BCols_V_a_4 { ap_fifo {  { BCols_V_a_4_dout fifo_data 0 16 }  { BCols_V_a_4_empty_n fifo_status 0 1 }  { BCols_V_a_4_read fifo_update 1 1 } } }
	BCols_V_a_5 { ap_fifo {  { BCols_V_a_5_dout fifo_data 0 16 }  { BCols_V_a_5_empty_n fifo_status 0 1 }  { BCols_V_a_5_read fifo_update 1 1 } } }
	BCols_V_a_6 { ap_fifo {  { BCols_V_a_6_dout fifo_data 0 16 }  { BCols_V_a_6_empty_n fifo_status 0 1 }  { BCols_V_a_6_read fifo_update 1 1 } } }
	BCols_V_a_7 { ap_fifo {  { BCols_V_a_7_dout fifo_data 0 16 }  { BCols_V_a_7_empty_n fifo_status 0 1 }  { BCols_V_a_7_read fifo_update 1 1 } } }
	BCols_V_a_8 { ap_fifo {  { BCols_V_a_8_dout fifo_data 0 16 }  { BCols_V_a_8_empty_n fifo_status 0 1 }  { BCols_V_a_8_read fifo_update 1 1 } } }
	BCols_V_a_9 { ap_fifo {  { BCols_V_a_9_dout fifo_data 0 16 }  { BCols_V_a_9_empty_n fifo_status 0 1 }  { BCols_V_a_9_read fifo_update 1 1 } } }
	abPartialSum_out { ap_memory {  { abPartialSum_out_address0 mem_address 1 7 }  { abPartialSum_out_ce0 mem_ce 1 1 }  { abPartialSum_out_we0 mem_we 1 1 }  { abPartialSum_out_d0 mem_din 1 16 }  { abPartialSum_out_address1 MemPortADDR2 1 7 }  { abPartialSum_out_ce1 MemPortCE2 1 1 }  { abPartialSum_out_we1 MemPortWE2 1 1 }  { abPartialSum_out_d1 MemPortDIN2 1 16 } } }
	iteration { ap_none {  { iteration in_data 0 16 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
	ARows_V_a_0 { fifo_read 1000 has_conditional }
	ARows_V_a_1 { fifo_read 1000 has_conditional }
	ARows_V_a_2 { fifo_read 1000 has_conditional }
	ARows_V_a_3 { fifo_read 1000 has_conditional }
	ARows_V_a_4 { fifo_read 1000 has_conditional }
	ARows_V_a_5 { fifo_read 1000 has_conditional }
	ARows_V_a_6 { fifo_read 1000 has_conditional }
	ARows_V_a_7 { fifo_read 1000 has_conditional }
	ARows_V_a_8 { fifo_read 1000 has_conditional }
	ARows_V_a_9 { fifo_read 1000 has_conditional }
	BCols_V_a_0 { fifo_read 1000 has_conditional }
	BCols_V_a_1 { fifo_read 1000 has_conditional }
	BCols_V_a_2 { fifo_read 1000 has_conditional }
	BCols_V_a_3 { fifo_read 1000 has_conditional }
	BCols_V_a_4 { fifo_read 1000 has_conditional }
	BCols_V_a_5 { fifo_read 1000 has_conditional }
	BCols_V_a_6 { fifo_read 1000 has_conditional }
	BCols_V_a_7 { fifo_read 1000 has_conditional }
	BCols_V_a_8 { fifo_read 1000 has_conditional }
	BCols_V_a_9 { fifo_read 1000 has_conditional }
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
