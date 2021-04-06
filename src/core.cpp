// Auto-generated module | 2026-05-12T21:38:35.845511
#include <iostream>
#include <vector>

int compute_386() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_386() << std::endl;
    return 0;
}
