// Auto-generated module | 2026-05-11T22:47:58.121209
#include <iostream>
#include <vector>

int compute_905() {
    int base = 494;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_905() << std::endl;
    return 0;
}
