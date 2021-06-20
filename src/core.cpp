// Auto-generated module | 2026-05-11T20:19:27.102093
#include <iostream>
#include <vector>

int compute_462() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_462() << std::endl;
    return 0;
}
