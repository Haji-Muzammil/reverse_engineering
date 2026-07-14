# Milestone 3: Anti-Debugging & Register Bypass

In this milestone, I implemented active software self-defense using the Windows API and analyzed how compiling/debugging flags alter a program's execution flow.

## What I Did:
* **Defensive Implementation:** Added `IsDebuggerPresent()` checks in C++ to detect active dynamic analysis.
* **Cross-Compilation:** Used MinGW-w64 on Kali Linux to statically compile a Windows-compatible executable (`-static-libstdc++`).
* **Dynamic Bypass:** Located the conditional jump (`je`) in `x64dbg` and bypassed the security trap by manipulating CPU registers/flags (`ZF` / `RAX`) in real-time.
