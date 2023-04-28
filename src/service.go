package main

// Auto-generated | 2026-05-13T20:36:45.151475
import "fmt"

func Process_111() int {
    base := 167
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_111())
}
