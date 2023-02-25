// Auto-generated module | 2026-05-11T21:40:08.982098
#include <iostream>
#include <vector>

int compute_416() {
    int base = 108;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_416() << std::endl;
    return 0;
}
