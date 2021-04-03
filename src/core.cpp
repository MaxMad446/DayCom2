// Auto-generated module | 2026-05-12T21:38:21.156891
#include <iostream>
#include <vector>

int compute_282() {
    int base = 318;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_282() << std::endl;
    return 0;
}
