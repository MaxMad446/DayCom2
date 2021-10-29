// Auto-generated module | 2026-05-12T21:00:19.561369
#include <iostream>
#include <vector>

int compute_750() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_750() << std::endl;
    return 0;
}
