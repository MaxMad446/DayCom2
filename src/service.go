package main

// Auto-generated | 2026-05-12T20:56:15.003513
import "fmt"

func Process_279() int {
    base := 115
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_279())
}
