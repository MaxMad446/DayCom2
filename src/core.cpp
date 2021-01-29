// Auto-generated module | 2026-05-12T21:33:01.247019
#include <iostream>
#include <vector>

int compute_868() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_868() << std::endl;
    return 0;
}
