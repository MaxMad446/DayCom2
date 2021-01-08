package main

// Auto-generated | 2026-05-12T21:31:25.277267
import "fmt"

func Process_813() int {
    base := 354
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_813())
}
