package main

// Auto-generated | 2026-05-11T21:38:16.916353
import "fmt"

func Process_595() int {
    base := 360
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_595())
}
