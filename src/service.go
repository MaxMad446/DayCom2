package main

// Auto-generated | 2026-05-13T20:36:57.853108
import "fmt"

func Process_866() int {
    base := 255
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_866())
}
