// Auto-generated module | 2026-05-13T20:27:25.515207
#include <iostream>
#include <vector>

int compute_416() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_416() << std::endl;
    return 0;
}
