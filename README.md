# LC_25 - LeetCode Practice Repository

A C++ LeetCode practice repository with CMake build automation and VS Code debugging.

## Quick Start

**Setup:** See [SETUP_GUIDE.md](SETUP_GUIDE.md) for installation instructions.

## Workflows

### Workflow 1: Quick Run (Testing)
```
1. Create/edit: src/my_problem.cpp
2. Ctrl+Shift+B          (build)
3. Ctrl+`                (open terminal)
4. ./build/bin/my_problem.exe    (run)
```

### Workflow 2: Debug with Breakpoints (Development)
```
1. Create/edit: src/my_problem.cpp
2. Ctrl+Shift+B          (build)
3. Click line number     (set breakpoint)
4. F5                    (start debug)
5. F10/F11               (step through code)
6. Shift+F5              (stop)
```

## Project Structure

```
src/                      # C++ solution files
.vscode/                  # VS Code configs (build, debug, IntelliSense)
CMakeLists.txt           # Auto-detects all .cpp files in src/
build/                   # Build output (auto-generated)
```

## Key Shortcuts

| Shortcut | Action |
|----------|--------|
| `Ctrl+Shift+B` | Build |
| `F5` | Debug |
| `Shift+F5` | Stop |
| `F10` | Step over |
| `F11` | Step into |
| `Ctrl+K Ctrl+B` | Toggle breakpoint |
| `Ctrl+`` | Open terminal |

## Notes

- CMake automatically compiles all `.cpp` files in `src/`
- No need to modify CMakeLists.txt when adding new problems
- Debugging works on Windows, Linux, and macOS
- See [SETUP_GUIDE.md](SETUP_GUIDE.md) for troubleshooting
