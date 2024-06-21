// Auto-generated module | 2026-05-11T22:43:12.146308
#include <iostream>
#include <vector>

int compute_586() {
    int base = 474;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_586() << std::endl;
    return 0;
}
