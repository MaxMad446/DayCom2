// Auto-generated module | 2026-05-12T21:20:12.294944
#include <iostream>
#include <vector>

int compute_388() {
    int base = 58;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_388() << std::endl;
    return 0;
}
