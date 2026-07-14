# C++ Binary Control-Flow Bypass via Dynamic Patching

An educational project detailing the static analysis, dynamic debugging, and instruction-level modification of an x86_64 Windows executable.

## Project Pipeline

### 1. Static Analysis (Ghidra)
We mapped the compiled binary logic out globally inside Ghidra to pinpoint data string arrays and locate evaluation loops.

### 2. Dynamic Debugging & Flag Manipulation (x64dbg)
By attaching x64dbg to the live process and setting hardware breakpoints on the conditional jump, we halted execution and manually inverted the processor's Zero Flag (ZF) state to divert control-flow.
![Breakpoint Hit](/2_breakpoint_hit.jpg)

### 3. Permanent Binary Patching
To make the bypass stand-alone, the binary byte instructions were permanently modified from a `JE` (Jump if Equal) opcode `0x74` to a `JNE` (Jump if Not Equal) opcode `0x75`.

The resulting executable functions flawlessly without validation prompts:
![Native Bypass](/3_native_bypass.jpg)
