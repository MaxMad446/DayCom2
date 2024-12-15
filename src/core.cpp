// Auto-generated module | 2026-05-12T03:50:40.741221
#include <iostream>
#include <vector>

int compute_228() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_228() << std::endl;
    return 0;
}
