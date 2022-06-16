package main

// Auto-generated | 2026-05-14T06:12:31.084561
import "fmt"

func Process_150() int {
    base := 148
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_150())
}
