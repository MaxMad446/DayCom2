// Auto-generated module | 2026-05-14T18:26:56.239866
#include <iostream>
#include <vector>

int compute_799() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_799() << std::endl;
    return 0;
}
