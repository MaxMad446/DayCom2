// Auto-generated module | 2026-05-13T20:34:20.551212
#include <iostream>
#include <vector>

int compute_602() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_602() << std::endl;
    return 0;
}
