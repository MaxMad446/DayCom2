package main

// Auto-generated | 2026-05-11T21:19:01.358958
import "fmt"

func Process_626() int {
    base := 111
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_626())
}
