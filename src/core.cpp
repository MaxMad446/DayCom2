// Auto-generated module | 2026-05-11T21:03:28.507005
#include <iostream>
#include <vector>

int compute_380() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_380() << std::endl;
    return 0;
}
