// Auto-generated module | 2026-05-13T21:00:54.337146
#include <iostream>
#include <vector>

int compute_416() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_416() << std::endl;
    return 0;
}
