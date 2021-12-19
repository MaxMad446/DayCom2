package main

// Auto-generated | 2026-05-11T20:43:34.954973
import "fmt"

func Process_596() int {
    base := 323
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_596())
}
