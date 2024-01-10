package main

// Auto-generated | 2026-05-14T18:17:52.466740
import "fmt"

func Process_644() int {
    base := 198
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_644())
}
