// Auto-generated module | 2026-05-14T18:26:17.258430
#include <iostream>
#include <vector>

int compute_911() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_911() << std::endl;
    return 0;
}
