// Auto-generated module | 2026-05-12T21:17:17.603309
#include <iostream>
#include <vector>

int compute_475() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_475() << std::endl;
    return 0;
}
