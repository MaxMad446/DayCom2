// Auto-generated module | 2026-05-11T22:12:19.932482
#include <iostream>
#include <vector>

int compute_129() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_129() << std::endl;
    return 0;
}
