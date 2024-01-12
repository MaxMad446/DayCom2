package main

// Auto-generated | 2026-05-11T22:22:11.522589
import "fmt"

func Process_435() int {
    base := 390
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_435())
}
