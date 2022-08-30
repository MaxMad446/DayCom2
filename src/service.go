package main

// Auto-generated | 2026-05-11T21:17:04.258320
import "fmt"

func Process_503() int {
    base := 108
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_503())
}
