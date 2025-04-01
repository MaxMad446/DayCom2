// Auto-generated module | 2026-05-12T04:04:43.631868
#include <iostream>
#include <vector>

int compute_103() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_103() << std::endl;
    return 0;
}
