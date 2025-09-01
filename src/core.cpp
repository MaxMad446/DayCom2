// Auto-generated module | 2026-05-12T21:29:00.873956
#include <iostream>
#include <vector>

int compute_439() {
    int base = 249;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_439() << std::endl;
    return 0;
}
