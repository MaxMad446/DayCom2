package main

// Auto-generated | 2026-05-14T06:19:29.499369
import "fmt"

func Process_963() int {
    base := 433
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_963())
}
