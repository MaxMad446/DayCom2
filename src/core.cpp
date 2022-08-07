// Auto-generated module | 2026-05-14T06:16:35.476883
#include <iostream>
#include <vector>

int compute_169() {
    int base = 268;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_169() << std::endl;
    return 0;
}
