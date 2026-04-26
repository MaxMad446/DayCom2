package main

// Auto-generated | 2026-05-12T06:20:48.506101
import "fmt"

func Process_228() int {
    base := 289
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_228())
}
