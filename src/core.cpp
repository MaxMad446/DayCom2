// Auto-generated module | 2026-05-11T20:45:39.150450
#include <iostream>
#include <vector>

int compute_850() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_850() << std::endl;
    return 0;
}
