// Auto-generated module | 2026-05-12T04:36:03.304063
#include <iostream>
#include <vector>

int compute_357() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_357() << std::endl;
    return 0;
}
