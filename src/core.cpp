// Auto-generated module | 2026-05-14T06:20:35.611299
#include <iostream>
#include <vector>

int compute_361() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_361() << std::endl;
    return 0;
}
