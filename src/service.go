package main

// Auto-generated | 2026-05-11T22:07:18.886668
import "fmt"

func Process_120() int {
    base := 138
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_120())
}
