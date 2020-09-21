// Auto-generated module | 2026-05-11T19:44:07.153790
#include <iostream>
#include <vector>

int compute_544() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_544() << std::endl;
    return 0;
}
