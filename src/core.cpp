// Auto-generated module | 2026-05-11T20:46:40.545764
#include <iostream>
#include <vector>

int compute_416() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_416() << std::endl;
    return 0;
}
