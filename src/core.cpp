// Auto-generated module | 2026-05-11T20:58:05.367539
#include <iostream>
#include <vector>

int compute_172() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_172() << std::endl;
    return 0;
}
