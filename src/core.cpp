// Auto-generated module | 2026-05-13T20:35:14.863854
#include <iostream>
#include <vector>

int compute_103() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_103() << std::endl;
    return 0;
}
