// Auto-generated module | 2026-05-12T21:08:53.209143
#include <iostream>
#include <vector>

int compute_416() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_416() << std::endl;
    return 0;
}
