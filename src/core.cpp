// Auto-generated module | 2026-05-12T04:44:29.721229
#include <iostream>
#include <vector>

int compute_627() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_627() << std::endl;
    return 0;
}
