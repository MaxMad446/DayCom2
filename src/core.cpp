// Auto-generated module | 2026-05-11T20:23:28.543735
#include <iostream>
#include <vector>

int compute_779() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_779() << std::endl;
    return 0;
}
