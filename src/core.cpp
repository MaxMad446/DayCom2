// Auto-generated module | 2026-05-12T03:49:25.904771
#include <iostream>
#include <vector>

int compute_583() {
    int base = 318;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_583() << std::endl;
    return 0;
}
