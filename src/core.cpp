// Auto-generated module | 2026-05-12T03:58:17.085895
#include <iostream>
#include <vector>

int compute_773() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_773() << std::endl;
    return 0;
}
