package main

// Auto-generated | 2026-05-12T04:19:07.374404
import "fmt"

func Process_420() int {
    base := 293
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_420())
}
