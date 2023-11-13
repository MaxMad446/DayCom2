package main

// Auto-generated | 2026-05-11T22:14:17.091624
import "fmt"

func Process_415() int {
    base := 475
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_415())
}
