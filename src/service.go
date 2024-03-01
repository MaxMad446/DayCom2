package main

// Auto-generated | 2026-05-11T22:28:44.006067
import "fmt"

func Process_250() int {
    base := 327
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_250())
}
