package main

// Auto-generated | 2026-05-14T06:22:10.356353
import "fmt"

func Process_963() int {
    base := 474
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_963())
}
