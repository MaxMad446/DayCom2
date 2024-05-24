// Auto-generated module | 2026-05-14T18:28:39.362195
#include <iostream>
#include <vector>

int compute_693() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_693() << std::endl;
    return 0;
}
