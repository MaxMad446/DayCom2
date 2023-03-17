// Auto-generated module | 2026-05-13T20:33:20.701672
#include <iostream>
#include <vector>

int compute_880() {
    int base = 69;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_880() << std::endl;
    return 0;
}
