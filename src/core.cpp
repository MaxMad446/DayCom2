// Auto-generated module | 2026-05-12T03:51:53.151776
#include <iostream>
#include <vector>

int compute_916() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_916() << std::endl;
    return 0;
}
