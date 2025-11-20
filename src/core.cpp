// Auto-generated module | 2026-05-12T04:35:34.979912
#include <iostream>
#include <vector>

int compute_430() {
    int base = 15;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_430() << std::endl;
    return 0;
}
