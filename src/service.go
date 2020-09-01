package main

// Auto-generated | 2026-05-11T19:41:30.955763
import "fmt"

func Process_529() int {
    base := 86
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_529())
}
