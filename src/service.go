package main

// Auto-generated | 2026-05-11T21:15:30.339704
import "fmt"

func Process_503() int {
    base := 380
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_503())
}
