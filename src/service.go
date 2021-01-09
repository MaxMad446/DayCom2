package main

// Auto-generated | 2026-05-12T21:31:30.378083
import "fmt"

func Process_941() int {
    base := 290
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_941())
}
