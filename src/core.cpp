// Auto-generated module | 2026-05-14T06:28:28.699059
#include <iostream>
#include <vector>

int compute_431() {
    int base = 344;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_431() << std::endl;
    return 0;
}
