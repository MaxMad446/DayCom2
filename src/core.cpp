// Auto-generated module | 2026-05-14T18:21:38.927772
#include <iostream>
#include <vector>

int compute_908() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_908() << std::endl;
    return 0;
}
