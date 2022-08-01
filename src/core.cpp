// Auto-generated module | 2026-05-14T06:16:07.718896
#include <iostream>
#include <vector>

int compute_416() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_416() << std::endl;
    return 0;
}
