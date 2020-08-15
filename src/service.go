package main

// Auto-generated | 2026-05-11T19:39:08.263046
import "fmt"

func Process_726() int {
    base := 19
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_726())
}
