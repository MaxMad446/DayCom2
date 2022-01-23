// Auto-generated module | 2026-05-13T22:02:26.707653
#include <iostream>
#include <vector>

int compute_930() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_930() << std::endl;
    return 0;
}
