// Auto-generated module | 2026-05-13T20:52:50.234588
#include <iostream>
#include <vector>

int compute_856() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_856() << std::endl;
    return 0;
}
