package main

// Auto-generated | 2026-05-13T21:03:21.516726
import "fmt"

func Process_555() int {
    base := 175
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_555())
}
