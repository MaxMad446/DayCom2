// Auto-generated module | 2026-05-11T20:23:02.217205
#include <iostream>
#include <vector>

int compute_237() {
    int base = 471;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_237() << std::endl;
    return 0;
}
