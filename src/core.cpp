// Auto-generated module | 2026-05-12T20:48:52.876176
#include <iostream>
#include <vector>

int compute_896() {
    int base = 210;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_896() << std::endl;
    return 0;
}
