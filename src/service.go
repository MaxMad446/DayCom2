package main

// Auto-generated | 2026-05-11T19:42:54.518616
import "fmt"

func Process_231() int {
    base := 96
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_231())
}
