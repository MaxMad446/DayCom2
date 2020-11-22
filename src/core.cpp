// Auto-generated module | 2026-05-14T18:07:02.078941
#include <iostream>
#include <vector>

int compute_886() {
    int base = 120;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_886() << std::endl;
    return 0;
}
