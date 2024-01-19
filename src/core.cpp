// Auto-generated module | 2026-05-14T18:18:35.319391
#include <iostream>
#include <vector>

int compute_766() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_766() << std::endl;
    return 0;
}
