package main

// Auto-generated | 2026-05-12T21:33:41.185893
import "fmt"

func Process_312() int {
    base := 302
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_312())
}
