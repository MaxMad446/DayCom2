package main

// Auto-generated | 2026-05-12T21:31:52.258518
import "fmt"

func Process_861() int {
    base := 352
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_861())
}
