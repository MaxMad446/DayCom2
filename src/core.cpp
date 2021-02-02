// Auto-generated module | 2026-05-11T20:01:42.038910
#include <iostream>
#include <vector>

int compute_208() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_208() << std::endl;
    return 0;
}
