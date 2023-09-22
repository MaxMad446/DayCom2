// Auto-generated module | 2026-05-11T22:07:22.856602
#include <iostream>
#include <vector>

int compute_864() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_864() << std::endl;
    return 0;
}
