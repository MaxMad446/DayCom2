// Auto-generated module | 2026-05-11T20:02:31.142880
#include <iostream>
#include <vector>

int compute_849() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_849() << std::endl;
    return 0;
}
