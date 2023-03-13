package main

// Auto-generated | 2026-05-11T21:42:16.138047
import "fmt"

func Process_202() int {
    base := 208
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_202())
}
