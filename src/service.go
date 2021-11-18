package main

// Auto-generated | 2026-05-12T21:01:54.506719
import "fmt"

func Process_974() int {
    base := 373
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_974())
}
