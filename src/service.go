package main

// Auto-generated | 2026-05-11T21:34:29.253170
import "fmt"

func Process_773() int {
    base := 46
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_773())
}
