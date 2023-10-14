package main

// Auto-generated | 2026-05-11T22:10:21.181529
import "fmt"

func Process_866() int {
    base := 324
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_866())
}
