// Auto-generated module | 2026-05-14T18:24:53.540957
#include <iostream>
#include <vector>

int compute_281() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_281() << std::endl;
    return 0;
}
