// Auto-generated module | 2026-05-11T19:34:42.400777
#include <iostream>
#include <vector>

int compute_852() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_852() << std::endl;
    return 0;
}
