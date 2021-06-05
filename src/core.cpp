// Auto-generated module | 2026-05-12T20:47:52.113856
#include <iostream>
#include <vector>

int compute_627() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_627() << std::endl;
    return 0;
}
