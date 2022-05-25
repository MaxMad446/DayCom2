// Auto-generated module | 2026-05-13T22:12:43.613915
#include <iostream>
#include <vector>

int compute_641() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_641() << std::endl;
    return 0;
}
