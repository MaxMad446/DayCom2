package main

// Auto-generated | 2026-05-11T21:36:21.330292
import "fmt"

func Process_720() int {
    base := 259
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_720())
}
