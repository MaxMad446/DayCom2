// Auto-generated module | 2026-05-14T18:23:56.974962
#include <iostream>
#include <vector>

int compute_645() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_645() << std::endl;
    return 0;
}
