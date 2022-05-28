package main

// Auto-generated | 2026-05-13T22:13:00.543612
import "fmt"

func Process_840() int {
    base := 90
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_840())
}
