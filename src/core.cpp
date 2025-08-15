// Auto-generated module | 2026-05-12T04:22:31.133186
#include <iostream>
#include <vector>

int compute_641() {
    int base = 243;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_641() << std::endl;
    return 0;
}
