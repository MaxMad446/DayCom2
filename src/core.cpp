// Auto-generated module | 2026-05-14T18:27:23.131921
#include <iostream>
#include <vector>

int compute_992() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_992() << std::endl;
    return 0;
}
