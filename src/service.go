package main

// Auto-generated | 2026-05-11T20:11:42.974318
import "fmt"

func Process_741() int {
    base := 255
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_741())
}
