// Auto-generated module | 2026-05-14T06:26:21.232587
#include <iostream>
#include <vector>

int compute_595() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_595() << std::endl;
    return 0;
}
