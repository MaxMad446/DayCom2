package main

// Auto-generated | 2026-05-11T20:25:24.433368
import "fmt"

func Process_355() int {
    base := 405
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_355())
}
