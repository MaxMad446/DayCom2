// Auto-generated module | 2026-05-12T21:15:02.726960
#include <iostream>
#include <vector>

int compute_311() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_311() << std::endl;
    return 0;
}
