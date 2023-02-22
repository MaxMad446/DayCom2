// Auto-generated module | 2026-05-11T21:39:44.211345
#include <iostream>
#include <vector>

int compute_726() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_726() << std::endl;
    return 0;
}
