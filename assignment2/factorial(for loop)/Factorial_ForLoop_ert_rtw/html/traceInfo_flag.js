function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["Factorial_ForLoop.c:45c31"]=1;
    this.traceFlag["Factorial_ForLoop.c:50c30"]=1;
    this.traceFlag["Factorial_ForLoop.c:50c45"]=1;
    this.traceFlag["Factorial_ForLoop.c:55c61"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Factorial_ForLoop.c:44"]=1;
    this.lineTraceFlag["Factorial_ForLoop.c:45"]=1;
    this.lineTraceFlag["Factorial_ForLoop.c:46"]=1;
    this.lineTraceFlag["Factorial_ForLoop.c:50"]=1;
    this.lineTraceFlag["Factorial_ForLoop.c:55"]=1;
    this.lineTraceFlag["Factorial_ForLoop.c:56"]=1;
    this.lineTraceFlag["Factorial_ForLoop.c:61"]=1;
    this.lineTraceFlag["Factorial_ForLoop.c:72"]=1;
    this.lineTraceFlag["Factorial_ForLoop.h:38"]=1;
    this.lineTraceFlag["Factorial_ForLoop.h:43"]=1;
    this.lineTraceFlag["Factorial_ForLoop.h:48"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
