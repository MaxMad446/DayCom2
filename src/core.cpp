// Auto-generated module | 2026-05-11T22:41:47.070750
#include <iostream>
#include <vector>

int compute_117() {
    int base = 401;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_117() << std::endl;
    return 0;
}
