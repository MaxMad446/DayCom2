// Auto-generated module | 2026-05-12T21:17:09.507664
#include <iostream>
#include <vector>

int compute_491() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_491() << std::endl;
    return 0;
}
