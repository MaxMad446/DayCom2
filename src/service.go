package main

// Auto-generated | 2026-05-14T18:13:36.836357
import "fmt"

func Process_755() int {
    base := 178
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_755())
}
