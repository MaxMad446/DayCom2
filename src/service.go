package main

// Auto-generated | 2026-05-12T04:42:28.770097
import "fmt"

func Process_303() int {
    base := 127
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_303())
}
