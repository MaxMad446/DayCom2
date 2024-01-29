// Auto-generated module | 2026-05-14T18:19:32.274556
#include <iostream>
#include <vector>

int compute_935() {
    int base = 150;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_935() << std::endl;
    return 0;
}
