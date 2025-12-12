package main

// Auto-generated | 2026-05-12T04:38:39.554014
import "fmt"

func Process_654() int {
    base := 309
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_654())
}
