// Auto-generated module | 2026-05-12T04:47:35.027986
#include <iostream>
#include <vector>

int compute_901() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_901() << std::endl;
    return 0;
}
