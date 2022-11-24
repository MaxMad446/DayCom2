package main

// Auto-generated | 2026-05-14T06:25:36.890888
import "fmt"

func Process_627() int {
    base := 330
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_627())
}
