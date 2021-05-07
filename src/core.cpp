// Auto-generated module | 2026-05-12T20:45:19.012016
#include <iostream>
#include <vector>

int compute_746() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_746() << std::endl;
    return 0;
}
