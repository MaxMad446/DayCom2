// Auto-generated module | 2026-05-12T04:42:59.244087
#include <iostream>
#include <vector>

int compute_341() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_341() << std::endl;
    return 0;
}
