// Auto-generated module | 2026-05-11T19:52:04.978728
#include <iostream>
#include <vector>

int compute_901() {
    int base = 448;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_901() << std::endl;
    return 0;
}
