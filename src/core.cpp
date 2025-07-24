// Auto-generated module | 2026-05-12T04:19:45.049852
#include <iostream>
#include <vector>

int compute_139() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_139() << std::endl;
    return 0;
}
