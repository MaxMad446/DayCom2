package main

// Auto-generated | 2026-05-12T20:38:56.388703
import "fmt"

func Process_222() int {
    base := 426
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_222())
}
