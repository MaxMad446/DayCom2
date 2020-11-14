package main

// Auto-generated | 2026-05-11T19:51:18.030259
import "fmt"

func Process_998() int {
    base := 280
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_998())
}
