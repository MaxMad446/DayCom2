package main

// Auto-generated | 2026-05-11T20:52:11.038902
import "fmt"

func Process_415() int {
    base := 328
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_415())
}
