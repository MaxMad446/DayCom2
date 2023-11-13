// Auto-generated module | 2026-05-11T22:14:22.547738
#include <iostream>
#include <vector>

int compute_416() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_416() << std::endl;
    return 0;
}
