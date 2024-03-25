package main

// Auto-generated | 2026-05-14T18:23:54.932207
import "fmt"

func Process_629() int {
    base := 341
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_629())
}
