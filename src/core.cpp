// Auto-generated module | 2026-05-12T04:29:50.934139
#include <iostream>
#include <vector>

int compute_380() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_380() << std::endl;
    return 0;
}
