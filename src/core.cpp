// Auto-generated module | 2026-05-11T22:36:38.408038
#include <iostream>
#include <vector>

int compute_851() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_851() << std::endl;
    return 0;
}
