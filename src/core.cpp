// Auto-generated module | 2026-05-12T21:03:05.652586
#include <iostream>
#include <vector>

int compute_475() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_475() << std::endl;
    return 0;
}
