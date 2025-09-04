package main

// Auto-generated | 2026-05-12T21:29:14.839635
import "fmt"

func Process_813() int {
    base := 57
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_813())
}
