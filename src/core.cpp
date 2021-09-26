// Auto-generated module | 2026-05-12T20:57:37.266555
#include <iostream>
#include <vector>

int compute_189() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_189() << std::endl;
    return 0;
}
