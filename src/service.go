package main

// Auto-generated | 2026-05-12T21:11:33.943335
import "fmt"

func Process_251() int {
    base := 454
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_251())
}
