package main

// Auto-generated | 2026-05-11T22:37:19.309596
import "fmt"

func Process_864() int {
    base := 448
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_864())
}
