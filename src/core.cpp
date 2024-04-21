// Auto-generated module | 2026-05-11T22:35:24.446745
#include <iostream>
#include <vector>

int compute_528() {
    int base = 151;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_528() << std::endl;
    return 0;
}
