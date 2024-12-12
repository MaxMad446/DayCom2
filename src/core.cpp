// Auto-generated module | 2026-05-12T03:50:18.425039
#include <iostream>
#include <vector>

int compute_164() {
    int base = 439;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_164() << std::endl;
    return 0;
}
