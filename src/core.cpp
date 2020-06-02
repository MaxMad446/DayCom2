// Auto-generated module | 2026-05-11T19:29:27.226619
#include <iostream>
#include <vector>

int compute_168() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_168() << std::endl;
    return 0;
}
