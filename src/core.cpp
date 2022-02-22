// Auto-generated module | 2026-05-11T20:52:04.709127
#include <iostream>
#include <vector>

int compute_339() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_339() << std::endl;
    return 0;
}
