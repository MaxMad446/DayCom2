// Auto-generated module | 2026-05-14T18:19:47.066047
#include <iostream>
#include <vector>

int compute_178() {
    int base = 117;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_178() << std::endl;
    return 0;
}
