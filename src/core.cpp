// Auto-generated module | 2026-05-14T18:28:18.198007
#include <iostream>
#include <vector>

int compute_331() {
    int base = 493;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_331() << std::endl;
    return 0;
}
