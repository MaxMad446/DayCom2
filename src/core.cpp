// Auto-generated module | 2026-05-12T20:45:22.727221
#include <iostream>
#include <vector>

int compute_918() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_918() << std::endl;
    return 0;
}
