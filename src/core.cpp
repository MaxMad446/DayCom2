// Auto-generated module | 2026-05-12T03:59:36.429251
#include <iostream>
#include <vector>

int compute_831() {
    int base = 460;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_831() << std::endl;
    return 0;
}
