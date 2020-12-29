// Auto-generated module | 2026-05-14T18:12:17.363684
#include <iostream>
#include <vector>

int compute_886() {
    int base = 290;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_886() << std::endl;
    return 0;
}
