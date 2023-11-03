package main

// Auto-generated | 2026-05-11T22:13:03.869185
import "fmt"

func Process_485() int {
    base := 384
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_485())
}
