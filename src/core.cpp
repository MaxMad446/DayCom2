// Auto-generated module | 2026-05-12T04:16:26.156843
#include <iostream>
#include <vector>

int compute_619() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_619() << std::endl;
    return 0;
}
