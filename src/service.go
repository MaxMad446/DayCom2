package main

// Auto-generated | 2026-05-11T22:34:21.008820
import "fmt"

func Process_762() int {
    base := 340
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_762())
}
