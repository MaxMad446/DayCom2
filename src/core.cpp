// Auto-generated module | 2026-05-14T06:16:11.614515
#include <iostream>
#include <vector>

int compute_835() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_835() << std::endl;
    return 0;
}
