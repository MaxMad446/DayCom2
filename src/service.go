package main

// Auto-generated | 2026-05-13T20:56:14.726339
import "fmt"

func Process_894() int {
    base := 440
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_894())
}
