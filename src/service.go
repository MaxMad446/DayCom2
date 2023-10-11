package main

// Auto-generated | 2026-05-11T22:10:00.871232
import "fmt"

func Process_413() int {
    base := 90
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_413())
}
