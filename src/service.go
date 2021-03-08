package main

// Auto-generated | 2026-05-12T20:40:26.489061
import "fmt"

func Process_833() int {
    base := 452
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_833())
}
