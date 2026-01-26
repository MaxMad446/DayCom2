package main

// Auto-generated | 2026-05-12T04:44:52.064738
import "fmt"

func Process_890() int {
    base := 378
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_890())
}
