# How to compile a C/C++ program

To compile a C or C++ program, we have to use a C or C++ compiler respectively.
Eg. `gcc`/`g++` from the GNU Compiler Collection (GCC) or `clang`/`clang++`
from the clang software package. If we're woring with header files, we also have
to tell the compiler that which directory it should search for these header
files that are included in or `.c` or `.cpp` project codes. In this example I'm
using a simple example, where we're including a `test.hpp` header file that
resides in the `include` directory to a simple `main.cpp` code. The same steps
can be used for similar problems written in either `C` or `C++`.


In this example we can use one of the following commands to do all of the steps
detailed above to compile the code and create an output binary/executable named
`program-name` inside a `bin` folder (`bin` is the name that's conventionally
given on Linux to a folder where binaries/executables are stored). Note, that
the `bin` folder should be created beforehand in this case, because the compiler
itself cannot do this for us. Imagine a directory structure like this in this
simple case:

project/  
│  
├── bin/  
│  
├── include/  
│   └── test.hpp  
│  
└── main.cpp  

If we ensured the existence of the `bin` folder, we can use eg. the `g++` (in
case of GCC) or `clang++` (in case of clang) commands to compile our simple
example software:


$ g++ main.cpp -Iinclude/ -o bin/program-name

  or similarly

$ clang++ main.cpp -Iinclude/ -o bin/program-name


(Obviously other compliers besides GCC and clang can be also used if desired.)

Here we've used two "flags":
- The `-I` flag, immediately followed by the path to the directory containing
the header files, tells the compiler where to look for the headers in question.
It can be given either a relative or an absolute path. If we're giving it a
relative path that points to the location of the header directory (conventionally
named as `include` in almost any software development project), then we have to
be careful and pay attention that which working directory we're trying to compile
the `.cpp` code from. (It's quite trivial if someone is familiar with the terms
"relative path" and "absolute path".)


If everything goes well, we should have the following directory structure at the
end, where the `bin` folder now contains our executable file:

project/  
│  
├── bin/  
│   └── program-name  
│  
├── include/  
│   └── test.hpp  
│  
└── main.cpp  
