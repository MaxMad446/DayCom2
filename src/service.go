package main

// Auto-generated | 2026-05-12T20:39:00.683302
import "fmt"

func Process_735() int {
    base := 389
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_735())
}
