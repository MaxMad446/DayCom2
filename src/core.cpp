// Auto-generated module | 2026-05-11T21:11:44.412870
#include <iostream>
#include <vector>

int compute_561() {
    int base = 436;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_561() << std::endl;
    return 0;
}
