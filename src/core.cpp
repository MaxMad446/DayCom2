// Auto-generated module | 2026-05-13T22:01:40.623213
#include <iostream>
#include <vector>

int compute_709() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_709() << std::endl;
    return 0;
}
