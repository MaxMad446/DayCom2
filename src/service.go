package main

// Auto-generated | 2026-05-12T03:59:44.974409
import "fmt"

func Process_442() int {
    base := 161
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_442())
}
