package main

// Auto-generated | 2026-05-14T06:14:39.580715
import "fmt"

func Process_657() int {
    base := 395
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_657())
}
