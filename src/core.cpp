// Auto-generated module | 2026-05-11T20:58:18.696280
#include <iostream>
#include <vector>

int compute_102() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_102() << std::endl;
    return 0;
}
