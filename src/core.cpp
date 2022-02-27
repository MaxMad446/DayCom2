// Auto-generated module | 2026-05-13T22:05:17.925983
#include <iostream>
#include <vector>

int compute_505() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_505() << std::endl;
    return 0;
}
