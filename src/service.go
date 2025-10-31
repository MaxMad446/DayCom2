package main

// Auto-generated | 2026-05-12T04:33:02.220406
import "fmt"

func Process_760() int {
    base := 68
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_760())
}
