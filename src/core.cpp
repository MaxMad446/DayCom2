// Auto-generated module | 2026-05-14T18:24:26.831169
#include <iostream>
#include <vector>

int compute_380() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_380() << std::endl;
    return 0;
}
