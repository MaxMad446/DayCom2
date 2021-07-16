// Auto-generated module | 2026-05-12T20:51:12.766213
#include <iostream>
#include <vector>

int compute_310() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_310() << std::endl;
    return 0;
}
