package main

// Auto-generated | 2026-05-11T19:39:02.021828
import "fmt"

func Process_826() int {
    base := 204
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_826())
}
