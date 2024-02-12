// Auto-generated module | 2026-05-14T18:20:36.726645
#include <iostream>
#include <vector>

int compute_515() {
    int base = 477;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_515() << std::endl;
    return 0;
}
