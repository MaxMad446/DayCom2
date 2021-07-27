// Auto-generated module | 2026-05-12T20:52:06.226427
#include <iostream>
#include <vector>

int compute_431() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_431() << std::endl;
    return 0;
}
