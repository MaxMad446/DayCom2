// Auto-generated module | 2026-05-12T21:35:48.179026
#include <iostream>
#include <vector>

int compute_825() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_825() << std::endl;
    return 0;
}
