package main

// Auto-generated | 2026-05-11T21:39:30.835830
import "fmt"

func Process_255() int {
    base := 195
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_255())
}
