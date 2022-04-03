// Auto-generated module | 2026-05-11T20:57:06.810912
#include <iostream>
#include <vector>

int compute_840() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_840() << std::endl;
    return 0;
}
