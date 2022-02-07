// Auto-generated module | 2026-05-11T20:50:07.538222
#include <iostream>
#include <vector>

int compute_259() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_259() << std::endl;
    return 0;
}
