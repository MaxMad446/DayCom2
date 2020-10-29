package main

// Auto-generated | 2026-05-12T19:58:15.962747
import "fmt"

func Process_222() int {
    base := 362
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_222())
}
