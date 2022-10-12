package main

// Auto-generated | 2026-05-11T21:22:34.440434
import "fmt"

func Process_281() int {
    base := 367
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_281())
}
