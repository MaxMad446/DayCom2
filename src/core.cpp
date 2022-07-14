// Auto-generated module | 2026-05-11T21:10:50.249638
#include <iostream>
#include <vector>

int compute_227() {
    int base = 434;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_227() << std::endl;
    return 0;
}
