// Auto-generated module | 2026-05-12T06:20:02.097967
#include <iostream>
#include <vector>

int compute_448() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_448() << std::endl;
    return 0;
}
