package main

// Auto-generated | 2026-05-14T06:24:06.378538
import "fmt"

func Process_641() int {
    base := 25
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_641())
}
