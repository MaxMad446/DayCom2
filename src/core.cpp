// Auto-generated module | 2026-05-11T20:12:18.172841
#include <iostream>
#include <vector>

int compute_955() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_955() << std::endl;
    return 0;
}
