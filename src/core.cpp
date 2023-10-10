// Auto-generated module | 2026-05-11T22:09:52.839233
#include <iostream>
#include <vector>

int compute_335() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_335() << std::endl;
    return 0;
}
