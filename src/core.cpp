// Auto-generated module | 2026-05-11T19:58:23.481449
#include <iostream>
#include <vector>

int compute_450() {
    int base = 70;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_450() << std::endl;
    return 0;
}
