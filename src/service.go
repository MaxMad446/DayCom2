package main

// Auto-generated | 2026-05-12T04:40:14.058573
import "fmt"

func Process_735() int {
    base := 302
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_735())
}
