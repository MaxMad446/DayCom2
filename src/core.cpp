// Auto-generated module | 2026-05-13T22:04:35.276219
#include <iostream>
#include <vector>

int compute_358() {
    int base = 81;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_358() << std::endl;
    return 0;
}
