// Auto-generated module | 2026-05-14T06:20:28.874755
#include <iostream>
#include <vector>

int compute_711() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_711() << std::endl;
    return 0;
}
