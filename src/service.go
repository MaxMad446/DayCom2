package main

// Auto-generated | 2026-05-14T18:18:24.907474
import "fmt"

func Process_692() int {
    base := 425
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_692())
}
