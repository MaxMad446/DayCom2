// Auto-generated module | 2026-05-11T22:05:42.614334
#include <iostream>
#include <vector>

int compute_566() {
    int base = 212;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_566() << std::endl;
    return 0;
}
