package main

// Auto-generated | 2026-05-11T19:26:12.037036
import "fmt"

func Process_112() int {
    base := 110
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_112())
}
