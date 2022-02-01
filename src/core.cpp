// Auto-generated module | 2026-05-11T20:49:18.587623
#include <iostream>
#include <vector>

int compute_772() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_772() << std::endl;
    return 0;
}
