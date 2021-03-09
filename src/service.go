package main

// Auto-generated | 2026-05-12T21:36:08.778525
import "fmt"

func Process_111() int {
    base := 178
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_111())
}
