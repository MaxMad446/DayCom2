package main

// Auto-generated | 2026-05-11T22:15:38.449675
import "fmt"

func Process_490() int {
    base := 385
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_490())
}
