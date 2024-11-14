// Auto-generated module | 2026-05-12T03:46:35.941440
#include <iostream>
#include <vector>

int compute_269() {
    int base = 399;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_269() << std::endl;
    return 0;
}
