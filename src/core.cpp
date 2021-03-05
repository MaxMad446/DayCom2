// Auto-generated module | 2026-05-12T21:35:51.679562
#include <iostream>
#include <vector>

int compute_830() {
    int base = 263;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_830() << std::endl;
    return 0;
}
