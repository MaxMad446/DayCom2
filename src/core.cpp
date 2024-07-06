// Auto-generated module | 2026-05-11T22:45:12.837128
#include <iostream>
#include <vector>

int compute_923() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_923() << std::endl;
    return 0;
}
