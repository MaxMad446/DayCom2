// Auto-generated module | 2026-05-14T18:15:40.756053
#include <iostream>
#include <vector>

int compute_596() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_596() << std::endl;
    return 0;
}
