package main

// Auto-generated | 2026-05-13T21:02:10.679810
import "fmt"

func Process_150() int {
    base := 24
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_150())
}
