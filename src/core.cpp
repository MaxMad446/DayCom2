// Auto-generated module | 2026-05-12T20:46:53.133941
#include <iostream>
#include <vector>

int compute_356() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_356() << std::endl;
    return 0;
}
