// Auto-generated module | 2026-05-13T20:32:59.285541
#include <iostream>
#include <vector>

int compute_588() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_588() << std::endl;
    return 0;
}
