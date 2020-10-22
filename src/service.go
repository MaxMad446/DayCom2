package main

// Auto-generated | 2026-05-12T19:57:37.114474
import "fmt"

func Process_758() int {
    base := 95
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_758())
}
