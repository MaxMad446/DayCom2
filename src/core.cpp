// Auto-generated module | 2026-05-12T21:28:11.396571
#include <iostream>
#include <vector>

int compute_836() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_836() << std::endl;
    return 0;
}
