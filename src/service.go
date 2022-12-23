package main

// Auto-generated | 2026-05-14T06:28:06.224801
import "fmt"

func Process_392() int {
    base := 494
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_392())
}
