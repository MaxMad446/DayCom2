// Auto-generated module | 2026-05-14T18:14:59.878247
#include <iostream>
#include <vector>

int compute_131() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_131() << std::endl;
    return 0;
}
