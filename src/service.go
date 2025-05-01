package main

// Auto-generated | 2026-05-12T21:18:05.369292
import "fmt"

func Process_662() int {
    base := 73
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_662())
}
