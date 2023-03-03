package main

// Auto-generated | 2026-05-13T20:32:03.627667
import "fmt"

func Process_556() int {
    base := 10
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_556())
}
