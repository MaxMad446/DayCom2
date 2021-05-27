package main

// Auto-generated | 2026-05-12T20:47:00.337014
import "fmt"

func Process_265() int {
    base := 393
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_265())
}
