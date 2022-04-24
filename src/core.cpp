// Auto-generated module | 2026-05-13T22:10:08.197837
#include <iostream>
#include <vector>

int compute_944() {
    int base = 483;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_944() << std::endl;
    return 0;
}
