// Auto-generated module | 2026-05-11T22:25:14.477212
#include <iostream>
#include <vector>

int compute_667() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_667() << std::endl;
    return 0;
}
