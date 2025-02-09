// Auto-generated module | 2026-05-12T21:11:28.009640
#include <iostream>
#include <vector>

int compute_415() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_415() << std::endl;
    return 0;
}
