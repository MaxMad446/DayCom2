// Auto-generated module | 2026-05-11T20:11:11.020573
#include <iostream>
#include <vector>

int compute_994() {
    int base = 170;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_994() << std::endl;
    return 0;
}
