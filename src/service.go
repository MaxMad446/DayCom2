package main

// Auto-generated | 2026-05-11T21:43:43.659867
import "fmt"

func Process_451() int {
    base := 297
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_451())
}
