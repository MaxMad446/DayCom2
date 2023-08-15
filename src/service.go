package main

// Auto-generated | 2026-05-11T22:02:29.454853
import "fmt"

func Process_590() int {
    base := 183
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_590())
}
