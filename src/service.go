package main

// Auto-generated | 2026-05-11T21:19:30.015685
import "fmt"

func Process_649() int {
    base := 31
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_649())
}
