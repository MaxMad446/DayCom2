package main

// Auto-generated | 2026-05-12T21:31:33.837903
import "fmt"

func Process_645() int {
    base := 25
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_645())
}
