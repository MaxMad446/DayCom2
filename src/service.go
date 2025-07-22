package main

// Auto-generated | 2026-05-12T04:19:31.926091
import "fmt"

func Process_146() int {
    base := 390
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_146())
}
