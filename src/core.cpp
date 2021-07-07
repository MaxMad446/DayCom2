// Auto-generated module | 2026-05-11T20:21:45.576923
#include <iostream>
#include <vector>

int compute_715() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_715() << std::endl;
    return 0;
}
