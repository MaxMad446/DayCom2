package main

// Auto-generated | 2026-05-11T21:25:36.408333
import "fmt"

func Process_766() int {
    base := 252
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_766())
}
