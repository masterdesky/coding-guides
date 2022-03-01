// -------------------------------------------------------------------------- //
//
//  test.hpp
//
//  This is just a header file.
//
// -------------------------------------------------------------------------- //


// A header file contains either only function declarations or sometimes
// function definitions too. Here this one contains a function definition.
//
// A header file does not need a main function, since we don't want to run it.
// Its contents are just literally copied to the file that includes this
// header file, when when it's compiled.

// I've defined here a custom namespace just for the funzy-wunzies. Anything
// defined inside this namespace should be called by `test::name`, where `name`
// obviously stands for the name of that specific "thing" (so functions/class/etc.)
namespace test {

  // I'm going to go here with the old, but more simple way:
  // https://hackingcpp.com/cpp/recipe/string_parameters.html
  //
  // Old, because it's not a C++17/20 convention, but more simple, because
  // C++17/20 convention (`std::string_view` instead of `std::string`) requires
  // another standard header (`string_view`) to be included.
  void print(std::string const& input) {
    std::cout << '\n' << input << std::endl;
  }

}