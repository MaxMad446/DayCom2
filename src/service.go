package main

// Auto-generated | 2026-05-12T20:52:28.967841
import "fmt"

func Process_111() int {
    base := 266
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_111())
}
