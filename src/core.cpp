// Auto-generated module | 2026-05-11T20:39:32.867702
#include <iostream>
#include <vector>

int compute_310() {
    int base = 437;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_310() << std::endl;
    return 0;
}
