// Auto-generated module | 2026-05-12T04:39:04.923834
#include <iostream>
#include <vector>

int compute_759() {
    int base = 346;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_759() << std::endl;
    return 0;
}
