package main

// Auto-generated | 2026-05-12T21:01:38.893763
import "fmt"

func Process_833() int {
    base := 434
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_833())
}
