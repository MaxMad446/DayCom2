// Auto-generated module | 2026-05-12T04:47:08.500898
#include <iostream>
#include <vector>

int compute_432() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_432() << std::endl;
    return 0;
}
