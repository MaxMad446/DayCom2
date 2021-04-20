// Auto-generated module | 2026-05-12T21:39:49.059047
#include <iostream>
#include <vector>

int compute_744() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_744() << std::endl;
    return 0;
}
