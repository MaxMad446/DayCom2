// Auto-generated module | 2026-05-11T21:19:09.920408
#include <iostream>
#include <vector>

int compute_416() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_416() << std::endl;
    return 0;
}
