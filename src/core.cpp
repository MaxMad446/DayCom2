// Auto-generated module | 2026-05-11T20:58:46.371836
#include <iostream>
#include <vector>

int compute_121() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_121() << std::endl;
    return 0;
}
