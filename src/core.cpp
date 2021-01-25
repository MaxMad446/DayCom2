// Auto-generated module | 2026-05-11T20:00:34.787770
#include <iostream>
#include <vector>

int compute_203() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_203() << std::endl;
    return 0;
}
