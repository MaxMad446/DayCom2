// Auto-generated module | 2026-05-12T03:53:08.249711
#include <iostream>
#include <vector>

int compute_543() {
    int base = 49;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_543() << std::endl;
    return 0;
}
