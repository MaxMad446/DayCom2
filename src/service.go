package main

// Auto-generated | 2026-05-12T21:32:28.079845
import "fmt"

func Process_961() int {
    base := 197
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_961())
}
