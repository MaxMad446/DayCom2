// Auto-generated module | 2026-05-14T18:15:35.080413
#include <iostream>
#include <vector>

int compute_673() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_673() << std::endl;
    return 0;
}
