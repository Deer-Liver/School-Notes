# School Notes

A structured collection of my academic notes and executable solvers for math and science topics.  
**Others are welcome to use these!**

## Repository Structure

Each topic follows this standardized format:
subject/
└── topic-name/
├── notes.txt # Theory and explanations
├── solver.c # C source code
├── solver # Linux/macOS executable
└── solver.exe # Windows executable

Copy

Example:  
`math/pythagorean-theorem/` contains notes and a solver for the Pythagorean theorem.

## Getting Started

### Using Pre-Built Solvers

1. Navigate to any topic:
   ```bash
   cd math/pythagorean-theorem
Run the solver:

bash
Copy
./solver        # Linux/macOS
.\solver.exe    # Windows
Input Examples
For the Pythagorean solver:

plaintext
Copy
> a=3 b=4 c=?
Result: c = 5.00

> a=5 b=? c=13
Result: b = 12.00
Type quit to exit.

For Developers
Compiling from Source
Rebuild any solver:

bash
Copy
gcc solver.c -o solver -lm    # Linux/macOS
gcc solver.c -o solver.exe -lm # Windows
Adding New Topics
Create a new folder:

bash
Copy
mkdir -p physics/kinematics
Add:

notes.txt: Your study notes

solver.c: Implementation

Troubleshooting
Permission denied (Linux/macOS):

bash
Copy
chmod +x solver
File not found:
Verify your current directory with pwd and ls.

License
This content is shared under CC BY-SA 4.0.
Use, adapt, and share freely with attribution.
