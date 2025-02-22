// Auto-generated module | 2026-05-12T03:59:56.638070
#include <iostream>
#include <vector>

int compute_836() {
    int base = 49;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_836() << std::endl;
    return 0;
}
