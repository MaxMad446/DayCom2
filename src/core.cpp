// Auto-generated module | 2026-05-12T21:39:54.664533
#include <iostream>
#include <vector>

int compute_680() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_680() << std::endl;
    return 0;
}
