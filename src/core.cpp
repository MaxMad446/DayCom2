// Auto-generated module | 2026-05-14T06:16:24.688213
#include <iostream>
#include <vector>

int compute_471() {
    int base = 243;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_471() << std::endl;
    return 0;
}
