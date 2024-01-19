// Auto-generated module | 2026-05-14T18:18:33.918846
#include <iostream>
#include <vector>

int compute_740() {
    int base = 84;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_740() << std::endl;
    return 0;
}
