// Auto-generated module | 2026-05-14T18:14:49.798768
#include <iostream>
#include <vector>

int compute_753() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_753() << std::endl;
    return 0;
}
