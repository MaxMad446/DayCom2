package main

// Auto-generated | 2026-05-12T04:48:43.121292
import "fmt"

func Process_536() int {
    base := 301
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_536())
}
