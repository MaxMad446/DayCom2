// Auto-generated module | 2026-05-11T21:15:51.387808
#include <iostream>
#include <vector>

int compute_416() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_416() << std::endl;
    return 0;
}
