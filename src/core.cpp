// Auto-generated module | 2026-05-12T20:39:10.645918
#include <iostream>
#include <vector>

int compute_475() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_475() << std::endl;
    return 0;
}
