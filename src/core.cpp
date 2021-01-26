// Auto-generated module | 2026-05-14T18:15:46.079868
#include <iostream>
#include <vector>

int compute_660() {
    int base = 443;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_660() << std::endl;
    return 0;
}
