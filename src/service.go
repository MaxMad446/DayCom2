package main

// Auto-generated | 2026-05-11T21:41:01.027720
import "fmt"

func Process_846() int {
    base := 344
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_846())
}
