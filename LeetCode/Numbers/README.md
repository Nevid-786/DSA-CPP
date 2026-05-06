# Numbers Practice Folder

This folder contains C++ practice solutions for basic number problems, including Armstrong number detection, greatest common divisor calculation, and integer reversal.

## Files

- `ArmsStrong.cpp` - Checks whether a number is an Armstrong number. It uses a custom digit count function and computes the sum of each digit raised to the power of the total digit count.
- `GCD_of_2_numbers.cpp` - Computes the greatest common divisor (GCD) of two integers using a simple descending search from the smaller number.
- `ReverseANumber.cpp` - Reverses an integer while checking for 32-bit overflow and returns `0` if overflow would occur.
- `input.txt` - Example input used for testing `ReverseANumber.cpp`.
- `output.txt` - Example output corresponding to `input.txt`.
- `.vscode/` - Workspace settings folder created by VS Code.
- `ArmsStrong.exe`, `GCD.exe` - Compiled executables generated from the source files.

## How to Build and Run

### Using VS Code Tasks

This workspace includes tasks for compiling and running the active file.

- Compile: `g++ -std=c++17 ${file} -o ${fileBasenameNoExtension}.exe`
- Run executable: `cmd.exe /c "${fileBasenameNoExtension}.exe" < input.txt > output.txt`

### Manual Build

From the folder in a terminal:

```powershell
g++ -std=c++17 ArmsStrong.cpp -o ArmsStrong.exe
g++ -std=c++17 GCD_of_2_numbers.cpp -o GCD.exe
g++ -std=c++17 ReverseANumber.cpp -o ReverseANumber.exe
```

### Manual Run

```powershell
./ArmsStrong.exe
./GCD.exe
./ReverseANumber.exe < input.txt
```

## Notes

- `ReverseANumber.cpp` reads a signed integer from standard input and prints its reversed value. The provided `input.txt` demonstrates negative number reversal.
- `ArmsStrong.cpp` prints the result of checking the hard-coded value `153`.
- `GCD_of_2_numbers.cpp` prints intermediate debugging output and the calculated GCD for `6` and `9`.

## Recommendation

Remove generated `.exe` files from version control if this folder is intended for source-only practice code. You can regenerate them from the `.cpp` files when needed.
