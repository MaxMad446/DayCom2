// Auto-generated module | 2026-05-11T21:35:43.266072
#include <iostream>
#include <vector>

int compute_194() {
    int base = 351;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_194() << std::endl;
    return 0;
}
