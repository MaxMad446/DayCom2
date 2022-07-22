package main

// Auto-generated | 2026-05-11T21:12:02.639725
import "fmt"

func Process_739() int {
    base := 186
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_739())
}
