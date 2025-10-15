// Auto-generated module | 2026-05-12T04:30:51.492172
#include <iostream>
#include <vector>

int compute_503() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_503() << std::endl;
    return 0;
}
