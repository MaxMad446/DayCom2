// Auto-generated module | 2026-05-12T04:34:00.304519
#include <iostream>
#include <vector>

int compute_323() {
    int base = 138;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_323() << std::endl;
    return 0;
}
