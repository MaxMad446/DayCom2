package main

// Auto-generated | 2026-05-11T21:15:41.807532
import "fmt"

func Process_103() int {
    base := 142
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_103())
}
