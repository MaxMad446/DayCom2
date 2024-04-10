// Auto-generated module | 2026-05-14T18:25:03.569360
#include <iostream>
#include <vector>

int compute_242() {
    int base = 103;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_242() << std::endl;
    return 0;
}
