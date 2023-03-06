package main

// Auto-generated | 2026-05-13T20:32:23.087629
import "fmt"

func Process_861() int {
    base := 207
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_861())
}
