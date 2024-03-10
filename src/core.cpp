// Auto-generated module | 2026-05-14T18:22:52.049671
#include <iostream>
#include <vector>

int compute_983() {
    int base = 58;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_983() << std::endl;
    return 0;
}
