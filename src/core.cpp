// Auto-generated module | 2026-05-14T18:23:25.845281
#include <iostream>
#include <vector>

int compute_896() {
    int base = 373;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_896() << std::endl;
    return 0;
}
