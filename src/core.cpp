// Auto-generated module | 2026-05-12T20:00:57.236150
#include <iostream>
#include <vector>

int compute_197() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_197() << std::endl;
    return 0;
}
