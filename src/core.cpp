// Auto-generated module | 2026-05-12T03:41:57.602849
#include <iostream>
#include <vector>

int compute_339() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_339() << std::endl;
    return 0;
}
