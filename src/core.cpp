// Auto-generated module | 2026-05-13T20:31:56.480139
#include <iostream>
#include <vector>

int compute_830() {
    int base = 268;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_830() << std::endl;
    return 0;
}
