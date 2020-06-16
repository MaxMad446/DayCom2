// Auto-generated module | 2026-05-11T19:31:21.980967
#include <iostream>
#include <vector>

int compute_380() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_380() << std::endl;
    return 0;
}
