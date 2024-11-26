// Auto-generated module | 2026-05-12T03:48:09.098336
#include <iostream>
#include <vector>

int compute_746() {
    int base = 494;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_746() << std::endl;
    return 0;
}
