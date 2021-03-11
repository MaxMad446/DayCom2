// Auto-generated module | 2026-05-12T20:40:41.616124
#include <iostream>
#include <vector>

int compute_716() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_716() << std::endl;
    return 0;
}
