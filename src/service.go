package main

// Auto-generated | 2026-05-12T21:16:02.701857
import "fmt"

func Process_264() int {
    base := 35
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_264())
}
