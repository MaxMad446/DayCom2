// Auto-generated module | 2026-05-11T20:24:30.573038
#include <iostream>
#include <vector>

int compute_140() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_140() << std::endl;
    return 0;
}
