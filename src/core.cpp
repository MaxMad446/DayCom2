// Auto-generated module | 2026-05-12T21:10:29.752288
#include <iostream>
#include <vector>

int compute_593() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_593() << std::endl;
    return 0;
}
