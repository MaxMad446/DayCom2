package main

// Auto-generated | 2026-05-14T06:18:56.498975
import "fmt"

func Process_896() int {
    base := 251
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_896())
}
