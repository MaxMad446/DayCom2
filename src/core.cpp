// Auto-generated module | 2026-05-12T03:50:15.280099
#include <iostream>
#include <vector>

int compute_401() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_401() << std::endl;
    return 0;
}
