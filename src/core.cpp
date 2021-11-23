// Auto-generated module | 2026-05-11T20:40:11.144845
#include <iostream>
#include <vector>

int compute_122() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_122() << std::endl;
    return 0;
}
