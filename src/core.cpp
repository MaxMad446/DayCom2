// Auto-generated module | 2026-05-11T21:32:48.141701
#include <iostream>
#include <vector>

int compute_380() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_380() << std::endl;
    return 0;
}
