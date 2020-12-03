package main

// Auto-generated | 2026-05-12T20:01:06.307731
import "fmt"

func Process_198() int {
    base := 100
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_198())
}
