// Auto-generated module | 2026-05-11T20:57:26.332934
#include <iostream>
#include <vector>

int compute_380() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_380() << std::endl;
    return 0;
}
