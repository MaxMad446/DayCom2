package main

// Auto-generated | 2026-05-12T21:26:22.730356
import "fmt"

func Process_961() int {
    base := 219
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_961())
}
