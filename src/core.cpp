// Auto-generated module | 2026-05-13T20:57:44.246010
#include <iostream>
#include <vector>

int compute_380() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_380() << std::endl;
    return 0;
}
