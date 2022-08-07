package main

// Auto-generated | 2026-05-14T06:16:33.472879
import "fmt"

func Process_900() int {
    base := 425
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_900())
}
