package main

// Auto-generated | 2026-05-14T18:29:14.977302
import "fmt"

func Process_124() int {
    base := 17
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_124())
}
