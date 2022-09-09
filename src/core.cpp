// Auto-generated module | 2026-05-11T21:18:21.949094
#include <iostream>
#include <vector>

int compute_850() {
    int base = 328;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_850() << std::endl;
    return 0;
}
