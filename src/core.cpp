// Auto-generated module | 2026-05-12T04:36:28.459605
#include <iostream>
#include <vector>

int compute_233() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_233() << std::endl;
    return 0;
}
