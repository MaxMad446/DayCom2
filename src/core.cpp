// Auto-generated module | 2026-05-14T18:05:28.299841
#include <iostream>
#include <vector>

int compute_169() {
    int base = 202;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_169() << std::endl;
    return 0;
}
