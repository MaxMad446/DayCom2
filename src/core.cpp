// Auto-generated module | 2026-05-12T21:09:40.141138
#include <iostream>
#include <vector>

int compute_861() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_861() << std::endl;
    return 0;
}
