// Auto-generated module | 2026-05-14T18:18:28.761998
#include <iostream>
#include <vector>

int compute_337() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_337() << std::endl;
    return 0;
}
