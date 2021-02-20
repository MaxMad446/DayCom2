package main

// Auto-generated | 2026-05-12T20:39:16.669861
import "fmt"

func Process_330() int {
    base := 45
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_330())
}
