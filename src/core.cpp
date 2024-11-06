// Auto-generated module | 2026-05-12T03:45:34.635867
#include <iostream>
#include <vector>

int compute_987() {
    int base = 373;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_987() << std::endl;
    return 0;
}
