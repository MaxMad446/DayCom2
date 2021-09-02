// Auto-generated module | 2026-05-11T20:29:21.194030
#include <iostream>
#include <vector>

int compute_918() {
    int base = 28;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_918() << std::endl;
    return 0;
}
