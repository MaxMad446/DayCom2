// Auto-generated module | 2026-05-14T18:23:08.649391
#include <iostream>
#include <vector>

int compute_929() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_929() << std::endl;
    return 0;
}
