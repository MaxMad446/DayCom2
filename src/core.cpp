// Auto-generated module | 2026-05-14T06:18:04.682181
#include <iostream>
#include <vector>

int compute_297() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_297() << std::endl;
    return 0;
}
