// Auto-generated module | 2026-05-14T18:26:50.033081
#include <iostream>
#include <vector>

int compute_890() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_890() << std::endl;
    return 0;
}
