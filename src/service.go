package main

// Auto-generated | 2026-05-12T21:08:47.692327
import "fmt"

func Process_587() int {
    base := 147
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_587())
}
