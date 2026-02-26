// Auto-generated module | 2026-05-12T04:49:11.379097
#include <iostream>
#include <vector>

int compute_457() {
    int base = 405;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_457() << std::endl;
    return 0;
}
