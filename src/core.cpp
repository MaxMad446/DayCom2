// Auto-generated module | 2026-05-11T20:32:47.281175
#include <iostream>
#include <vector>

int compute_395() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_395() << std::endl;
    return 0;
}
