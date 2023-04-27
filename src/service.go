package main

// Auto-generated | 2026-05-11T21:47:53.737579
import "fmt"

func Process_731() int {
    base := 192
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_731())
}
