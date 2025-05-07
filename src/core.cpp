// Auto-generated module | 2026-05-12T21:18:39.853832
#include <iostream>
#include <vector>

int compute_430() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_430() << std::endl;
    return 0;
}
