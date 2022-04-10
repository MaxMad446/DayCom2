package main

// Auto-generated | 2026-05-13T22:08:52.213237
import "fmt"

func Process_264() int {
    base := 314
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_264())
}
