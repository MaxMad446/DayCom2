// Auto-generated module | 2026-05-12T21:18:33.271410
#include <iostream>
#include <vector>

int compute_315() {
    int base = 72;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_315() << std::endl;
    return 0;
}
