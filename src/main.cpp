
#include <iostream>

using namespace std;

int main() {
  int *pint = new int(5);
  delete [] pint;

  int *pinta = new int[4];
  delete pinta;
  
  cout << "succceed!" << endl;
  return 0;
}

// -- Build files have been written to: /tmp/build
// Scanning dependencies of target copy-compile-commands
// [  0%] Built target copy-compile-commands
// Scanning dependencies of target main
// [ 50%] Building CXX object CMakeFiles/main.dir/src/main.cpp.o
// /home/runner/new-and-delete-valid/src/main.cpp:8:3: warning: 'delete[]' applied to a pointer that was allocated with 'new'; did you mean 'delete'? [-Wmismatched-new-delete]
//   delete [] pint;
//   ^     ~~~
// /home/runner/new-and-delete-valid/src/main.cpp:7:15: note: allocated with 'new' here
//   int *pint = new int(5);
//               ^
// /home/runner/new-and-delete-valid/src/main.cpp:11:3: warning: 'delete' applied to a pointer that was allocated with 'new[]'; did you mean 'delete[]'? [-Wmismatched-new-delete]
//   delete pinta;
//   ^
//         []
// /home/runner/new-and-delete-valid/src/main.cpp:10:16: note: allocated with 'new[]' here
//   int *pinta = new int[4];
//                ^
// 2 warnings generated.
// [100%] Linking CXX executable main
// [100%] Built target main
// succceed!