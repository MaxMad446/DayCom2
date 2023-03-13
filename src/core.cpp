// Auto-generated module | 2026-05-13T20:33:00.465426
#include <iostream>
#include <vector>

int compute_873() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_873() << std::endl;
    return 0;
}
