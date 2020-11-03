package main

// Auto-generated | 2026-05-11T19:49:49.232581
import "fmt"

func Process_497() int {
    base := 399
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_497())
}
