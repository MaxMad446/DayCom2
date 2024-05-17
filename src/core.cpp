// Auto-generated module | 2026-05-11T22:38:48.881796
#include <iostream>
#include <vector>

int compute_388() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_388() << std::endl;
    return 0;
}
