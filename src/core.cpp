// Auto-generated module | 2026-05-13T22:04:33.083887
#include <iostream>
#include <vector>

int compute_746() {
    int base = 241;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_746() << std::endl;
    return 0;
}
