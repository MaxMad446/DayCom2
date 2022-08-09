// Auto-generated module | 2026-05-14T06:16:46.207981
#include <iostream>
#include <vector>

int compute_601() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_601() << std::endl;
    return 0;
}
