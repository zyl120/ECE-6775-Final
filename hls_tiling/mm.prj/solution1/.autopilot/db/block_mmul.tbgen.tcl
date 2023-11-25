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
	{ ARows_V_a_0 int 32 regular {fifo 0 volatile }  }
	{ ARows_V_a_1 int 32 regular {fifo 0 volatile }  }
	{ ARows_V_a_2 int 32 regular {fifo 0 volatile }  }
	{ ARows_V_a_3 int 32 regular {fifo 0 volatile }  }
	{ ARows_V_a_4 int 32 regular {fifo 0 volatile }  }
	{ ARows_V_a_5 int 32 regular {fifo 0 volatile }  }
	{ ARows_V_a_6 int 32 regular {fifo 0 volatile }  }
	{ ARows_V_a_7 int 32 regular {fifo 0 volatile }  }
	{ ARows_V_a_8 int 32 regular {fifo 0 volatile }  }
	{ ARows_V_a_9 int 32 regular {fifo 0 volatile }  }
	{ ARows_V_a_10 int 32 regular {fifo 0 volatile }  }
	{ ARows_V_a_11 int 32 regular {fifo 0 volatile }  }
	{ ARows_V_a_12 int 32 regular {fifo 0 volatile }  }
	{ ARows_V_a_13 int 32 regular {fifo 0 volatile }  }
	{ ARows_V_a_14 int 32 regular {fifo 0 volatile }  }
	{ ARows_V_a_15 int 32 regular {fifo 0 volatile }  }
	{ ARows_V_a_16 int 32 regular {fifo 0 volatile }  }
	{ ARows_V_a_17 int 32 regular {fifo 0 volatile }  }
	{ ARows_V_a_18 int 32 regular {fifo 0 volatile }  }
	{ ARows_V_a_19 int 32 regular {fifo 0 volatile }  }
	{ BCols_V_a_0 int 32 regular {fifo 0 volatile }  }
	{ BCols_V_a_1 int 32 regular {fifo 0 volatile }  }
	{ BCols_V_a_2 int 32 regular {fifo 0 volatile }  }
	{ BCols_V_a_3 int 32 regular {fifo 0 volatile }  }
	{ BCols_V_a_4 int 32 regular {fifo 0 volatile }  }
	{ BCols_V_a_5 int 32 regular {fifo 0 volatile }  }
	{ BCols_V_a_6 int 32 regular {fifo 0 volatile }  }
	{ BCols_V_a_7 int 32 regular {fifo 0 volatile }  }
	{ BCols_V_a_8 int 32 regular {fifo 0 volatile }  }
	{ BCols_V_a_9 int 32 regular {fifo 0 volatile }  }
	{ BCols_V_a_10 int 32 regular {fifo 0 volatile }  }
	{ BCols_V_a_11 int 32 regular {fifo 0 volatile }  }
	{ BCols_V_a_12 int 32 regular {fifo 0 volatile }  }
	{ BCols_V_a_13 int 32 regular {fifo 0 volatile }  }
	{ BCols_V_a_14 int 32 regular {fifo 0 volatile }  }
	{ BCols_V_a_15 int 32 regular {fifo 0 volatile }  }
	{ BCols_V_a_16 int 32 regular {fifo 0 volatile }  }
	{ BCols_V_a_17 int 32 regular {fifo 0 volatile }  }
	{ BCols_V_a_18 int 32 regular {fifo 0 volatile }  }
	{ BCols_V_a_19 int 32 regular {fifo 0 volatile }  }
	{ abPartialSum_out int 32 regular {array 400 { 0 0 } 0 1 }  }
	{ iteration int 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "ARows_V_a_0", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ARows.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_1", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ARows.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_2", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ARows.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_3", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ARows.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_4", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ARows.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_5", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ARows.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_6", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ARows.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_7", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ARows.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_8", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ARows.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 8,"up" : 8,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_9", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ARows.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 9,"up" : 9,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_10", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ARows.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 10,"up" : 10,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_11", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ARows.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 11,"up" : 11,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_12", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ARows.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 12,"up" : 12,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_13", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ARows.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 13,"up" : 13,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_14", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ARows.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 14,"up" : 14,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_15", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ARows.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 15,"up" : 15,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_16", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ARows.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 16,"up" : 16,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_17", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ARows.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 17,"up" : 17,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_18", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ARows.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 18,"up" : 18,"step" : 2}]}]}]} , 
 	{ "Name" : "ARows_V_a_19", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ARows.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 19,"up" : 19,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_0", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "BCols.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_1", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "BCols.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_2", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "BCols.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_3", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "BCols.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_4", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "BCols.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_5", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "BCols.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_6", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "BCols.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_7", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "BCols.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 7,"up" : 7,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_8", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "BCols.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 8,"up" : 8,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_9", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "BCols.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 9,"up" : 9,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_10", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "BCols.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 10,"up" : 10,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_11", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "BCols.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 11,"up" : 11,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_12", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "BCols.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 12,"up" : 12,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_13", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "BCols.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 13,"up" : 13,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_14", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "BCols.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 14,"up" : 14,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_15", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "BCols.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 15,"up" : 15,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_16", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "BCols.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 16,"up" : 16,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_17", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "BCols.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 17,"up" : 17,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_18", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "BCols.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 18,"up" : 18,"step" : 2}]}]}]} , 
 	{ "Name" : "BCols_V_a_19", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "BCols.V.a","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 19,"up" : 19,"step" : 2}]}]}]} , 
 	{ "Name" : "abPartialSum_out", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "abPartialSum.out","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 19,"step" : 1},{"low" : 0,"up" : 19,"step" : 1}]}]}]} , 
 	{ "Name" : "iteration", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "iteration","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 135
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ARows_V_a_0_dout sc_in sc_lv 32 signal 0 } 
	{ ARows_V_a_0_empty_n sc_in sc_logic 1 signal 0 } 
	{ ARows_V_a_0_read sc_out sc_logic 1 signal 0 } 
	{ ARows_V_a_1_dout sc_in sc_lv 32 signal 1 } 
	{ ARows_V_a_1_empty_n sc_in sc_logic 1 signal 1 } 
	{ ARows_V_a_1_read sc_out sc_logic 1 signal 1 } 
	{ ARows_V_a_2_dout sc_in sc_lv 32 signal 2 } 
	{ ARows_V_a_2_empty_n sc_in sc_logic 1 signal 2 } 
	{ ARows_V_a_2_read sc_out sc_logic 1 signal 2 } 
	{ ARows_V_a_3_dout sc_in sc_lv 32 signal 3 } 
	{ ARows_V_a_3_empty_n sc_in sc_logic 1 signal 3 } 
	{ ARows_V_a_3_read sc_out sc_logic 1 signal 3 } 
	{ ARows_V_a_4_dout sc_in sc_lv 32 signal 4 } 
	{ ARows_V_a_4_empty_n sc_in sc_logic 1 signal 4 } 
	{ ARows_V_a_4_read sc_out sc_logic 1 signal 4 } 
	{ ARows_V_a_5_dout sc_in sc_lv 32 signal 5 } 
	{ ARows_V_a_5_empty_n sc_in sc_logic 1 signal 5 } 
	{ ARows_V_a_5_read sc_out sc_logic 1 signal 5 } 
	{ ARows_V_a_6_dout sc_in sc_lv 32 signal 6 } 
	{ ARows_V_a_6_empty_n sc_in sc_logic 1 signal 6 } 
	{ ARows_V_a_6_read sc_out sc_logic 1 signal 6 } 
	{ ARows_V_a_7_dout sc_in sc_lv 32 signal 7 } 
	{ ARows_V_a_7_empty_n sc_in sc_logic 1 signal 7 } 
	{ ARows_V_a_7_read sc_out sc_logic 1 signal 7 } 
	{ ARows_V_a_8_dout sc_in sc_lv 32 signal 8 } 
	{ ARows_V_a_8_empty_n sc_in sc_logic 1 signal 8 } 
	{ ARows_V_a_8_read sc_out sc_logic 1 signal 8 } 
	{ ARows_V_a_9_dout sc_in sc_lv 32 signal 9 } 
	{ ARows_V_a_9_empty_n sc_in sc_logic 1 signal 9 } 
	{ ARows_V_a_9_read sc_out sc_logic 1 signal 9 } 
	{ ARows_V_a_10_dout sc_in sc_lv 32 signal 10 } 
	{ ARows_V_a_10_empty_n sc_in sc_logic 1 signal 10 } 
	{ ARows_V_a_10_read sc_out sc_logic 1 signal 10 } 
	{ ARows_V_a_11_dout sc_in sc_lv 32 signal 11 } 
	{ ARows_V_a_11_empty_n sc_in sc_logic 1 signal 11 } 
	{ ARows_V_a_11_read sc_out sc_logic 1 signal 11 } 
	{ ARows_V_a_12_dout sc_in sc_lv 32 signal 12 } 
	{ ARows_V_a_12_empty_n sc_in sc_logic 1 signal 12 } 
	{ ARows_V_a_12_read sc_out sc_logic 1 signal 12 } 
	{ ARows_V_a_13_dout sc_in sc_lv 32 signal 13 } 
	{ ARows_V_a_13_empty_n sc_in sc_logic 1 signal 13 } 
	{ ARows_V_a_13_read sc_out sc_logic 1 signal 13 } 
	{ ARows_V_a_14_dout sc_in sc_lv 32 signal 14 } 
	{ ARows_V_a_14_empty_n sc_in sc_logic 1 signal 14 } 
	{ ARows_V_a_14_read sc_out sc_logic 1 signal 14 } 
	{ ARows_V_a_15_dout sc_in sc_lv 32 signal 15 } 
	{ ARows_V_a_15_empty_n sc_in sc_logic 1 signal 15 } 
	{ ARows_V_a_15_read sc_out sc_logic 1 signal 15 } 
	{ ARows_V_a_16_dout sc_in sc_lv 32 signal 16 } 
	{ ARows_V_a_16_empty_n sc_in sc_logic 1 signal 16 } 
	{ ARows_V_a_16_read sc_out sc_logic 1 signal 16 } 
	{ ARows_V_a_17_dout sc_in sc_lv 32 signal 17 } 
	{ ARows_V_a_17_empty_n sc_in sc_logic 1 signal 17 } 
	{ ARows_V_a_17_read sc_out sc_logic 1 signal 17 } 
	{ ARows_V_a_18_dout sc_in sc_lv 32 signal 18 } 
	{ ARows_V_a_18_empty_n sc_in sc_logic 1 signal 18 } 
	{ ARows_V_a_18_read sc_out sc_logic 1 signal 18 } 
	{ ARows_V_a_19_dout sc_in sc_lv 32 signal 19 } 
	{ ARows_V_a_19_empty_n sc_in sc_logic 1 signal 19 } 
	{ ARows_V_a_19_read sc_out sc_logic 1 signal 19 } 
	{ BCols_V_a_0_dout sc_in sc_lv 32 signal 20 } 
	{ BCols_V_a_0_empty_n sc_in sc_logic 1 signal 20 } 
	{ BCols_V_a_0_read sc_out sc_logic 1 signal 20 } 
	{ BCols_V_a_1_dout sc_in sc_lv 32 signal 21 } 
	{ BCols_V_a_1_empty_n sc_in sc_logic 1 signal 21 } 
	{ BCols_V_a_1_read sc_out sc_logic 1 signal 21 } 
	{ BCols_V_a_2_dout sc_in sc_lv 32 signal 22 } 
	{ BCols_V_a_2_empty_n sc_in sc_logic 1 signal 22 } 
	{ BCols_V_a_2_read sc_out sc_logic 1 signal 22 } 
	{ BCols_V_a_3_dout sc_in sc_lv 32 signal 23 } 
	{ BCols_V_a_3_empty_n sc_in sc_logic 1 signal 23 } 
	{ BCols_V_a_3_read sc_out sc_logic 1 signal 23 } 
	{ BCols_V_a_4_dout sc_in sc_lv 32 signal 24 } 
	{ BCols_V_a_4_empty_n sc_in sc_logic 1 signal 24 } 
	{ BCols_V_a_4_read sc_out sc_logic 1 signal 24 } 
	{ BCols_V_a_5_dout sc_in sc_lv 32 signal 25 } 
	{ BCols_V_a_5_empty_n sc_in sc_logic 1 signal 25 } 
	{ BCols_V_a_5_read sc_out sc_logic 1 signal 25 } 
	{ BCols_V_a_6_dout sc_in sc_lv 32 signal 26 } 
	{ BCols_V_a_6_empty_n sc_in sc_logic 1 signal 26 } 
	{ BCols_V_a_6_read sc_out sc_logic 1 signal 26 } 
	{ BCols_V_a_7_dout sc_in sc_lv 32 signal 27 } 
	{ BCols_V_a_7_empty_n sc_in sc_logic 1 signal 27 } 
	{ BCols_V_a_7_read sc_out sc_logic 1 signal 27 } 
	{ BCols_V_a_8_dout sc_in sc_lv 32 signal 28 } 
	{ BCols_V_a_8_empty_n sc_in sc_logic 1 signal 28 } 
	{ BCols_V_a_8_read sc_out sc_logic 1 signal 28 } 
	{ BCols_V_a_9_dout sc_in sc_lv 32 signal 29 } 
	{ BCols_V_a_9_empty_n sc_in sc_logic 1 signal 29 } 
	{ BCols_V_a_9_read sc_out sc_logic 1 signal 29 } 
	{ BCols_V_a_10_dout sc_in sc_lv 32 signal 30 } 
	{ BCols_V_a_10_empty_n sc_in sc_logic 1 signal 30 } 
	{ BCols_V_a_10_read sc_out sc_logic 1 signal 30 } 
	{ BCols_V_a_11_dout sc_in sc_lv 32 signal 31 } 
	{ BCols_V_a_11_empty_n sc_in sc_logic 1 signal 31 } 
	{ BCols_V_a_11_read sc_out sc_logic 1 signal 31 } 
	{ BCols_V_a_12_dout sc_in sc_lv 32 signal 32 } 
	{ BCols_V_a_12_empty_n sc_in sc_logic 1 signal 32 } 
	{ BCols_V_a_12_read sc_out sc_logic 1 signal 32 } 
	{ BCols_V_a_13_dout sc_in sc_lv 32 signal 33 } 
	{ BCols_V_a_13_empty_n sc_in sc_logic 1 signal 33 } 
	{ BCols_V_a_13_read sc_out sc_logic 1 signal 33 } 
	{ BCols_V_a_14_dout sc_in sc_lv 32 signal 34 } 
	{ BCols_V_a_14_empty_n sc_in sc_logic 1 signal 34 } 
	{ BCols_V_a_14_read sc_out sc_logic 1 signal 34 } 
	{ BCols_V_a_15_dout sc_in sc_lv 32 signal 35 } 
	{ BCols_V_a_15_empty_n sc_in sc_logic 1 signal 35 } 
	{ BCols_V_a_15_read sc_out sc_logic 1 signal 35 } 
	{ BCols_V_a_16_dout sc_in sc_lv 32 signal 36 } 
	{ BCols_V_a_16_empty_n sc_in sc_logic 1 signal 36 } 
	{ BCols_V_a_16_read sc_out sc_logic 1 signal 36 } 
	{ BCols_V_a_17_dout sc_in sc_lv 32 signal 37 } 
	{ BCols_V_a_17_empty_n sc_in sc_logic 1 signal 37 } 
	{ BCols_V_a_17_read sc_out sc_logic 1 signal 37 } 
	{ BCols_V_a_18_dout sc_in sc_lv 32 signal 38 } 
	{ BCols_V_a_18_empty_n sc_in sc_logic 1 signal 38 } 
	{ BCols_V_a_18_read sc_out sc_logic 1 signal 38 } 
	{ BCols_V_a_19_dout sc_in sc_lv 32 signal 39 } 
	{ BCols_V_a_19_empty_n sc_in sc_logic 1 signal 39 } 
	{ BCols_V_a_19_read sc_out sc_logic 1 signal 39 } 
	{ abPartialSum_out_address0 sc_out sc_lv 9 signal 40 } 
	{ abPartialSum_out_ce0 sc_out sc_logic 1 signal 40 } 
	{ abPartialSum_out_we0 sc_out sc_logic 1 signal 40 } 
	{ abPartialSum_out_d0 sc_out sc_lv 32 signal 40 } 
	{ abPartialSum_out_address1 sc_out sc_lv 9 signal 40 } 
	{ abPartialSum_out_ce1 sc_out sc_logic 1 signal 40 } 
	{ abPartialSum_out_we1 sc_out sc_logic 1 signal 40 } 
	{ abPartialSum_out_d1 sc_out sc_lv 32 signal 40 } 
	{ iteration sc_in sc_lv 32 signal 41 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ARows_V_a_0_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ARows_V_a_0", "role": "dout" }} , 
 	{ "name": "ARows_V_a_0_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_0", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_0_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_0", "role": "read" }} , 
 	{ "name": "ARows_V_a_1_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ARows_V_a_1", "role": "dout" }} , 
 	{ "name": "ARows_V_a_1_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_1", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_1_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_1", "role": "read" }} , 
 	{ "name": "ARows_V_a_2_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ARows_V_a_2", "role": "dout" }} , 
 	{ "name": "ARows_V_a_2_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_2", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_2_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_2", "role": "read" }} , 
 	{ "name": "ARows_V_a_3_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ARows_V_a_3", "role": "dout" }} , 
 	{ "name": "ARows_V_a_3_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_3", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_3_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_3", "role": "read" }} , 
 	{ "name": "ARows_V_a_4_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ARows_V_a_4", "role": "dout" }} , 
 	{ "name": "ARows_V_a_4_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_4", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_4_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_4", "role": "read" }} , 
 	{ "name": "ARows_V_a_5_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ARows_V_a_5", "role": "dout" }} , 
 	{ "name": "ARows_V_a_5_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_5", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_5_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_5", "role": "read" }} , 
 	{ "name": "ARows_V_a_6_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ARows_V_a_6", "role": "dout" }} , 
 	{ "name": "ARows_V_a_6_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_6", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_6_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_6", "role": "read" }} , 
 	{ "name": "ARows_V_a_7_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ARows_V_a_7", "role": "dout" }} , 
 	{ "name": "ARows_V_a_7_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_7", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_7_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_7", "role": "read" }} , 
 	{ "name": "ARows_V_a_8_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ARows_V_a_8", "role": "dout" }} , 
 	{ "name": "ARows_V_a_8_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_8", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_8_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_8", "role": "read" }} , 
 	{ "name": "ARows_V_a_9_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ARows_V_a_9", "role": "dout" }} , 
 	{ "name": "ARows_V_a_9_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_9", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_9_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_9", "role": "read" }} , 
 	{ "name": "ARows_V_a_10_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ARows_V_a_10", "role": "dout" }} , 
 	{ "name": "ARows_V_a_10_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_10", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_10_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_10", "role": "read" }} , 
 	{ "name": "ARows_V_a_11_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ARows_V_a_11", "role": "dout" }} , 
 	{ "name": "ARows_V_a_11_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_11", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_11_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_11", "role": "read" }} , 
 	{ "name": "ARows_V_a_12_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ARows_V_a_12", "role": "dout" }} , 
 	{ "name": "ARows_V_a_12_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_12", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_12_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_12", "role": "read" }} , 
 	{ "name": "ARows_V_a_13_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ARows_V_a_13", "role": "dout" }} , 
 	{ "name": "ARows_V_a_13_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_13", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_13_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_13", "role": "read" }} , 
 	{ "name": "ARows_V_a_14_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ARows_V_a_14", "role": "dout" }} , 
 	{ "name": "ARows_V_a_14_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_14", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_14_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_14", "role": "read" }} , 
 	{ "name": "ARows_V_a_15_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ARows_V_a_15", "role": "dout" }} , 
 	{ "name": "ARows_V_a_15_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_15", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_15_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_15", "role": "read" }} , 
 	{ "name": "ARows_V_a_16_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ARows_V_a_16", "role": "dout" }} , 
 	{ "name": "ARows_V_a_16_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_16", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_16_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_16", "role": "read" }} , 
 	{ "name": "ARows_V_a_17_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ARows_V_a_17", "role": "dout" }} , 
 	{ "name": "ARows_V_a_17_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_17", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_17_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_17", "role": "read" }} , 
 	{ "name": "ARows_V_a_18_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ARows_V_a_18", "role": "dout" }} , 
 	{ "name": "ARows_V_a_18_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_18", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_18_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_18", "role": "read" }} , 
 	{ "name": "ARows_V_a_19_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ARows_V_a_19", "role": "dout" }} , 
 	{ "name": "ARows_V_a_19_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_19", "role": "empty_n" }} , 
 	{ "name": "ARows_V_a_19_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ARows_V_a_19", "role": "read" }} , 
 	{ "name": "BCols_V_a_0_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BCols_V_a_0", "role": "dout" }} , 
 	{ "name": "BCols_V_a_0_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_0", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_0_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_0", "role": "read" }} , 
 	{ "name": "BCols_V_a_1_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BCols_V_a_1", "role": "dout" }} , 
 	{ "name": "BCols_V_a_1_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_1", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_1_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_1", "role": "read" }} , 
 	{ "name": "BCols_V_a_2_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BCols_V_a_2", "role": "dout" }} , 
 	{ "name": "BCols_V_a_2_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_2", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_2_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_2", "role": "read" }} , 
 	{ "name": "BCols_V_a_3_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BCols_V_a_3", "role": "dout" }} , 
 	{ "name": "BCols_V_a_3_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_3", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_3_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_3", "role": "read" }} , 
 	{ "name": "BCols_V_a_4_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BCols_V_a_4", "role": "dout" }} , 
 	{ "name": "BCols_V_a_4_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_4", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_4_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_4", "role": "read" }} , 
 	{ "name": "BCols_V_a_5_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BCols_V_a_5", "role": "dout" }} , 
 	{ "name": "BCols_V_a_5_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_5", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_5_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_5", "role": "read" }} , 
 	{ "name": "BCols_V_a_6_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BCols_V_a_6", "role": "dout" }} , 
 	{ "name": "BCols_V_a_6_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_6", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_6_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_6", "role": "read" }} , 
 	{ "name": "BCols_V_a_7_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BCols_V_a_7", "role": "dout" }} , 
 	{ "name": "BCols_V_a_7_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_7", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_7_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_7", "role": "read" }} , 
 	{ "name": "BCols_V_a_8_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BCols_V_a_8", "role": "dout" }} , 
 	{ "name": "BCols_V_a_8_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_8", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_8_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_8", "role": "read" }} , 
 	{ "name": "BCols_V_a_9_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BCols_V_a_9", "role": "dout" }} , 
 	{ "name": "BCols_V_a_9_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_9", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_9_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_9", "role": "read" }} , 
 	{ "name": "BCols_V_a_10_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BCols_V_a_10", "role": "dout" }} , 
 	{ "name": "BCols_V_a_10_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_10", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_10_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_10", "role": "read" }} , 
 	{ "name": "BCols_V_a_11_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BCols_V_a_11", "role": "dout" }} , 
 	{ "name": "BCols_V_a_11_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_11", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_11_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_11", "role": "read" }} , 
 	{ "name": "BCols_V_a_12_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BCols_V_a_12", "role": "dout" }} , 
 	{ "name": "BCols_V_a_12_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_12", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_12_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_12", "role": "read" }} , 
 	{ "name": "BCols_V_a_13_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BCols_V_a_13", "role": "dout" }} , 
 	{ "name": "BCols_V_a_13_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_13", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_13_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_13", "role": "read" }} , 
 	{ "name": "BCols_V_a_14_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BCols_V_a_14", "role": "dout" }} , 
 	{ "name": "BCols_V_a_14_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_14", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_14_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_14", "role": "read" }} , 
 	{ "name": "BCols_V_a_15_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BCols_V_a_15", "role": "dout" }} , 
 	{ "name": "BCols_V_a_15_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_15", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_15_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_15", "role": "read" }} , 
 	{ "name": "BCols_V_a_16_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BCols_V_a_16", "role": "dout" }} , 
 	{ "name": "BCols_V_a_16_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_16", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_16_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_16", "role": "read" }} , 
 	{ "name": "BCols_V_a_17_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BCols_V_a_17", "role": "dout" }} , 
 	{ "name": "BCols_V_a_17_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_17", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_17_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_17", "role": "read" }} , 
 	{ "name": "BCols_V_a_18_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BCols_V_a_18", "role": "dout" }} , 
 	{ "name": "BCols_V_a_18_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_18", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_18_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_18", "role": "read" }} , 
 	{ "name": "BCols_V_a_19_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "BCols_V_a_19", "role": "dout" }} , 
 	{ "name": "BCols_V_a_19_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_19", "role": "empty_n" }} , 
 	{ "name": "BCols_V_a_19_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BCols_V_a_19", "role": "read" }} , 
 	{ "name": "abPartialSum_out_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "abPartialSum_out", "role": "address0" }} , 
 	{ "name": "abPartialSum_out_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "abPartialSum_out", "role": "ce0" }} , 
 	{ "name": "abPartialSum_out_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "abPartialSum_out", "role": "we0" }} , 
 	{ "name": "abPartialSum_out_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "abPartialSum_out", "role": "d0" }} , 
 	{ "name": "abPartialSum_out_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "abPartialSum_out", "role": "address1" }} , 
 	{ "name": "abPartialSum_out_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "abPartialSum_out", "role": "ce1" }} , 
 	{ "name": "abPartialSum_out_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "abPartialSum_out", "role": "we1" }} , 
 	{ "name": "abPartialSum_out_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "abPartialSum_out", "role": "d1" }} , 
 	{ "name": "iteration", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "iteration", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46"],
		"CDFG" : "block_mmul",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "40959", "EstimateLatencyMax" : "41060",
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
			{"Name" : "ARows_V_a_10", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "ARows_V_a_10_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ARows_V_a_11", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "ARows_V_a_11_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ARows_V_a_12", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "ARows_V_a_12_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ARows_V_a_13", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "ARows_V_a_13_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ARows_V_a_14", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "ARows_V_a_14_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ARows_V_a_15", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "ARows_V_a_15_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ARows_V_a_16", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "ARows_V_a_16_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ARows_V_a_17", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "ARows_V_a_17_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ARows_V_a_18", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "ARows_V_a_18_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "ARows_V_a_19", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "ARows_V_a_19_blk_n", "Type" : "RtlSignal"}]},
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
			{"Name" : "BCols_V_a_10", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "BCols_V_a_10_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "BCols_V_a_11", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "BCols_V_a_11_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "BCols_V_a_12", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "BCols_V_a_12_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "BCols_V_a_13", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "BCols_V_a_13_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "BCols_V_a_14", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "BCols_V_a_14_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "BCols_V_a_15", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "BCols_V_a_15_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "BCols_V_a_16", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "BCols_V_a_16_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "BCols_V_a_17", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "BCols_V_a_17_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "BCols_V_a_18", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "BCols_V_a_18_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "BCols_V_a_19", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "BCols_V_a_19_blk_n", "Type" : "RtlSignal"}]},
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
			{"Name" : "A_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_15", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_16", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_17", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_18", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A_19", "Type" : "Memory", "Direction" : "IO"}]},
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
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_10_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_11_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_12_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_13_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_14_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_15_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_16_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_17_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_18_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.A_19_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_0_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_1_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_2_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_3_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_4_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_5_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_6_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_7_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_8_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_9_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_10_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_11_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_12_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_13_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_14_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_15_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_16_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_17_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_18_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.AB_19_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mux_20bkb_U1", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mux_20bkb_U2", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mux_20bkb_U3", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mux_20bkb_U4", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_srem_3cud_U5", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.block_mmul_mux_20bkb_U6", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	block_mmul {
		ARows_V_a_0 {Type I LastRead 37 FirstWrite -1}
		ARows_V_a_1 {Type I LastRead 37 FirstWrite -1}
		ARows_V_a_2 {Type I LastRead 37 FirstWrite -1}
		ARows_V_a_3 {Type I LastRead 37 FirstWrite -1}
		ARows_V_a_4 {Type I LastRead 37 FirstWrite -1}
		ARows_V_a_5 {Type I LastRead 37 FirstWrite -1}
		ARows_V_a_6 {Type I LastRead 37 FirstWrite -1}
		ARows_V_a_7 {Type I LastRead 37 FirstWrite -1}
		ARows_V_a_8 {Type I LastRead 37 FirstWrite -1}
		ARows_V_a_9 {Type I LastRead 37 FirstWrite -1}
		ARows_V_a_10 {Type I LastRead 37 FirstWrite -1}
		ARows_V_a_11 {Type I LastRead 37 FirstWrite -1}
		ARows_V_a_12 {Type I LastRead 37 FirstWrite -1}
		ARows_V_a_13 {Type I LastRead 37 FirstWrite -1}
		ARows_V_a_14 {Type I LastRead 37 FirstWrite -1}
		ARows_V_a_15 {Type I LastRead 37 FirstWrite -1}
		ARows_V_a_16 {Type I LastRead 37 FirstWrite -1}
		ARows_V_a_17 {Type I LastRead 37 FirstWrite -1}
		ARows_V_a_18 {Type I LastRead 37 FirstWrite -1}
		ARows_V_a_19 {Type I LastRead 37 FirstWrite -1}
		BCols_V_a_0 {Type I LastRead 40 FirstWrite -1}
		BCols_V_a_1 {Type I LastRead 40 FirstWrite -1}
		BCols_V_a_2 {Type I LastRead 40 FirstWrite -1}
		BCols_V_a_3 {Type I LastRead 40 FirstWrite -1}
		BCols_V_a_4 {Type I LastRead 40 FirstWrite -1}
		BCols_V_a_5 {Type I LastRead 40 FirstWrite -1}
		BCols_V_a_6 {Type I LastRead 40 FirstWrite -1}
		BCols_V_a_7 {Type I LastRead 40 FirstWrite -1}
		BCols_V_a_8 {Type I LastRead 40 FirstWrite -1}
		BCols_V_a_9 {Type I LastRead 40 FirstWrite -1}
		BCols_V_a_10 {Type I LastRead 40 FirstWrite -1}
		BCols_V_a_11 {Type I LastRead 40 FirstWrite -1}
		BCols_V_a_12 {Type I LastRead 40 FirstWrite -1}
		BCols_V_a_13 {Type I LastRead 40 FirstWrite -1}
		BCols_V_a_14 {Type I LastRead 40 FirstWrite -1}
		BCols_V_a_15 {Type I LastRead 40 FirstWrite -1}
		BCols_V_a_16 {Type I LastRead 40 FirstWrite -1}
		BCols_V_a_17 {Type I LastRead 40 FirstWrite -1}
		BCols_V_a_18 {Type I LastRead 40 FirstWrite -1}
		BCols_V_a_19 {Type I LastRead 40 FirstWrite -1}
		abPartialSum_out {Type O LastRead -1 FirstWrite 42}
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
		A_9 {Type IO LastRead -1 FirstWrite -1}
		A_10 {Type IO LastRead -1 FirstWrite -1}
		A_11 {Type IO LastRead -1 FirstWrite -1}
		A_12 {Type IO LastRead -1 FirstWrite -1}
		A_13 {Type IO LastRead -1 FirstWrite -1}
		A_14 {Type IO LastRead -1 FirstWrite -1}
		A_15 {Type IO LastRead -1 FirstWrite -1}
		A_16 {Type IO LastRead -1 FirstWrite -1}
		A_17 {Type IO LastRead -1 FirstWrite -1}
		A_18 {Type IO LastRead -1 FirstWrite -1}
		A_19 {Type IO LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "40959", "Max" : "41060"}
	, {"Name" : "Interval", "Min" : "40960", "Max" : "41061"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
]}

set Spec2ImplPortList { 
	ARows_V_a_0 { ap_fifo {  { ARows_V_a_0_dout fifo_data 0 32 }  { ARows_V_a_0_empty_n fifo_status 0 1 }  { ARows_V_a_0_read fifo_update 1 1 } } }
	ARows_V_a_1 { ap_fifo {  { ARows_V_a_1_dout fifo_data 0 32 }  { ARows_V_a_1_empty_n fifo_status 0 1 }  { ARows_V_a_1_read fifo_update 1 1 } } }
	ARows_V_a_2 { ap_fifo {  { ARows_V_a_2_dout fifo_data 0 32 }  { ARows_V_a_2_empty_n fifo_status 0 1 }  { ARows_V_a_2_read fifo_update 1 1 } } }
	ARows_V_a_3 { ap_fifo {  { ARows_V_a_3_dout fifo_data 0 32 }  { ARows_V_a_3_empty_n fifo_status 0 1 }  { ARows_V_a_3_read fifo_update 1 1 } } }
	ARows_V_a_4 { ap_fifo {  { ARows_V_a_4_dout fifo_data 0 32 }  { ARows_V_a_4_empty_n fifo_status 0 1 }  { ARows_V_a_4_read fifo_update 1 1 } } }
	ARows_V_a_5 { ap_fifo {  { ARows_V_a_5_dout fifo_data 0 32 }  { ARows_V_a_5_empty_n fifo_status 0 1 }  { ARows_V_a_5_read fifo_update 1 1 } } }
	ARows_V_a_6 { ap_fifo {  { ARows_V_a_6_dout fifo_data 0 32 }  { ARows_V_a_6_empty_n fifo_status 0 1 }  { ARows_V_a_6_read fifo_update 1 1 } } }
	ARows_V_a_7 { ap_fifo {  { ARows_V_a_7_dout fifo_data 0 32 }  { ARows_V_a_7_empty_n fifo_status 0 1 }  { ARows_V_a_7_read fifo_update 1 1 } } }
	ARows_V_a_8 { ap_fifo {  { ARows_V_a_8_dout fifo_data 0 32 }  { ARows_V_a_8_empty_n fifo_status 0 1 }  { ARows_V_a_8_read fifo_update 1 1 } } }
	ARows_V_a_9 { ap_fifo {  { ARows_V_a_9_dout fifo_data 0 32 }  { ARows_V_a_9_empty_n fifo_status 0 1 }  { ARows_V_a_9_read fifo_update 1 1 } } }
	ARows_V_a_10 { ap_fifo {  { ARows_V_a_10_dout fifo_data 0 32 }  { ARows_V_a_10_empty_n fifo_status 0 1 }  { ARows_V_a_10_read fifo_update 1 1 } } }
	ARows_V_a_11 { ap_fifo {  { ARows_V_a_11_dout fifo_data 0 32 }  { ARows_V_a_11_empty_n fifo_status 0 1 }  { ARows_V_a_11_read fifo_update 1 1 } } }
	ARows_V_a_12 { ap_fifo {  { ARows_V_a_12_dout fifo_data 0 32 }  { ARows_V_a_12_empty_n fifo_status 0 1 }  { ARows_V_a_12_read fifo_update 1 1 } } }
	ARows_V_a_13 { ap_fifo {  { ARows_V_a_13_dout fifo_data 0 32 }  { ARows_V_a_13_empty_n fifo_status 0 1 }  { ARows_V_a_13_read fifo_update 1 1 } } }
	ARows_V_a_14 { ap_fifo {  { ARows_V_a_14_dout fifo_data 0 32 }  { ARows_V_a_14_empty_n fifo_status 0 1 }  { ARows_V_a_14_read fifo_update 1 1 } } }
	ARows_V_a_15 { ap_fifo {  { ARows_V_a_15_dout fifo_data 0 32 }  { ARows_V_a_15_empty_n fifo_status 0 1 }  { ARows_V_a_15_read fifo_update 1 1 } } }
	ARows_V_a_16 { ap_fifo {  { ARows_V_a_16_dout fifo_data 0 32 }  { ARows_V_a_16_empty_n fifo_status 0 1 }  { ARows_V_a_16_read fifo_update 1 1 } } }
	ARows_V_a_17 { ap_fifo {  { ARows_V_a_17_dout fifo_data 0 32 }  { ARows_V_a_17_empty_n fifo_status 0 1 }  { ARows_V_a_17_read fifo_update 1 1 } } }
	ARows_V_a_18 { ap_fifo {  { ARows_V_a_18_dout fifo_data 0 32 }  { ARows_V_a_18_empty_n fifo_status 0 1 }  { ARows_V_a_18_read fifo_update 1 1 } } }
	ARows_V_a_19 { ap_fifo {  { ARows_V_a_19_dout fifo_data 0 32 }  { ARows_V_a_19_empty_n fifo_status 0 1 }  { ARows_V_a_19_read fifo_update 1 1 } } }
	BCols_V_a_0 { ap_fifo {  { BCols_V_a_0_dout fifo_data 0 32 }  { BCols_V_a_0_empty_n fifo_status 0 1 }  { BCols_V_a_0_read fifo_update 1 1 } } }
	BCols_V_a_1 { ap_fifo {  { BCols_V_a_1_dout fifo_data 0 32 }  { BCols_V_a_1_empty_n fifo_status 0 1 }  { BCols_V_a_1_read fifo_update 1 1 } } }
	BCols_V_a_2 { ap_fifo {  { BCols_V_a_2_dout fifo_data 0 32 }  { BCols_V_a_2_empty_n fifo_status 0 1 }  { BCols_V_a_2_read fifo_update 1 1 } } }
	BCols_V_a_3 { ap_fifo {  { BCols_V_a_3_dout fifo_data 0 32 }  { BCols_V_a_3_empty_n fifo_status 0 1 }  { BCols_V_a_3_read fifo_update 1 1 } } }
	BCols_V_a_4 { ap_fifo {  { BCols_V_a_4_dout fifo_data 0 32 }  { BCols_V_a_4_empty_n fifo_status 0 1 }  { BCols_V_a_4_read fifo_update 1 1 } } }
	BCols_V_a_5 { ap_fifo {  { BCols_V_a_5_dout fifo_data 0 32 }  { BCols_V_a_5_empty_n fifo_status 0 1 }  { BCols_V_a_5_read fifo_update 1 1 } } }
	BCols_V_a_6 { ap_fifo {  { BCols_V_a_6_dout fifo_data 0 32 }  { BCols_V_a_6_empty_n fifo_status 0 1 }  { BCols_V_a_6_read fifo_update 1 1 } } }
	BCols_V_a_7 { ap_fifo {  { BCols_V_a_7_dout fifo_data 0 32 }  { BCols_V_a_7_empty_n fifo_status 0 1 }  { BCols_V_a_7_read fifo_update 1 1 } } }
	BCols_V_a_8 { ap_fifo {  { BCols_V_a_8_dout fifo_data 0 32 }  { BCols_V_a_8_empty_n fifo_status 0 1 }  { BCols_V_a_8_read fifo_update 1 1 } } }
	BCols_V_a_9 { ap_fifo {  { BCols_V_a_9_dout fifo_data 0 32 }  { BCols_V_a_9_empty_n fifo_status 0 1 }  { BCols_V_a_9_read fifo_update 1 1 } } }
	BCols_V_a_10 { ap_fifo {  { BCols_V_a_10_dout fifo_data 0 32 }  { BCols_V_a_10_empty_n fifo_status 0 1 }  { BCols_V_a_10_read fifo_update 1 1 } } }
	BCols_V_a_11 { ap_fifo {  { BCols_V_a_11_dout fifo_data 0 32 }  { BCols_V_a_11_empty_n fifo_status 0 1 }  { BCols_V_a_11_read fifo_update 1 1 } } }
	BCols_V_a_12 { ap_fifo {  { BCols_V_a_12_dout fifo_data 0 32 }  { BCols_V_a_12_empty_n fifo_status 0 1 }  { BCols_V_a_12_read fifo_update 1 1 } } }
	BCols_V_a_13 { ap_fifo {  { BCols_V_a_13_dout fifo_data 0 32 }  { BCols_V_a_13_empty_n fifo_status 0 1 }  { BCols_V_a_13_read fifo_update 1 1 } } }
	BCols_V_a_14 { ap_fifo {  { BCols_V_a_14_dout fifo_data 0 32 }  { BCols_V_a_14_empty_n fifo_status 0 1 }  { BCols_V_a_14_read fifo_update 1 1 } } }
	BCols_V_a_15 { ap_fifo {  { BCols_V_a_15_dout fifo_data 0 32 }  { BCols_V_a_15_empty_n fifo_status 0 1 }  { BCols_V_a_15_read fifo_update 1 1 } } }
	BCols_V_a_16 { ap_fifo {  { BCols_V_a_16_dout fifo_data 0 32 }  { BCols_V_a_16_empty_n fifo_status 0 1 }  { BCols_V_a_16_read fifo_update 1 1 } } }
	BCols_V_a_17 { ap_fifo {  { BCols_V_a_17_dout fifo_data 0 32 }  { BCols_V_a_17_empty_n fifo_status 0 1 }  { BCols_V_a_17_read fifo_update 1 1 } } }
	BCols_V_a_18 { ap_fifo {  { BCols_V_a_18_dout fifo_data 0 32 }  { BCols_V_a_18_empty_n fifo_status 0 1 }  { BCols_V_a_18_read fifo_update 1 1 } } }
	BCols_V_a_19 { ap_fifo {  { BCols_V_a_19_dout fifo_data 0 32 }  { BCols_V_a_19_empty_n fifo_status 0 1 }  { BCols_V_a_19_read fifo_update 1 1 } } }
	abPartialSum_out { ap_memory {  { abPartialSum_out_address0 mem_address 1 9 }  { abPartialSum_out_ce0 mem_ce 1 1 }  { abPartialSum_out_we0 mem_we 1 1 }  { abPartialSum_out_d0 mem_din 1 32 }  { abPartialSum_out_address1 MemPortADDR2 1 9 }  { abPartialSum_out_ce1 MemPortCE2 1 1 }  { abPartialSum_out_we1 MemPortWE2 1 1 }  { abPartialSum_out_d1 MemPortDIN2 1 32 } } }
	iteration { ap_none {  { iteration in_data 0 32 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
	ARows_V_a_0 { fifo_read 100 has_conditional }
	ARows_V_a_1 { fifo_read 100 has_conditional }
	ARows_V_a_2 { fifo_read 100 has_conditional }
	ARows_V_a_3 { fifo_read 100 has_conditional }
	ARows_V_a_4 { fifo_read 100 has_conditional }
	ARows_V_a_5 { fifo_read 100 has_conditional }
	ARows_V_a_6 { fifo_read 100 has_conditional }
	ARows_V_a_7 { fifo_read 100 has_conditional }
	ARows_V_a_8 { fifo_read 100 has_conditional }
	ARows_V_a_9 { fifo_read 100 has_conditional }
	ARows_V_a_10 { fifo_read 100 has_conditional }
	ARows_V_a_11 { fifo_read 100 has_conditional }
	ARows_V_a_12 { fifo_read 100 has_conditional }
	ARows_V_a_13 { fifo_read 100 has_conditional }
	ARows_V_a_14 { fifo_read 100 has_conditional }
	ARows_V_a_15 { fifo_read 100 has_conditional }
	ARows_V_a_16 { fifo_read 100 has_conditional }
	ARows_V_a_17 { fifo_read 100 has_conditional }
	ARows_V_a_18 { fifo_read 100 has_conditional }
	ARows_V_a_19 { fifo_read 100 has_conditional }
	BCols_V_a_0 { fifo_read 100 has_conditional }
	BCols_V_a_1 { fifo_read 100 has_conditional }
	BCols_V_a_2 { fifo_read 100 has_conditional }
	BCols_V_a_3 { fifo_read 100 has_conditional }
	BCols_V_a_4 { fifo_read 100 has_conditional }
	BCols_V_a_5 { fifo_read 100 has_conditional }
	BCols_V_a_6 { fifo_read 100 has_conditional }
	BCols_V_a_7 { fifo_read 100 has_conditional }
	BCols_V_a_8 { fifo_read 100 has_conditional }
	BCols_V_a_9 { fifo_read 100 has_conditional }
	BCols_V_a_10 { fifo_read 100 has_conditional }
	BCols_V_a_11 { fifo_read 100 has_conditional }
	BCols_V_a_12 { fifo_read 100 has_conditional }
	BCols_V_a_13 { fifo_read 100 has_conditional }
	BCols_V_a_14 { fifo_read 100 has_conditional }
	BCols_V_a_15 { fifo_read 100 has_conditional }
	BCols_V_a_16 { fifo_read 100 has_conditional }
	BCols_V_a_17 { fifo_read 100 has_conditional }
	BCols_V_a_18 { fifo_read 100 has_conditional }
	BCols_V_a_19 { fifo_read 100 has_conditional }
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
