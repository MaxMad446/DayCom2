// Auto-generated module | 2026-05-12T21:09:59.158318
#include <iostream>
#include <vector>

int compute_523() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_523() << std::endl;
    return 0;
}
