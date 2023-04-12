package main

// Auto-generated | 2026-05-11T21:45:56.241304
import "fmt"

func Process_264() int {
    base := 413
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_264())
}
