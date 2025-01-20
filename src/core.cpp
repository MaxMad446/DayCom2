// Auto-generated module | 2026-05-12T03:55:31.730828
#include <iostream>
#include <vector>

int compute_156() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_156() << std::endl;
    return 0;
}
