package main

// Auto-generated | 2026-05-12T21:34:57.738804
import "fmt"

func Process_282() int {
    base := 322
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_282())
}
