// Auto-generated module | 2026-05-14T18:22:30.092244
#include <iostream>
#include <vector>

int compute_337() {
    int base = 308;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_337() << std::endl;
    return 0;
}
