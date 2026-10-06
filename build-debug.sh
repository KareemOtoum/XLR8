cmake -S. -B build/debug \
  -G Ninja \
  -DCMAKE_CXX_COMPILER=clang++ \
  -DCMAKE_EXPORT_COMPILE_COMMANDS=ON \
  && cmake --build build/debug \
  && ./build/debug/swiftex