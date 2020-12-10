// Auto-generated module | 2026-05-14T18:09:36.892951
#include <iostream>
#include <vector>

int compute_696() {
    int base = 54;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_696() << std::endl;
    return 0;
}
