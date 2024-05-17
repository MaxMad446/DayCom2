// Auto-generated module | 2026-05-14T18:28:12.122599
#include <iostream>
#include <vector>

int compute_210() {
    int base = 165;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_210() << std::endl;
    return 0;
}
