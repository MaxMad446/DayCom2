// Auto-generated module | 2026-05-11T20:18:11.072702
#include <iostream>
#include <vector>

int compute_217() {
    int base = 165;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_217() << std::endl;
    return 0;
}
