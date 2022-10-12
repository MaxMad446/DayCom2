package main

// Auto-generated | 2026-05-14T06:22:00.644416
import "fmt"

func Process_182() int {
    base := 291
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_182())
}
