// Auto-generated module | 2026-05-11T20:10:37.371935
#include <iostream>
#include <vector>

int compute_763() {
    int base = 401;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
