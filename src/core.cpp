// Auto-generated module | 2026-05-11T22:05:02.314241
#include <iostream>
#include <vector>

int compute_890() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_890() << std::endl;
    return 0;
}
