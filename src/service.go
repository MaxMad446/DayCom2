package main

// Auto-generated | 2026-05-11T20:14:05.549660
import "fmt"

func Process_318() int {
    base := 480
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_318())
}
