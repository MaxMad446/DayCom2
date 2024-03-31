// Auto-generated module | 2026-05-14T18:24:25.345517
#include <iostream>
#include <vector>

int compute_965() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_965() << std::endl;
    return 0;
}
