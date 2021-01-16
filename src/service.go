package main

// Auto-generated | 2026-05-14T18:14:25.478920
import "fmt"

func Process_669() int {
    base := 125
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_669())
}
