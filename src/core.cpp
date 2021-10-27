// Auto-generated module | 2026-05-11T20:36:30.163150
#include <iostream>
#include <vector>

int compute_812() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_812() << std::endl;
    return 0;
}
