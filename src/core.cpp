// Auto-generated module | 2026-05-11T19:47:26.989149
#include <iostream>
#include <vector>

int compute_931() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_931() << std::endl;
    return 0;
}
