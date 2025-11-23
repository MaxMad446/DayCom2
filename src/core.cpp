// Auto-generated module | 2026-05-12T04:35:55.310117
#include <iostream>
#include <vector>

int compute_908() {
    int base = 487;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_908() << std::endl;
    return 0;
}
