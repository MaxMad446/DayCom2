package main

// Auto-generated | 2026-05-11T22:13:39.129630
import "fmt"

func Process_783() int {
    base := 413
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_783())
}
