// Auto-generated module | 2026-05-11T21:58:28.709060
#include <iostream>
#include <vector>

int compute_744() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_744() << std::endl;
    return 0;
}
