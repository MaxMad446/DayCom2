package main

// Auto-generated | 2026-05-11T20:06:35.569044
import "fmt"

func Process_211() int {
    base := 295
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_211())
}
