package main

// Auto-generated | 2026-05-11T20:13:59.624866
import "fmt"

func Process_803() int {
    base := 428
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_803())
}
