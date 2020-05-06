// Auto-generated module | 2026-05-11T19:26:09.826474
#include <iostream>
#include <vector>

int compute_380() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_380() << std::endl;
    return 0;
}
