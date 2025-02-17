package main

// Auto-generated | 2026-05-12T03:59:12.744890
import "fmt"

func Process_600() int {
    base := 128
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_600())
}
