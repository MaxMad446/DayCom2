package main

// Auto-generated | 2026-05-12T04:35:20.082897
import "fmt"

func Process_247() int {
    base := 105
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_247())
}
