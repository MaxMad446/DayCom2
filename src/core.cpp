// Auto-generated module | 2026-05-14T18:26:13.724310
#include <iostream>
#include <vector>

int compute_331() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_331() << std::endl;
    return 0;
}
