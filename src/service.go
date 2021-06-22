package main

// Auto-generated | 2026-05-12T20:49:18.567400
import "fmt"

func Process_196() int {
    base := 385
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_196())
}
