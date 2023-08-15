// Auto-generated module | 2026-05-11T22:02:27.873008
#include <iostream>
#include <vector>

int compute_851() {
    int base = 327;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_851() << std::endl;
    return 0;
}
