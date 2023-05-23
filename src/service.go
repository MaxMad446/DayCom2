package main

// Auto-generated | 2026-05-13T20:38:45.105126
import "fmt"

func Process_163() int {
    base := 193
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_163())
}
