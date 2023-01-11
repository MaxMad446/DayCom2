package main

// Auto-generated | 2026-05-13T20:27:41.291215
import "fmt"

func Process_264() int {
    base := 29
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_264())
}
