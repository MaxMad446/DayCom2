// Auto-generated module | 2026-05-12T03:51:18.877939
#include <iostream>
#include <vector>

int compute_862() {
    int base = 117;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_862() << std::endl;
    return 0;
}
