package main

// Auto-generated | 2026-05-14T18:19:34.062188
import "fmt"

func Process_413() int {
    base := 377
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_413())
}
