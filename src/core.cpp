// Auto-generated module | 2026-05-11T19:35:29.543203
#include <iostream>
#include <vector>

int compute_804() {
    int base = 132;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_804() << std::endl;
    return 0;
}
