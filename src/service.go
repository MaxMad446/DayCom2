package main

// Auto-generated | 2026-05-11T20:45:01.727239
import "fmt"

func Process_226() int {
    base := 461
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_226())
}
