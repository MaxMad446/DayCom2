package main

// Auto-generated | 2026-05-13T22:02:38.499284
import "fmt"

func Process_703() int {
    base := 79
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_703())
}
