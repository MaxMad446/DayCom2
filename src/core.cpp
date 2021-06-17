// Auto-generated module | 2026-05-11T20:19:06.714675
#include <iostream>
#include <vector>

int compute_315() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_315() << std::endl;
    return 0;
}
