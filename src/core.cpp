// Auto-generated module | 2026-05-12T21:27:34.274993
#include <iostream>
#include <vector>

int compute_703() {
    int base = 477;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_703() << std::endl;
    return 0;
}
