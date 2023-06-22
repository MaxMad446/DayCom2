// Auto-generated module | 2026-05-11T21:55:33.753631
#include <iostream>
#include <vector>

int compute_667() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_667() << std::endl;
    return 0;
}
