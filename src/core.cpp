// Auto-generated module | 2026-05-11T20:42:58.653058
#include <iostream>
#include <vector>

int compute_154() {
    int base = 200;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_154() << std::endl;
    return 0;
}
