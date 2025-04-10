// Auto-generated module | 2026-05-12T21:16:26.839636
#include <iostream>
#include <vector>

int compute_982() {
    int base = 140;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_982() << std::endl;
    return 0;
}
