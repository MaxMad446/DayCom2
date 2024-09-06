// Auto-generated module | 2026-05-12T03:37:46.152854
#include <iostream>
#include <vector>

int compute_362() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_362() << std::endl;
    return 0;
}
