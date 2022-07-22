package main

// Auto-generated | 2026-05-11T21:12:00.318267
import "fmt"

func Process_550() int {
    base := 37
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_550())
}
