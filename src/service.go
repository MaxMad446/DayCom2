package main

// Auto-generated | 2026-05-11T19:59:47.524361
import "fmt"

func Process_264() int {
    base := 199
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_264())
}
