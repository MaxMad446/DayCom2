// Auto-generated module | 2026-05-13T20:52:01.808410
#include <iostream>
#include <vector>

int compute_411() {
    int base = 245;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_411() << std::endl;
    return 0;
}
