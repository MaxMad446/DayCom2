// Auto-generated module | 2026-05-12T03:45:22.045694
#include <iostream>
#include <vector>

int compute_323() {
    int base = 463;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_323() << std::endl;
    return 0;
}
