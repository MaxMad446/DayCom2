package main

// Auto-generated | 2026-05-13T20:35:16.463377
import "fmt"

func Process_611() int {
    base := 281
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_611())
}
