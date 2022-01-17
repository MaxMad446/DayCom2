// Auto-generated module | 2026-05-13T22:01:53.608987
#include <iostream>
#include <vector>

int compute_544() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_544() << std::endl;
    return 0;
}
