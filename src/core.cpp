// Auto-generated module | 2026-05-11T21:50:52.965598
#include <iostream>
#include <vector>

int compute_749() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_749() << std::endl;
    return 0;
}
