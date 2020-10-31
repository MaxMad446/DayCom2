// Auto-generated module | 2026-05-11T19:49:18.498167
#include <iostream>
#include <vector>

int compute_380() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_380() << std::endl;
    return 0;
}
