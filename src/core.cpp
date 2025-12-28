// Auto-generated module | 2026-05-12T04:40:53.735799
#include <iostream>
#include <vector>

int compute_680() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_680() << std::endl;
    return 0;
}
