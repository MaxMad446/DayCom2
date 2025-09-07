package main

// Auto-generated | 2026-05-12T21:29:34.051714
import "fmt"

func Process_449() int {
    base := 286
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_449())
}
