package main

// Auto-generated | 2026-05-13T21:03:09.871204
import "fmt"

func Process_581() int {
    base := 338
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_581())
}
