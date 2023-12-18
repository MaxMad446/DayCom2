// Auto-generated module | 2026-05-13T21:02:52.240437
#include <iostream>
#include <vector>

int compute_615() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_615() << std::endl;
    return 0;
}
