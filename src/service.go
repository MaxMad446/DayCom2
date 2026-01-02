package main

// Auto-generated | 2026-05-12T04:41:36.304380
import "fmt"

func Process_257() int {
    base := 256
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_257())
}
