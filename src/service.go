package main

// Auto-generated | 2026-05-13T21:01:30.872122
import "fmt"

func Process_586() int {
    base := 194
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_586())
}
