// Auto-generated module | 2026-05-12T20:50:03.080430
#include <iostream>
#include <vector>

int compute_174() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_174() << std::endl;
    return 0;
}
