package main

// Auto-generated | 2026-05-11T20:45:44.623765
import "fmt"

func Process_122() int {
    base := 500
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_122())
}
