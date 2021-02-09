// Auto-generated module | 2026-05-11T20:02:34.886129
#include <iostream>
#include <vector>

int compute_394() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_394() << std::endl;
    return 0;
}
