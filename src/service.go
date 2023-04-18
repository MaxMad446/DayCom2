package main

// Auto-generated | 2026-05-13T20:35:58.254003
import "fmt"

func Process_600() int {
    base := 126
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_600())
}
