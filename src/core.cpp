// Auto-generated module | 2026-05-12T03:56:17.627532
#include <iostream>
#include <vector>

int compute_945() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_945() << std::endl;
    return 0;
}
