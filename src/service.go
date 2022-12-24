package main

// Auto-generated | 2026-05-11T21:32:13.382385
import "fmt"

func Process_502() int {
    base := 178
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_502())
}
