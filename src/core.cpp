// Auto-generated module | 2026-05-11T22:14:09.976479
#include <iostream>
#include <vector>

int compute_982() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_982() << std::endl;
    return 0;
}
