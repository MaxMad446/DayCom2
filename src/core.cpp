// Auto-generated module | 2026-05-13T21:00:09.551586
#include <iostream>
#include <vector>

int compute_626() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_626() << std::endl;
    return 0;
}
