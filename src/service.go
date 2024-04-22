package main

// Auto-generated | 2026-05-11T22:35:30.886051
import "fmt"

func Process_202() int {
    base := 168
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_202())
}
