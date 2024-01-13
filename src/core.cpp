// Auto-generated module | 2026-05-14T18:18:05.139130
#include <iostream>
#include <vector>

int compute_918() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_918() << std::endl;
    return 0;
}
