package main

// Auto-generated | 2026-05-12T21:09:37.499906
import "fmt"

func Process_126() int {
    base := 399
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_126())
}
