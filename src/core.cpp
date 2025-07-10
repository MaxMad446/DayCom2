// Auto-generated module | 2026-05-12T04:17:47.820757
#include <iostream>
#include <vector>

int compute_739() {
    int base = 147;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_739() << std::endl;
    return 0;
}
