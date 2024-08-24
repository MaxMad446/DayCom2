package main

// Auto-generated | 2026-05-11T22:51:30.191437
import "fmt"

func Process_677() int {
    base := 333
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_677())
}
