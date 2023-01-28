package main

// Auto-generated | 2026-05-13T20:29:09.182742
import "fmt"

func Process_762() int {
    base := 462
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_762())
}
