// Auto-generated module | 2026-05-11T21:43:20.969320
#include <iostream>
#include <vector>

int compute_231() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
