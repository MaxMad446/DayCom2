package main

// Auto-generated | 2026-05-12T20:52:55.965452
import "fmt"

func Process_290() int {
    base := 277
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_290())
}
