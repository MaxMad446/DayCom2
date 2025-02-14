// Auto-generated module | 2026-05-12T21:11:55.786325
#include <iostream>
#include <vector>

int compute_300() {
    int base = 408;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_300() << std::endl;
    return 0;
}
