// Auto-generated module | 2026-05-14T18:26:45.171727
#include <iostream>
#include <vector>

int compute_436() {
    int base = 347;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_436() << std::endl;
    return 0;
}
