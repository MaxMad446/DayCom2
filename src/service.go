package main

// Auto-generated | 2026-05-11T22:33:31.002146
import "fmt"

func Process_597() int {
    base := 160
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_597())
}
