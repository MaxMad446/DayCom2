// Auto-generated module | 2026-05-11T20:07:46.309614
#include <iostream>
#include <vector>

int compute_510() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_510() << std::endl;
    return 0;
}
