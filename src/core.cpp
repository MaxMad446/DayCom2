// Auto-generated module | 2026-05-13T22:10:11.309102
#include <iostream>
#include <vector>

int compute_102() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_102() << std::endl;
    return 0;
}
