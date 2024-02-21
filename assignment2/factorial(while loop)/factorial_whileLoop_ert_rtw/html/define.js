function CodeDefine() { 
this.def = new Array();
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:35,type:"fcn"};
this.def["main"] = {file: "ert_main_c.html",line:72,type:"fcn"};
this.def["factorial_whileLoop_DW"] = {file: "factorial_whileLoop_c.html",line:22,type:"var"};
this.def["factorial_whileLoop_U"] = {file: "factorial_whileLoop_c.html",line:25,type:"var"};
this.def["factorial_whileLoop_Y"] = {file: "factorial_whileLoop_c.html",line:28,type:"var"};
this.def["factorial_whileLoop.c:factorial_whileLoop_M_"] = {file: "factorial_whileLoop_c.html",line:31,type:"var"};
this.def["factorial_whileLoop_M"] = {file: "factorial_whileLoop_c.html",line:32,type:"var"};
this.def["factorial_whileLoop_step"] = {file: "factorial_whileLoop_c.html",line:36,type:"fcn"};
this.def["factorial_whileLoop_initialize"] = {file: "factorial_whileLoop_c.html",line:71,type:"fcn"};
this.def["factorial_whileLoop_terminate"] = {file: "factorial_whileLoop_c.html",line:81,type:"fcn"};
this.def["DW_factorial_whileLoop_T"] = {file: "factorial_whileLoop_h.html",line:39,type:"type"};
this.def["ExtU_factorial_whileLoop_T"] = {file: "factorial_whileLoop_h.html",line:45,type:"type"};
this.def["ExtY_factorial_whileLoop_T"] = {file: "factorial_whileLoop_h.html",line:50,type:"type"};
this.def["RT_MODEL_factorial_whileLoop_T"] = {file: "factorial_whileLoop_types_h.html",line:24,type:"type"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:55,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:56,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:69,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:70,type:"type"};
this.def["creal32_T"] = {file: "rtwtypes_h.html",line:80,type:"type"};
this.def["creal64_T"] = {file: "rtwtypes_h.html",line:85,type:"type"};
this.def["creal_T"] = {file: "rtwtypes_h.html",line:90,type:"type"};
this.def["cint8_T"] = {file: "rtwtypes_h.html",line:97,type:"type"};
this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:104,type:"type"};
this.def["cint16_T"] = {file: "rtwtypes_h.html",line:111,type:"type"};
this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:118,type:"type"};
this.def["cint32_T"] = {file: "rtwtypes_h.html",line:125,type:"type"};
this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:132,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:150,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["factorial_whileLoop_c.html"] = "../factorial_whileLoop.c";
	this.html2Root["factorial_whileLoop_c.html"] = "factorial_whileLoop_c.html";
	this.html2SrcPath["factorial_whileLoop_h.html"] = "../factorial_whileLoop.h";
	this.html2Root["factorial_whileLoop_h.html"] = "factorial_whileLoop_h.html";
	this.html2SrcPath["factorial_whileLoop_private_h.html"] = "../factorial_whileLoop_private.h";
	this.html2Root["factorial_whileLoop_private_h.html"] = "factorial_whileLoop_private_h.html";
	this.html2SrcPath["factorial_whileLoop_types_h.html"] = "../factorial_whileLoop_types.h";
	this.html2Root["factorial_whileLoop_types_h.html"] = "factorial_whileLoop_types_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_c.html","factorial_whileLoop_c.html","factorial_whileLoop_h.html","factorial_whileLoop_private_h.html","factorial_whileLoop_types_h.html","rtwtypes_h.html"];
