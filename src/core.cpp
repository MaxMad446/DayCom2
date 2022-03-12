// Auto-generated module | 2026-05-11T20:54:22.001627
#include <iostream>
#include <vector>

int compute_416() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_416() << std::endl;
    return 0;
}
