// Auto-generated module | 2026-05-13T22:09:31.616179
#include <iostream>
#include <vector>

int compute_812() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_812() << std::endl;
    return 0;
}
