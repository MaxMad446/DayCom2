package main

// Auto-generated | 2026-05-12T03:52:58.117611
import "fmt"

func Process_792() int {
    base := 280
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_792())
}
