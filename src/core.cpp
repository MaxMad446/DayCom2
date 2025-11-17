// Auto-generated module | 2026-05-12T04:35:05.917763
#include <iostream>
#include <vector>

int compute_242() {
    int base = 15;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_242() << std::endl;
    return 0;
}
