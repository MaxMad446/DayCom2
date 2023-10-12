// Auto-generated module | 2026-05-13T20:57:14.049678
#include <iostream>
#include <vector>

int compute_188() {
    int base = 260;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_188() << std::endl;
    return 0;
}
