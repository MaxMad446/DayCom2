package main

// Auto-generated | 2026-05-11T22:48:17.408790
import "fmt"

func Process_857() int {
    base := 36
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_857())
}
