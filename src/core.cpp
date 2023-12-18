// Auto-generated module | 2026-05-11T22:18:54.599070
#include <iostream>
#include <vector>

int compute_870() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_870() << std::endl;
    return 0;
}
