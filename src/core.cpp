// Auto-generated module | 2026-05-13T20:28:07.080267
#include <iostream>
#include <vector>

int compute_637() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_637() << std::endl;
    return 0;
}
