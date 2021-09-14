// Auto-generated module | 2026-05-11T20:30:46.326108
#include <iostream>
#include <vector>

int compute_200() {
    int base = 182;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_200() << std::endl;
    return 0;
}
