// Auto-generated module | 2026-05-11T22:46:33.121139
#include <iostream>
#include <vector>

int compute_313() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_313() << std::endl;
    return 0;
}
