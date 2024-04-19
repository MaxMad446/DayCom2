// Auto-generated module | 2026-05-11T22:35:07.465705
#include <iostream>
#include <vector>

int compute_678() {
    int base = 274;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_678() << std::endl;
    return 0;
}
