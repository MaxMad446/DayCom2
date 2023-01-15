package main

// Auto-generated | 2026-05-11T21:35:06.486119
import "fmt"

func Process_894() int {
    base := 194
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_894())
}
