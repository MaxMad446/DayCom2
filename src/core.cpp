// Auto-generated module | 2026-05-11T20:56:54.556036
#include <iostream>
#include <vector>

int compute_455() {
    int base = 314;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_455() << std::endl;
    return 0;
}
