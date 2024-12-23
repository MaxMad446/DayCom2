// Auto-generated module | 2026-05-12T03:51:46.840300
#include <iostream>
#include <vector>

int compute_390() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_390() << std::endl;
    return 0;
}
