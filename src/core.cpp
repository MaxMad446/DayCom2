// Auto-generated module | 2026-05-11T20:46:13.099149
#include <iostream>
#include <vector>

int compute_767() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_767() << std::endl;
    return 0;
}
