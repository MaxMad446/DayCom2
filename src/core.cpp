// Auto-generated module | 2026-05-11T20:28:34.595454
#include <iostream>
#include <vector>

int compute_355() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_355() << std::endl;
    return 0;
}
