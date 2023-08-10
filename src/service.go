package main

// Auto-generated | 2026-05-11T22:01:49.059532
import "fmt"

func Process_122() int {
    base := 448
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_122())
}
