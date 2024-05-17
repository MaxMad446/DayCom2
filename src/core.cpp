// Auto-generated module | 2026-05-11T22:38:47.074692
#include <iostream>
#include <vector>

int compute_116() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_116() << std::endl;
    return 0;
}
