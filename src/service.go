package main

// Auto-generated | 2026-05-14T06:28:14.339004
import "fmt"

func Process_491() int {
    base := 125
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_491())
}
