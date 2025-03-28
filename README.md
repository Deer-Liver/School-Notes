# 📚 School Notes Repository  
**Structured personal knowledge base with executable solvers**  
*(Open for anyone to use/learn from!)*  

## 🌟 What's Inside  
school-notes/
├── subject/ # e.g., math/, physics/, cs/
│ └── topic/ # e.g., pythagorean-theorem/
│ ├── notes.txt # My personal study notes
│ ├── solver.c # C implementation
│ ├── solver # Pre-built executable (Linux/macOS)
│ └── solver.exe # Pre-built executable (Windows)
└── ...

Copy

## 🚀 How to Use Any Solver  
1. **Navigate** to a topic:  
   ```bash  
   cd math/pythagorean-theorem  
Run the solver:

bash
Copy
./solver       # Linux/macOS  
.\solver.exe   # Windows  
Input format (example):

plaintext
Copy
> a=3 b=4 c=?  
Result: c = 5.00  
Type quit to exit.

🔧 For Contributors/Modifiers
Compiling Solvers
Rebuild any solver after editing .c files:

bash
Copy
gcc solver.c -o solver -lm  # Linux/macOS  
gcc solver.c -o solver.exe -lm  # Windows  
Adding New Topics
Create a folder:

bash
Copy
mkdir -p physics/kinematics  
Add:

notes.txt: Concepts/formulas

solver.c: Your implementation

💡 Why This Structure?
For Me: Organized study reference with runnable examples.

For Others:

🧠 Learn from annotated notes

🛠️ Reuse solvers for homework/labs

🔄 Improve via PRs (I’ll credit you!)

🚨 Troubleshooting
Permission denied? Run:

bash
Copy
chmod +x solver  
Can’t find files? Double-check paths with:

bash
Copy
pwd  # Show current directory  
ls   # List files  
📜 License: MIT
(Use freely, but credit this repo and share alike!)

Open in Codespaces
