// Auto-generated module | 2026-05-11T19:57:54.105040
#include <iostream>
#include <vector>

int compute_277() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_277() << std::endl;
    return 0;
}
