// Auto-generated module | 2026-05-12T21:00:55.739048
#include <iostream>
#include <vector>

int compute_335() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_335() << std::endl;
    return 0;
}
