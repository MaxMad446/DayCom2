// Auto-generated module | 2026-05-14T18:25:55.037103
#include <iostream>
#include <vector>

int compute_799() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_799() << std::endl;
    return 0;
}
