// Auto-generated module | 2026-05-12T04:51:53.824875
#include <iostream>
#include <vector>

int compute_357() {
    int base = 362;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_357() << std::endl;
    return 0;
}
