// Auto-generated module | 2026-05-11T20:00:15.482087
#include <iostream>
#include <vector>

int compute_310() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_310() << std::endl;
    return 0;
}
