// Auto-generated module | 2026-05-14T18:19:11.884266
#include <iostream>
#include <vector>

int compute_311() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_311() << std::endl;
    return 0;
}
