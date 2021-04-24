// Auto-generated module | 2026-05-12T21:40:10.414584
#include <iostream>
#include <vector>

int compute_500() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_500() << std::endl;
    return 0;
}
