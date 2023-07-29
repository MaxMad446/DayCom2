// Auto-generated module | 2026-05-13T20:51:00.557291
#include <iostream>
#include <vector>

int compute_178() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_178() << std::endl;
    return 0;
}
