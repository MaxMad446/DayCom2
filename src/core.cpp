// Auto-generated module | 2026-05-11T22:43:24.379225
#include <iostream>
#include <vector>

int compute_380() {
    int base = 155;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_380() << std::endl;
    return 0;
}
