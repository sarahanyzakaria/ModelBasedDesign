function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "ProgrammingCalculator"};
	this.sidHashMap["ProgrammingCalculator"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "ProgrammingCalculator:1"};
	this.sidHashMap["ProgrammingCalculator:1"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "ProgrammingCalculator:2"};
	this.sidHashMap["ProgrammingCalculator:2"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/Bitwise AND"] = {sid: "ProgrammingCalculator:3"};
	this.sidHashMap["ProgrammingCalculator:3"] = {rtwname: "<Root>/Bitwise AND"};
	this.rtwnameHashMap["<Root>/Bitwise NOT"] = {sid: "ProgrammingCalculator:4"};
	this.sidHashMap["ProgrammingCalculator:4"] = {rtwname: "<Root>/Bitwise NOT"};
	this.rtwnameHashMap["<Root>/Bitwise NOT1"] = {sid: "ProgrammingCalculator:5"};
	this.sidHashMap["ProgrammingCalculator:5"] = {rtwname: "<Root>/Bitwise NOT1"};
	this.rtwnameHashMap["<Root>/Bitwise NOT2"] = {sid: "ProgrammingCalculator:6"};
	this.sidHashMap["ProgrammingCalculator:6"] = {rtwname: "<Root>/Bitwise NOT2"};
	this.rtwnameHashMap["<Root>/Bitwise OR"] = {sid: "ProgrammingCalculator:7"};
	this.sidHashMap["ProgrammingCalculator:7"] = {rtwname: "<Root>/Bitwise OR"};
	this.rtwnameHashMap["<Root>/Bitwise XOR"] = {sid: "ProgrammingCalculator:8"};
	this.sidHashMap["ProgrammingCalculator:8"] = {rtwname: "<Root>/Bitwise XOR"};
	this.rtwnameHashMap["<Root>/Bitwise XOR1"] = {sid: "ProgrammingCalculator:9"};
	this.sidHashMap["ProgrammingCalculator:9"] = {rtwname: "<Root>/Bitwise XOR1"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "ProgrammingCalculator:10"};
	this.sidHashMap["ProgrammingCalculator:10"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "ProgrammingCalculator:11"};
	this.sidHashMap["ProgrammingCalculator:11"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "ProgrammingCalculator:12"};
	this.sidHashMap["ProgrammingCalculator:12"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "ProgrammingCalculator:13"};
	this.sidHashMap["ProgrammingCalculator:13"] = {rtwname: "<Root>/Out4"};
	this.rtwnameHashMap["<Root>/Out5"] = {sid: "ProgrammingCalculator:14"};
	this.sidHashMap["ProgrammingCalculator:14"] = {rtwname: "<Root>/Out5"};
	this.rtwnameHashMap["<Root>/Out6"] = {sid: "ProgrammingCalculator:15"};
	this.sidHashMap["ProgrammingCalculator:15"] = {rtwname: "<Root>/Out6"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
