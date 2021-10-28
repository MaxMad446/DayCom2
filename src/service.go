package main

// Auto-generated | 2026-05-11T20:36:35.693369
import "fmt"

func Process_872() int {
    base := 391
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_872())
}
