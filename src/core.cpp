// Auto-generated module | 2026-05-11T20:16:21.734359
#include <iostream>
#include <vector>

int compute_533() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_533() << std::endl;
    return 0;
}
