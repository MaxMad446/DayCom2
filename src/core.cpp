// Auto-generated module | 2026-05-13T20:48:53.676742
#include <iostream>
#include <vector>

int compute_605() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_605() << std::endl;
    return 0;
}
