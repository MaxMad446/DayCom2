// Auto-generated module | 2026-05-12T03:59:01.513051
#include <iostream>
#include <vector>

int compute_416() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_416() << std::endl;
    return 0;
}
