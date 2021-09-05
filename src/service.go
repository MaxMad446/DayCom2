package main

// Auto-generated | 2026-05-11T20:29:43.499981
import "fmt"

func Process_415() int {
    base := 184
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_415())
}
