// -------------------------------------------------------------------------- //
//
//  main.cpp
//
//  This is just a very simple `cpp` file.
//
// -------------------------------------------------------------------------- //


// Standard C++ headers and libraries are always known to the compiler. They're
// shipped along the compiler (eg. GCC, clang etc.), when it's installed.
// [>>> TODO with them <<<] Nothing.
//
// > Let's include some of them (but not all of them will be used here).
#include<vector>
#include<complex>

#include<fstream>
#include<iostream>

// Non-standard headers and libraries are never not known to the compiler by
// default. 
// [>>> TODO with them <<<] Link them to the compiler when the code is compiled.
//
// (File extensions doesn't matter as long as these headers are simple text
// files. It's just a matter of convention that '.h' stands for C, while '.hpp'
// stands for C++ headers. They can be named as '.kitten' and '.kittenpp' if
// desirable.)
//
// > Let's include a custom header file
#include<test.hpp>


// This is the most conventional form of a main function in C/C++ (note the
// arguments and the int 0; return value).
int main(int argc, char const *argv[])
{

  // Use functions/classes from the namespace of the C++ Standard Library
  // The Standard Library has its own namespace (`std`) that contains the all
  // of its functions and classes.
  //
  // Eg. create a vector and print its values using a C++17ish way
  std::vector<int> v = {1, 1, 2, 3, 5, 8, 13, 21};
  for (const auto& i: v) {
    std::cout << i << ' ';
  }

  // Use functions/classes from the custom file. It maybe has a namespace itself,
  // that has to be specified similarly to `std`.
  test::print("Something is printed by `test`");
  return 0;
}