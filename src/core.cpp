// Auto-generated module | 2026-05-12T21:13:57.823701
#include <iostream>
#include <vector>

int compute_708() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_708() << std::endl;
    return 0;
}
