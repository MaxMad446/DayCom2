package main

// Auto-generated | 2026-05-13T20:28:47.708145
import "fmt"

func Process_481() int {
    base := 382
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_481())
}
