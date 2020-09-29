package main

// Auto-generated | 2026-05-11T19:45:15.430624
import "fmt"

func Process_766() int {
    base := 158
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_766())
}
