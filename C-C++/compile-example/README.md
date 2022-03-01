# How to compile a C/C++ program

To compile a program, we have to use a C++ compiler. Eg. `g++` from the GNU
Compiler Collection (GCC) or `clang++` from the clang software package. We also
have to tell the compiler that which directory it should search for header files
that are included in the `main.cpp` code.

We can use the following commands to do all of these to compile the code and
create an output binary/executable named `program-name` inside the `bin` folder
(`bin` is the name that's conventionally given on Linux to a folder where
binaries/executables are stored). Note, that the `bin` folder should be created
beforehand in this case, because the compiler itself cannot do this for us.


$ g++ main.cpp -Iinclude/ -o bin/program-name

  or similarly

$ clang++ main.cpp -Iinclude/ -o bin/program-name


(Obviously other compliers besides GCC and clang can be also used if desired.)
The `-I` tag immediately follewd by the path to the directory containing the
header files tells the compiler where to look for the headers in question. It
can be either a relative or an absolute path. If we're giving it a relative path
to the location of the header directory (conventionally named as `include` in
almost any software development field and project) we have to be careful from
which working directory we're trying to compile a `.cpp` code. (It's quite
trivial if someone is familiar with the terms "relative path" and "absolute
path".)


If everything goes well, we should have the following directory structure at the
end:

project/
│
├── bin/
│   └── program-name
│
├── include/
│   └── test.hpp
│
└── main.cpp
