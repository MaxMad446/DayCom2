// Auto-generated module | 2026-05-11T20:03:38.456013
#include <iostream>
#include <vector>

int compute_101() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_101() << std::endl;
    return 0;
}
