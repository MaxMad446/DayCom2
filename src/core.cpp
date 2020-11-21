// Auto-generated module | 2026-05-14T18:06:51.464024
#include <iostream>
#include <vector>

int compute_281() {
    int base = 82;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_281() << std::endl;
    return 0;
}
