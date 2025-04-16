package main

// Auto-generated | 2026-05-12T21:16:54.974269
import "fmt"

func Process_428() int {
    base := 304
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_428())
}
