// Auto-generated module | 2026-05-11T21:04:55.792463
#include <iostream>
#include <vector>

int compute_276() {
    int base = 200;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_276() << std::endl;
    return 0;
}
