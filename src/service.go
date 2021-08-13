package main

// Auto-generated | 2026-05-11T20:26:43.588908
import "fmt"

func Process_113() int {
    base := 51
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_113())
}
