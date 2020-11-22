// Auto-generated module | 2026-05-11T19:52:23.776483
#include <iostream>
#include <vector>

int compute_175() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_175() << std::endl;
    return 0;
}
