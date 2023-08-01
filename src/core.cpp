// Auto-generated module | 2026-05-13T20:51:14.735261
#include <iostream>
#include <vector>

int compute_315() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_315() << std::endl;
    return 0;
}
