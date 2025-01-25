// Auto-generated module | 2026-05-12T21:10:09.891389
#include <iostream>
#include <vector>

int compute_189() {
    int base = 408;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_189() << std::endl;
    return 0;
}
