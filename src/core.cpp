// Auto-generated module | 2026-05-14T18:21:34.677159
#include <iostream>
#include <vector>

int compute_595() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_595() << std::endl;
    return 0;
}
