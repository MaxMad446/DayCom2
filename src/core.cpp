// Auto-generated module | 2026-05-12T21:40:50.033667
#include <iostream>
#include <vector>

int compute_418() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_418() << std::endl;
    return 0;
}
