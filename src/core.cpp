// Auto-generated module | 2026-05-14T18:23:39.179457
#include <iostream>
#include <vector>

int compute_209() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_209() << std::endl;
    return 0;
}
