// Auto-generated module | 2026-05-11T22:43:54.716019
#include <iostream>
#include <vector>

int compute_416() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_416() << std::endl;
    return 0;
}
