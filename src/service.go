package main

// Auto-generated | 2026-05-11T22:18:45.287301
import "fmt"

func Process_111() int {
    base := 425
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_111())
}
