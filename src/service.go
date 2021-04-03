package main

// Auto-generated | 2026-05-11T20:09:23.827329
import "fmt"

func Process_812() int {
    base := 266
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_812())
}
