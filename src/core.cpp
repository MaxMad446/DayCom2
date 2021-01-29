// Auto-generated module | 2026-05-12T21:33:02.372312
#include <iostream>
#include <vector>

int compute_961() {
    int base = 458;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_961() << std::endl;
    return 0;
}
