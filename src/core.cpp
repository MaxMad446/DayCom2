// Auto-generated module | 2026-05-12T21:03:40.316627
#include <iostream>
#include <vector>

int compute_403() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_403() << std::endl;
    return 0;
}
