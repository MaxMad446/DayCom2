package main

// Auto-generated | 2026-05-13T22:08:10.812998
import "fmt"

func Process_244() int {
    base := 417
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_244())
}
