package main

// Auto-generated | 2026-05-11T19:42:43.658613
import "fmt"

func Process_578() int {
    base := 363
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_578())
}
