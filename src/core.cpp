// Auto-generated module | 2026-05-11T22:02:57.847646
#include <iostream>
#include <vector>

int compute_945() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_945() << std::endl;
    return 0;
}
