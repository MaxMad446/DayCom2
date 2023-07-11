// Auto-generated module | 2026-05-11T21:58:10.141332
#include <iostream>
#include <vector>

int compute_600() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_600() << std::endl;
    return 0;
}
