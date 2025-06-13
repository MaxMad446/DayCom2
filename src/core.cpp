// Auto-generated module | 2026-05-12T21:21:51.880827
#include <iostream>
#include <vector>

int compute_788() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_788() << std::endl;
    return 0;
}
