package main

// Auto-generated | 2026-05-12T04:44:26.231668
import "fmt"

func Process_888() int {
    base := 13
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_888())
}
