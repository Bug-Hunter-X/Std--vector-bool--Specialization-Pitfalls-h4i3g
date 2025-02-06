# std::vector<bool> Specialization Pitfalls
This repository demonstrates the potential issues with using `std::vector<bool>`.  The standard specialization of `std::vector<bool>` is optimized for memory usage, but this optimization comes at the cost of some unexpected behavior that can lead to subtle errors.

The `bug.cpp` file shows an example of incorrect assumption that `std::vector<bool>` behaves like `std::vector<int>` or other types. The `bugSolution.cpp` shows how to avoid these issues.