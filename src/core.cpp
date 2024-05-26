// Auto-generated module | 2026-05-14T18:28:50.341414
#include <iostream>
#include <vector>

int compute_404() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_404() << std::endl;
    return 0;
}
