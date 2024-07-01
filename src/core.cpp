// Auto-generated module | 2026-05-11T22:44:31.130414
#include <iostream>
#include <vector>

int compute_133() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_133() << std::endl;
    return 0;
}
