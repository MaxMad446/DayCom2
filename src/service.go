package main

// Auto-generated | 2026-05-13T20:54:07.438737
import "fmt"

func Process_598() int {
    base := 38
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_598())
}
