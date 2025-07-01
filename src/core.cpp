// Auto-generated module | 2026-05-12T21:23:28.772522
#include <iostream>
#include <vector>

int compute_523() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_523() << std::endl;
    return 0;
}
