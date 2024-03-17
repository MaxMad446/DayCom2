package main

// Auto-generated | 2026-05-11T22:30:43.358232
import "fmt"

func Process_359() int {
    base := 483
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_359())
}
