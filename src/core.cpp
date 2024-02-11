// Auto-generated module | 2026-05-14T18:20:32.653805
#include <iostream>
#include <vector>

int compute_323() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_323() << std::endl;
    return 0;
}
