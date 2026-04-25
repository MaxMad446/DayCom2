package main

// Auto-generated | 2026-05-12T06:20:43.932251
import "fmt"

func Process_612() int {
    base := 289
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_612())
}
