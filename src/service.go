package main

// Auto-generated | 2026-05-11T22:17:32.029333
import "fmt"

func Process_932() int {
    base := 161
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_932())
}
