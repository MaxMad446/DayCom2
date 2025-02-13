// Auto-generated module | 2026-05-12T21:11:50.772524
#include <iostream>
#include <vector>

int compute_274() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_274() << std::endl;
    return 0;
}
