package main

// Auto-generated | 2026-05-12T21:21:51.880512
import "fmt"

func Process_444() int {
    base := 273
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_444())
}
