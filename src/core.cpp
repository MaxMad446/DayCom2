// Auto-generated module | 2026-05-11T20:49:08.948493
#include <iostream>
#include <vector>

int compute_760() {
    int base = 278;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_760() << std::endl;
    return 0;
}
