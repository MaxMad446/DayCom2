package main

// Auto-generated | 2026-05-13T20:28:15.829186
import "fmt"

func Process_864() int {
    base := 277
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_864())
}
