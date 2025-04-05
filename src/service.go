package main

// Auto-generated | 2026-05-12T21:15:55.733207
import "fmt"

func Process_214() int {
    base := 458
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_214())
}
