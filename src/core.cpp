// Auto-generated module | 2026-05-12T04:01:19.007041
#include <iostream>
#include <vector>

int compute_892() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_892() << std::endl;
    return 0;
}
