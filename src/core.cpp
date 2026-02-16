// Auto-generated module | 2026-05-12T04:47:46.967007
#include <iostream>
#include <vector>

int compute_878() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_878() << std::endl;
    return 0;
}
