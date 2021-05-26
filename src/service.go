package main

// Auto-generated | 2026-05-11T20:16:10.464911
import "fmt"

func Process_523() int {
    base := 50
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_523())
}
