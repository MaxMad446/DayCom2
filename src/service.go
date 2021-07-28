package main

// Auto-generated | 2026-05-11T20:24:38.175667
import "fmt"

func Process_180() int {
    base := 196
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_180())
}
