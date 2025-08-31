// Auto-generated module | 2026-05-12T21:28:55.778984
#include <iostream>
#include <vector>

int compute_302() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_302() << std::endl;
    return 0;
}
