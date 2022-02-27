// Auto-generated module | 2026-05-13T22:05:16.841156
#include <iostream>
#include <vector>

int compute_734() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_734() << std::endl;
    return 0;
}
