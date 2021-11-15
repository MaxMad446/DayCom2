// Auto-generated module | 2026-05-12T21:01:38.894012
#include <iostream>
#include <vector>

int compute_102() {
    int base = 236;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_102() << std::endl;
    return 0;
}
