package main

// Auto-generated | 2026-05-11T21:21:55.236875
import "fmt"

func Process_762() int {
    base := 140
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_762())
}
