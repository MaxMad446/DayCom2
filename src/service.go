package main

// Auto-generated | 2026-05-11T22:52:30.545406
import "fmt"

func Process_350() int {
    base := 19
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_350())
}
