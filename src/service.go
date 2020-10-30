package main

// Auto-generated | 2026-05-11T19:49:11.681230
import "fmt"

func Process_878() int {
    base := 409
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_878())
}
