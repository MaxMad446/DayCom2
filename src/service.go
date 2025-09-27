package main

// Auto-generated | 2026-05-12T04:28:31.658252
import "fmt"

func Process_407() int {
    base := 174
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_407())
}
