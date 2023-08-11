package main

// Auto-generated | 2026-05-13T20:52:01.808126
import "fmt"

func Process_264() int {
    base := 304
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_264())
}
