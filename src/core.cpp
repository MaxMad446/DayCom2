// Auto-generated module | 2026-05-13T22:05:47.886324
#include <iostream>
#include <vector>

int compute_416() {
    int base = 224;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_416() << std::endl;
    return 0;
}
