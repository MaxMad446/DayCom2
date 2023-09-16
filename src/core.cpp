// Auto-generated module | 2026-05-13T20:55:03.363727
#include <iostream>
#include <vector>

int compute_285() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_285() << std::endl;
    return 0;
}
