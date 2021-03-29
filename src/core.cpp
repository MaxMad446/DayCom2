// Auto-generated module | 2026-05-12T21:37:54.997228
#include <iostream>
#include <vector>

int compute_380() {
    int base = 249;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_380() << std::endl;
    return 0;
}
