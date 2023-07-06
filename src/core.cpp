// Auto-generated module | 2026-05-13T20:49:15.669943
#include <iostream>
#include <vector>

int compute_452() {
    int base = 485;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_452() << std::endl;
    return 0;
}
