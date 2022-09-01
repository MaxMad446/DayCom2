// Auto-generated module | 2026-05-11T21:17:18.563075
#include <iostream>
#include <vector>

int compute_835() {
    int base = 403;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_835() << std::endl;
    return 0;
}
