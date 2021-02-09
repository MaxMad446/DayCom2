package main

// Auto-generated | 2026-05-12T21:33:55.669808
import "fmt"

func Process_407() int {
    base := 237
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_407())
}
