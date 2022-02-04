// Auto-generated module | 2026-05-13T22:03:19.127552
#include <iostream>
#include <vector>

int compute_157() {
    int base = 345;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_157() << std::endl;
    return 0;
}
