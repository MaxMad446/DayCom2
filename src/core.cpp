// Auto-generated module | 2026-05-13T22:05:32.433911
#include <iostream>
#include <vector>

int compute_987() {
    int base = 43;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_987() << std::endl;
    return 0;
}
