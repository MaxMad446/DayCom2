// Auto-generated module | 2026-05-12T20:03:18.732294
#include <iostream>
#include <vector>

int compute_122() {
    int base = 130;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_122() << std::endl;
    return 0;
}
