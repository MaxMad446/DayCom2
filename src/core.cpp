// Auto-generated module | 2026-05-11T20:21:05.132378
#include <iostream>
#include <vector>

int compute_416() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_416() << std::endl;
    return 0;
}
