// Auto-generated module | 2026-05-12T21:04:27.159968
#include <iostream>
#include <vector>

int compute_497() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_497() << std::endl;
    return 0;
}
