package main

// Auto-generated | 2026-05-13T22:02:18.542005
import "fmt"

func Process_419() int {
    base := 158
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_419())
}
