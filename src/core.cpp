// Auto-generated module | 2026-05-11T21:29:18.747125
#include <iostream>
#include <vector>

int compute_586() {
    int base = 262;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_586() << std::endl;
    return 0;
}
