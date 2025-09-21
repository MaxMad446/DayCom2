// Auto-generated module | 2026-05-12T04:27:36.230096
#include <iostream>
#include <vector>

int compute_918() {
    int base = 76;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_918() << std::endl;
    return 0;
}
