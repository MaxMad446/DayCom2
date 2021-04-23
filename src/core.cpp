// Auto-generated module | 2026-05-12T20:44:06.425027
#include <iostream>
#include <vector>

int compute_364() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_364() << std::endl;
    return 0;
}
