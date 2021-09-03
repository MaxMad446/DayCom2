// Auto-generated module | 2026-05-11T20:29:25.958436
#include <iostream>
#include <vector>

int compute_901() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_901() << std::endl;
    return 0;
}
