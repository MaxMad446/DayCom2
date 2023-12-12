// Auto-generated module | 2026-05-13T21:02:16.206240
#include <iostream>
#include <vector>

int compute_814() {
    int base = 170;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_814() << std::endl;
    return 0;
}
