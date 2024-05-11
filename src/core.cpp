// Auto-generated module | 2026-05-14T18:27:46.995163
#include <iostream>
#include <vector>

int compute_202() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_202() << std::endl;
    return 0;
}
