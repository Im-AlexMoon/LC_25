# Setup Guide for LC_25

## Quick Start (Windows)

### Step 1: Install Prerequisites

#### 1.1 Install CMake
- Download from: https://cmake.org/download/
- Choose "Windows x64 Installer"
- During installation, select "Add CMake to the system PATH"

#### 1.2 Install C++ Compiler

**Option A: Visual Studio (Recommended for Windows)**
1. Download Visual Studio Community: https://visualstudio.microsoft.com/downloads/
2. During installation, select "Desktop development with C++"
3. This includes MSVC compiler and tools

**Option B: MinGW (Lightweight alternative)**
1. Download from: https://www.mingw-w64.org/
2. Install and add to PATH

#### 1.3 Install VS Code Extensions
1. Open VS Code
2. Go to Extensions (Ctrl+Shift+X)
3. Search for and install:
   - "C/C++" by Microsoft (ms-vscode.cpptools)
   - "CMake Tools" by Microsoft (ms-vscode.cmake-tools)
   - "CMake" by twxs (optional, for syntax highlighting)

### Step 2: Verify Installation

Open Command Prompt and run:
```bash
cmake --version
cl  # For MSVC (may show error, that's ok)
g++ --version  # For MinGW
```

### Step 3: Open Project in VS Code

1. Open VS Code
2. File → Open Folder → Select LC_25 folder
3. Wait for CMake to configure automatically (watch the bottom status bar)
4. If prompted, select your compiler

### Step 4: Build Your First Solution

1. Open `src/two_sum.cpp` in VS Code
2. Press `Ctrl+Shift+B` to build
3. Select "Build and Compile" task
4. Check the Terminal for output

### Step 5: Run/Debug

**Option A: Debug with Breakpoints (Recommended)**
1. Click on line numbers to set breakpoints
2. Press `F5` to start debugging
3. Select your platform: "Debug C++ (Windows)"
4. Code will pause at breakpoints

**Option B: Run from Terminal**
```bash
# After successful build
./build/bin/two_sum.exe
```

## Troubleshooting Common Issues

### Issue: "cmake: command not found"
**Solution:**
1. Verify CMake installation: `cmake --version`
2. If not found, reinstall CMake and add to PATH
3. Restart VS Code and Command Prompt
4. On Windows, verify PATH includes C:\Program Files\CMake\bin

### Issue: "cl is not recognized" or "g++ not found"
**Solution:**
1. Compiler not installed or not in PATH
2. For MSVC: Reinstall Visual Studio with C++ support
3. For MinGW: Download and install, add to PATH
4. Restart Command Prompt to reload PATH

### Issue: Build fails with "Unknown compiler"
**Solution:**
1. In VS Code, press Ctrl+Shift+P
2. Type "CMake: Select a Kit"
3. Choose your compiler (Visual Studio or GCC/Clang)
4. Try building again

### Issue: Can't find header files (#include errors)
**Solution:**
1. Ensure C++ extension is fully installed
2. Restart VS Code
3. Check IntelliSense settings in .vscode/settings.json
4. Try: Ctrl+Shift+P → "C/C++: Reset IntelliSense"

### Issue: Debugger won't start
**Solution:**
1. Ensure build completed successfully
2. Check that executable exists: `./build/bin/two_sum.exe`
3. Verify correct platform selected in launch.json:
   - Windows: "Debug C++ (Windows)" uses cppvsdbg
   - Linux/Mac: "Debug C++ (GDB - Linux/Mac)" uses cppdbg
4. Clean and rebuild: Ctrl+Shift+P → "CMake: Delete Cache"

## Project Structure Explanation

```
LC_25/
├── src/
│   ├── two_sum.cpp           # Example solution
│   └── problem_template.cpp  # Template for new problems
├── build/                    # Build output (created after first build)
│   └── bin/                  # Compiled executables
├── .vscode/
│   ├── tasks.json           # VS Code build tasks
│   ├── launch.json          # Debugger configuration
│   └── settings.json        # C++ settings
├── CMakeLists.txt           # Build configuration
├── README.md                # Main documentation
└── SETUP_GUIDE.md           # This file
```

## How CMake Works Here

**CMakeLists.txt** automatically:
1. Finds all `.cpp` files in `src/`
2. Creates an executable for each file
3. Outputs executables to `build/bin/`
4. Sets C++ standard to 17
5. Enables compiler warnings

So when you add a new file like `my_problem.cpp`:
- Just place it in `src/`
- Rebuild
- CMake automatically creates `build/bin/my_problem.exe`

## Adding a New Problem

1. Create new file: `src/my_problem_name.cpp`
2. Use template:
```cpp
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Your implementation
    void solve() {
        // ...
    }
};

int main() {
    Solution solution;
    solution.solve();
    cout << "Test passed!" << endl;
    return 0;
}
```
3. Build with Ctrl+Shift+B
4. Run: `./build/bin/my_problem_name.exe`

## VS Code Keyboard Shortcuts

| Action | Shortcut |
|--------|----------|
| Build Project | Ctrl+Shift+B |
| Debug (F5) | F5 |
| Stop Debug | Shift+F5 |
| Step Over | F10 |
| Step Into | F11 |
| Continue | F5 |
| Toggle Breakpoint | Ctrl+K Ctrl+B |
| Open Terminal | Ctrl+` |
| Command Palette | Ctrl+Shift+P |

## Testing Your Setup

Create `src/test.cpp`:
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, LeetCode!" << endl;
    return 0;
}
```

Then:
1. Press Ctrl+Shift+B → "Build and Compile"
2. Press F5 to debug (or manually run `./build/bin/test.exe`)
3. You should see "Hello, LeetCode!" in the output

If this works, your entire setup is correct!

## Next Steps

1. Go through LeetCode problems in order
2. Create a new `.cpp` file for each problem
3. Implement and test locally before submitting
4. Use breakpoints to debug complex logic

Happy coding! 🚀
