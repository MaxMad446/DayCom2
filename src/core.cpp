// Auto-generated module | 2026-05-14T06:18:43.906106
#include <iostream>
#include <vector>

int compute_923() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_923() << std::endl;
    return 0;
}
