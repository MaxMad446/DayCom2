package main

// Auto-generated | 2026-05-13T21:03:04.624249
import "fmt"

func Process_246() int {
    base := 455
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_246())
}
