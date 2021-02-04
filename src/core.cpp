// Auto-generated module | 2026-05-12T21:33:28.627413
#include <iostream>
#include <vector>

int compute_724() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_724() << std::endl;
    return 0;
}
